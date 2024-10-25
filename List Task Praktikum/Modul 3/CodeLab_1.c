#include <stdio.h>

int main () {
    int umur;

    printf("Masukkan umur penumpang : ");
    scanf("%d", &umur);

    if (umur >= 0 && umur <= 120) {
        if (umur <= 2) { // ======================= Kurang Operator =
            printf("Penumpang mendapatkan tiket gratis. \n");
        } else if (umur >= 2 && umur <= 12) {
            printf("Harga tiket untuk penumpang anak-anak adalah 50%% dari harga normal. \n");
        } else if (umur >= 12 && umur <= 60) { // ====================== Kurang operator =
            printf("Harga tiket untuk penumpang dewasa adalah harga normal. \n");
        } else {
            printf("Harga tiket untuk penumpang lanjut usia adalah 75%% dari harga normal. \n");
        }
    } else {
            printf("Input tidak valid. Umur harus berada dalam rentang 0 hingga 120. \n");
    }

    return 0;
}