#include <stdio.h>
//C�łQ�i���\�L�͂ł��Ȃ����߂W�܂��͂P�U�i���ɂ���

int main(void)
{
    char x=123, y;

    y = x & 0xf0;   //�_���ς̃r�b�g���Z
    printf("x=%d, y=%d\n",x,y);
    
    return 0;
}