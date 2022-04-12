#include <stdio.h>
//Infinityi–³ŒÀ‘åj

int main(void)
{
    double a, b;
    a=1.0/0.0;      //–³ŒÀ‘å‚Ì¶¬
    printf("a=%f \n", a);
    b=1.0/a;        //–³ŒÀ‘å‚É‚æ‚éœZ
    printf("b=%f \n", b);
    return 0;
}