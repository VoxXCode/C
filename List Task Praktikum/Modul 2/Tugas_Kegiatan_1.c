#include <stdio.h>
#define Pi 3.14159 // Constants 

int main () {
    int Jari_jari;

    printf("===== Menghitung Luas dan Keliling Lingkaran ==== \n");

    // Input
    printf("Masukkan Jari-jari Lingkaran : ");
    scanf("%d", &Jari_jari);

    // Proses 
    float Luas_Lingkarang = Pi * Jari_jari * Jari_jari;
    float Keliling_Lingkarang = 2 * Pi * Jari_jari;

    // Output
    printf("\nLuas Lingkaran : %.2f \n", Luas_Lingkarang);
    printf("Keliling Lingkaran : %.2f", Keliling_Lingkarang);

    return 0;
}