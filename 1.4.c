#include <stdio.h>
//NaN�i�񐔁j

int main(void)
{
    double a, b;
    a=0.0/0.0;      /*NaN�̔���*/
    printf("a=%f \n", a);
    b=1.0+a;        /*NaN�ɂ�鉉�Z*/
    printf("b=%f \n", b);
    return 0;
}