#include <stdio.h>
#define Pi 3.14159 // Constants 

int main () {
    int Jari__jari;

    printf("===== Menghitung Luas dan Keliling Lingkaran ==== \n");

    // Input
    printf("Masukkan Jari-jari Lingkaran : ");
    scanf("%d", &Jari__jari);

    // Proses 
    float Luas_Lingkarang = Pi * Jari__jari * Jari__jari;
    float Keliling_Lingkarang = 2 * Pi * Jari__jari;

    // Output
    printf("\nLuas Lingkaran : %.2f \n", Luas_Lingkarang);
    printf("Keliling Lingkaran : %.2f", Keliling_Lingkarang);

    return 0;
}