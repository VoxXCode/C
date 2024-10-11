#include <stdio.h>
#include <stdbool.h> // Menyertakan pustaka stdbool.h untuk menggunakan tipe boolean

int main () {
    // Deklarasi variabel 
    int angka;
    bool isGenap;

    // Meminta pengguna memasukkan sebuah angka
    printf("Masukkan sebuah angka : ");
    scanf("%d", &angka);

    // Menentukan apakah angka tersebut genap atau ganjil
    if (angka % 2 == 0) {
        isGenap = true;
    } else {
        isGenap = false; 
    }

    // Menampilkan hasil
    if (isGenap) {
        printf("Angka %d adalah bilangan genap. \n", angka);
    } else {
        printf("Angka %d adalah bilangan ganjil.", angka); 
    }
}