#include <stdio.h>
//NaNi”ñ”j

int main(void)
{
    double a, b;
    a=0.0/0.0;      /*NaN‚Ì”­¶*/
    printf("a=%f \n", a);
    b=1.0+a;        /*NaN‚É‚æ‚é‰‰Z*/
    printf("b=%f \n", b);
    return 0;
}