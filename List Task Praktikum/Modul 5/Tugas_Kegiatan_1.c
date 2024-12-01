#include <stdio.h>
#include <string.h>

int main () {
    int Tinggi;
    char arrBuah[10][20];  // Array untuk menyimpan nama buah

    printf("Masukkan jumlah buah (Maksimal 10) : ");
    scanf("%d", &Tinggi);

    // Memastikan jumlah buah tidak lebih dari 10
    if (Tinggi <= 10) {
        // Loop untuk memasukkan nama buah
        for (int i = 0; i < Tinggi; i++) {
            printf("Masukkan Nama buah ke-%d: ", i + 1);
            scanf("%s", arrBuah[i]);  // Input nama buah ke-i
        }

        // Mengurutkan nama buah secara abjad menggunakan Bubble Sort
        for (int i = 0; i < Tinggi - 1; i++) {
            for (int j = 0; j < Tinggi - i - 1; j++) {
                if (strcmp(arrBuah[j], arrBuah[j + 1]) > 0) {
                    // Tukar posisi buah jika urutan tidak abjad
                    char temp[20];
                    strcpy(temp, arrBuah[j]);
                    strcpy(arrBuah[j], arrBuah[j + 1]);
                    strcpy(arrBuah[j + 1], temp);
                }
            }
        }

        // Loop untuk menampilkan nama buah yang sudah diurutkan
        printf("\nNama Buah dalam urutan abjad:\n");
        for (int i = 0; i < Tinggi; i++) {
            printf("%s\n", arrBuah[i]);  // Menampilkan nama buah ke-i
        }
    } else {
        printf("Input Maksimal 10 buah.\n");
    }

    return 0;
}
