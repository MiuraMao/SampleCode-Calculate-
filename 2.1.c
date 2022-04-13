#include <stdio.h>
#include <stdlib.h>

#define N 5     /*要素数の指定*/

double *dvector(int i, int j);      /*ベクトル領域の確保*/
void free_dvector(double *a, int i);    /*領域の解放*/

int main(void)
{
    double *a, *b;
    int i;

    printf("aの領域確保\n");    /*配列aの添え字は1～N*/
    a = dvector(1,N);
    for ( i=1; i<=N; i++)
    {
        a[i]=(double)i/20.0;
        printf("a[%d]=%f \n",i,a[i]);
    }
    free_dvector(a,1);
    printf("aを解放しました\n");

    printf("bの領域確保\n");
    b = dvector(2,N+1);     /*配列bの添え字は2～N+1*/
    for ( i=2; i<=N+1; i++)
    {
        b[i]=(double)i/20.0;
        printf("b[%d]=%f \n",i,b[i]);
        free_dvector(b,1);
        printf("bを解放しました\n");

        return 0;
    }
}
double *dvector(int i, int j)   /*a[i]～a[j]の領域を確保*/
{
    double *a;

    if ( (a = malloc( ((j-i+1)*sizeof(double)) )) == NULL )
    {
        printf("メモリが確保できません(from dvector) \n");
        exit(1);
    }

    return(a-1);
}

void free_dvector(double *a, int i)
{
    free( (void *)(a + 1) );    /*(void *)型へのキャストが必要*/
}