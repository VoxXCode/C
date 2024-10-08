#include <stdio.h>

int main () {
    int C, F;

    printf("Masukkan Celcius : "); scanf("%d", &C);

    F = C * 1.8 + 32;

    printf("Hasil Konversi dari Celcius ke Fahrenheit adalah %d", F);
}