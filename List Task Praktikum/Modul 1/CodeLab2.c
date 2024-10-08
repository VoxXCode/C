#include <stdio.h>

int main () {
    char nama[50];
    int umur;
    float gaji_pokok;
    printf("Masukkan Nama : ");
    gets(nama);

    printf("Masukkan Umur : ");
    scanf("%d", &umur);

    printf("Masukkan Gaji Pokok : ");
    scanf("%f", &gaji_pokok);

    float tunjangan = gaji_pokok * 0.1;
    float total_gaji = gaji_pokok + tunjangan;

    printf("Nama : %s\n", nama);
    printf("Umur : %d\n", umur);
    printf("Gaji Pokok : %.2f\n", gaji_pokok);
    printf("Tunjangan : %.2f\n", tunjangan);
    printf("Total Gaji : %.2f", total_gaji);
}