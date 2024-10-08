#include <stdio.h>

int main () {
    
    int a1 = 5, b1 = 3, c1 = 10, d1 = 7;
    printf("++5 * 3 / 10 %% 7 = %d \n", ++a1 * b1 / c1 % d1);

    int a2 = 3, b2 = 2, c2 = 4, d2 = 7;
    
    printf("3 * 2++ - 4 * 7 = %d \n", a2 * b2++ - c2 * d2);
    printf("Nilai Asli : %d \n", a2 * b2 - c2 * d2); 

    int a3 = 7, b3 = 3, c3 = 5, d3 = 7, e3 = 10, f3 = 11;
    printf("7 >> 3 | 5 & 7 ^ 10 & 11 = %d \n", a3 >> b3 | c3 & d3 ^ e3 & f3);

    int a4 = 9, b4 = 4, c4 = 9, d4 = 8, e4 = 10;
    printf("9 << 4 ^ 9 & 8 ^ 10 = %d", a4 << b4 ^ c4 & d4 ^ e4);
}