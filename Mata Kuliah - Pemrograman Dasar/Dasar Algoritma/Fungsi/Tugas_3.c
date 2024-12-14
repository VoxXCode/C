#include <stdio.h>


int hitungDiskon(int totalBelanja) {
    if (totalBelanja < 100000) {
        return 0; // Tidak ada diskon
    } else if (totalBelanja < 500000) {
        return totalBelanja * 0.1; // Diskon 10%
    } else {
        return totalBelanja * 0.15; // Diskon 15%
    }
}


void inputBarang(int * totalBelanja) {
    int hargaBarang;


    do {
        printf("Masukkan harga barang (0 untuk selesai): ");
        scanf("%d", &hargaBarang);


        if (hargaBarang > 0) {
            *totalBelanja += hargaBarang;
        }
    } while (hargaBarang > 0);
}


int main() {
    int totalBelanja = 0;


    inputBarang(&totalBelanja);


    int diskon = hitungDiskon(totalBelanja);
    int totalBayar = totalBelanja - diskon;


    printf("Total belanja: Rp%d\n", totalBelanja);
    printf("Diskon: Rp%d\n", diskon);
    printf("Total bayar: Rp%d\n", totalBayar);


    return 0;
}
