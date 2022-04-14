#include <stdio.h>
#include <stdlib.h>

#define M 2     /*�s�̗v�f��*/
#define N 3     /*��̗v�f��*/

/*�s��̗̈�m��*/
double **dmatrix(int nr1, int nr2, int nl1, int nl2);
/*�s��̗̈���*/
void free_dmatrix(double **a, int nr1, int nr2, int nl1, int nl2);

int main(void)
{
    double **a;
    int i, j;

    a = dmatrix(1, M, 1, N);    /*�������̊m��*/

    for( i=1; i<=M; i++){       /*�v�f�̑��*/
        for( j=1; j<=N; j++){
            a[i][j] = (i+j)/2.0;
            printf("a[%d][%d]=%f \n",i,j,a[i][j]);
        }
    }
    free_dmatrix( a, 1, M, 1, N);   /*�������̉��*/

    return 0;
}

double **dmatrix(int nr1, int nr2, int nl1, int nl2)
{
    int i, nrow, ncol;
    double **a;

    nrow = nr2 - nr1 + 1 ;  /*�s�̐�*/
    ncol = nl2 - nl1 + 1 ;  /*��̐�*/

    /*�s�̊m��*/
    if ( ( a = malloc( nrow*sizeof(double *) ) ) == NULL )
    {
        printf("���������m�ۂł��܂���i�s��a�j\n");
        exit(1);
    }
    a = a - nr1;    /*�s�����炷*/

    /*��̊m��*/
    for( i=nr1; i<=nr2; i++) a[i] = malloc(ncol*sizeof(double));
    for( i=nr1; i<=nr2; i++) a[i] = a[i] - nl1;     /*������炷*/

    return(a);
}
void free_dmatrix(double **a, int nr1, int nr2, int nl1, int nl2)
{
    int i;

    /*�������̉��*/
    for( i = nr1 ; i <= nr2 ; i++ ) free((void *)(a[i]+nl1));   //�Y�����P����n�܂��Ă��邽��
    free((void *)(a+nr1));      //�Y�����P����n�܂��Ă��邽��
}