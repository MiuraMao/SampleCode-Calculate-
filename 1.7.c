#include <stdio.h>
//マシンイプシロン

int main(void)
{
    double deps=1.0;    /*マシンイプシロン（double型）*/
    double dtmp;        /*作業用変数（double型）*/
    float feps=1.0;     /*マシンイプシロン（float型）*/
    float ftmp;         /*作業用変数（float型）*/

    /*double型のマシンイプシロンの計算*/
    /*deps + 1 > 1の間、depsを２で割り続ける*/
    for (dtmp = deps + 1.0 ; dtmp > 1 ; deps /= 2.0, dtmp = deps + 1.0);
    printf("double型のMachine epsilonは %-16g\n", 2.0*deps);    //左寄せ
    printf("double型のUnit roundoffは %-16g\n", deps);          //左寄せ
    /*float型のマシンイプシロンの計算*/
    /*feps + 1 > 1 の間、fepsを２で割り続ける*/
    for (ftmp = feps + 1.0 ; ftmp > 1 ; feps /= 2.0, ftmp = feps + 1.0);
    printf("float型のMachine epsilonは %-16g\n", 2.0*feps);
    printf("float型のUnit roundoffは %-16g\n", feps);

    return 0;
}