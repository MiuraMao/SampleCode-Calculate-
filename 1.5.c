#include <stdio.h>
//Infinity�i������j

int main(void)
{
    double a, b;
    a=1.0/0.0;      //������̐���
    printf("a=%f \n", a);
    b=1.0/a;        //������ɂ�鏜�Z
    printf("b=%f \n", b);
    return 0;
}