#include <stdio.h>

int main () {
    // Mendeklarasikan array untuk nama produk dengan 3 elemen, masing-masing memiliki panjang 20 karakter
    char arrProduk[3][20] = {"Produk A", "Produk B", "Produk C"};

    // Mendeklarasikan array 2D untuk menyimpan data penjualan produk
    int arrTerjual[2][3] = {
        {5, 8, 6},  // Toko 1
        {3, 7, 9}   // Toko 2
    };

    // Mendeklarasikan array untuk menyimpan total penjualan tiap produk
    int arrTotal[3] = {0, 0, 0};  // Inisialisasi dengan nilai 0 untuk setiap produk

    // Menjumlahkan penjualan produk dari dua periode dan menyimpannya dalam array arrTotal
    for (int i = 0; i < 3; i++) {
        arrTotal[i] = arrTerjual[0][i] + arrTerjual[1][i];  // Menambahkan jumlah penjualan untuk produk i
    }

    // Menampilkan hasil penjualan total setiap produk
    printf("Total Penjualan untuk setiap produk: \n");
    for (int i = 0; i < 3; i++) {
        // Mencetak nama produk dan total penjualannya
        printf("%s : %d \n", arrProduk[i], arrTotal[i]);
    }

    return 0;
}
