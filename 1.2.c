#include <stdio.h>
//シフト演算

int main(void)
{
    unsigned char x=1, y;

    y = x << 6;     //左に６シフト
    printf("x=%d, y=%d\n",x,y);

    return 0;
}