#include <stdio.h>
//Cで２進数表記はできないため８または１６進数にする

int main(void)
{
    char x=123, y;

    y = x & 0xf0;   //論理積のビット演算
    printf("x=%d, y=%d\n",x,y);
    
    return 0;
}