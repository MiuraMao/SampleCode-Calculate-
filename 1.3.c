#include <stdio.h>
#include <string.h>
//���������_���t�H�[�}���o�̓v���O����

int main(void)
{
    double a;
    char c[sizeof(a)];  /*char�^�̃f�[�^�T�C�Y�͂P�o�C�g*/
    int i, j, k;

    printf("��������͂��Ă�������--->");
    scanf("%lf", &a);

    memcpy(c, &a, sizeof(a));  /*a�̓��e��z��c�ɃR�s�[�i�O�Q�͗̈�̐擪�A�h���X�������j*/

    printf("sEEEEEEE EEEEdddd dddddddd... \n");
    for ( i = sizeof(a) - 1 ; i >= 0; i--)
    {
        for ( j = sizeof(c[i]) * 8 -1 ; j >= 0; j--)
        {
            k = c[i] & (1 << j);    /*j���P�����炵�Ę_���ς��Ƃ�*/
            printf("%d", k ? 1 : 0);    /*k=0�łȂ����1�Ak=0�Ȃ��0��\��*/
        }
        printf(" ");
    }
    printf("\n");

    return 0;
}