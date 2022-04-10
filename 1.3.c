#include <stdio.h>
#include <string.h>
//浮動小数点数フォーマル出力プログラム

int main(void)
{
    double a;
    char c[sizeof(a)];  /*char型のデータサイズは１バイト*/
    int i, j, k;

    printf("数字を入力してください--->");
    scanf("%lf", &a);

    memcpy(c, &a, sizeof(a));  /*aの内容を配列cにコピー（前２つは領域の先頭アドレスをさす）*/

    printf("sEEEEEEE EEEEdddd dddddddd... \n");
    for ( i = sizeof(a) - 1 ; i >= 0; i--)
    {
        for ( j = sizeof(c[i]) * 8 -1 ; j >= 0; j--)
        {
            k = c[i] & (1 << j);    /*jを１つずつずらして論理積をとる*/
            printf("%d", k ? 1 : 0);    /*k=0でなければ1、k=0ならば0を表示*/
        }
        printf(" ");
    }
    printf("\n");

    return 0;
}