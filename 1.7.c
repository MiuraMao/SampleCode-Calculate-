#include <stdio.h>
//�}�V���C�v�V����

int main(void)
{
    double deps=1.0;    /*�}�V���C�v�V�����idouble�^�j*/
    double dtmp;        /*��Ɨp�ϐ��idouble�^�j*/
    float feps=1.0;     /*�}�V���C�v�V�����ifloat�^�j*/
    float ftmp;         /*��Ɨp�ϐ��ifloat�^�j*/

    /*double�^�̃}�V���C�v�V�����̌v�Z*/
    /*deps + 1 > 1�̊ԁAdeps���Q�Ŋ��葱����*/
    for (dtmp = deps + 1.0 ; dtmp > 1 ; deps /= 2.0, dtmp = deps + 1.0);
    printf("double�^��Machine epsilon�� %-16g\n", 2.0*deps);    //����
    printf("double�^��Unit roundoff�� %-16g\n", deps);          //����
    /*float�^�̃}�V���C�v�V�����̌v�Z*/
    /*feps + 1 > 1 �̊ԁAfeps���Q�Ŋ��葱����*/
    for (ftmp = feps + 1.0 ; ftmp > 1 ; feps /= 2.0, ftmp = feps + 1.0);
    printf("float�^��Machine epsilon�� %-16g\n", 2.0*feps);
    printf("float�^��Unit roundoff�� %-16g\n", feps);

    return 0;
}