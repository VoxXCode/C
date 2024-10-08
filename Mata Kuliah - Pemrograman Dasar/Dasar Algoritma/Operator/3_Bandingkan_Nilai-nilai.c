#include <stdio.h>

int main () {

    int v__nol = 0, v__nil = 0, v__satu = 1;
    char v__huruf_besar = 'A', v__huruf_kecil = 'a';

    printf("Persamaan ( 0 == 0 ) : %d \n", v__nol == v__nil);
    printf("Persamaan (0 == 1) : %d \n", v__nol == v__satu);
    printf("Persamaan (A == a) : %d \n", v__huruf_besar == v__huruf_kecil);
    printf("Pertidaksamaan (A != a) : %d \n", v__huruf_besar != v__huruf_kecil);

    printf("Lebih besar dari (1 > 0) : %d \n", v__satu > v__nil);
    printf("Lebih kecil dari (1 < 0) : %d \n", v__satu < v__nil);

    printf("Lebih besar atau sama dengan (0 >= 0) : %d \n", v__nol >= v__nil);
    printf("Lebih kecil atau sama dengan (1 <= 0) : %d \n", v__satu <= v__nil);
}