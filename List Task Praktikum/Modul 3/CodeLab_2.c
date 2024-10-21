#include <stdio.h>

enum List {
        Economy = 400, // $400
        Business = 500, // $500
        FirstClas = 600 // $600
    };

int main () {
    int Order;

    // enum List Tiket;
    // Tiket = Business;

    printf("===== Program Order Tiket =====\n");
    printf("Pilih Kelas Tiket : \n");
    printf("1. Economy \n2. Business \n3. First Class \n");
    printf("Masukkan pilihan (1-3) : ");
    scanf("%d", &Order);

    if (Order == 1) {
        printf("Harga tiket kelas ekonomi : $%d", Economy);
    } else if (Order == 2) {
        printf("Harga tiket kelas bisnis : $%d", Business);
    } else if (Order == 3) {
        printf("Harga tiket kelas utama : $%d", FirstClas);
    } else {
        printf("Input tidak valid. Input dalam rentang 1 - 3."); // False
    }
    
    return 0;
}