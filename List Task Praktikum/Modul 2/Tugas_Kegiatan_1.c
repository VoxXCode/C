#include <stdio.h>
#define Phi

int main () {
    int Jari__jari;

    printf("Masukkan Jari-jari : ");
    scanf("%d", &Jari__jari);


    float Luas_Lingkarang = 3.14159 * Jari__jari * Jari__jari;
    float Keliling_Lingkarang = 2 * 3.14159 * Jari__jari;

    printf("Luas Lingkaran adalah %.2f \n", Luas_Lingkarang);
    printf("Keliling Lingkaran adalah %.2f", Keliling_Lingkarang);
}