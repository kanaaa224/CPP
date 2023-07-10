#include <stdio.h>

void main() {
    int m = 0;

    printf("金種計算｜円をそれぞれの金種に変換します。\n");

    printf("円を入力：");
    scanf_s("%d", &m);

    // 金種計算
    int man = m / 10000;          // 万円の計算
    int sen = (m % 10000) / 1000; // 千円の計算
    int hyaku = (m % 1000) / 100; // 百円の計算
    int jyuu = (m % 100) / 10;    // 十円の計算
    int en = m % 10;              // 一円の計算

    printf("%d 円 -> %d 万 %d 千 %d 百 %02d 十 %01d 円\n", m, man, sen, hyaku, jyuu, en);
};
