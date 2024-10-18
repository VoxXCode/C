#include <stdio.h>
// #define Pi 3.14159 // Constants 

int main () {
    float Jari_jari;
    const double Pi = 3.14159; // Constants

    printf("===== Menghitung Luas dan Keliling Lingkaran ===== \n");

    // Input
    printf("Masukkan Jari-jari Lingkaran : ");
    scanf("%f", &Jari_jari);

    // Proses 
    // float Luas_Lingkarang = Pi * Jari_jari * Jari_jari;
    // float Keliling_Lingkarang = 2 * Pi * Jari_jari;

    double Luas_Lingkaran = Pi * Jari_jari * Jari_jari;
    double Keliling_Lingkaran = 2 * Pi * Jari_jari;
    
    // Output
    if (Jari_jari > 0) {
        printf("\nLuas Lingkaran : %.2f \n", Luas_Lingkaran);
        printf("Keliling Lingkaran : %.2f", Keliling_Lingkaran);
    } else {
        printf("Error");
    }

    return 0;
}