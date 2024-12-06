#include <stdio.h>
#include <string.h>

int main () {
    int jumlahBuah;  // Variabel untuk menyimpan jumlah buah yang akan dimasukkan
    char daftarBuah[10][20];  // Array untuk menyimpan nama buah (maksimal 10 buah)

    // Minta input jumlah buah yang ingin dimasukkan
    printf("Masukkan jumlah buah (Maksimal 10): ");
    scanf("%d", &jumlahBuah);

    // Memastikan jumlah buah yang dimasukkan tidak lebih dari 10
    if (jumlahBuah <= 10) {
        // Memasukkan nama buah ke dalam array
        for (int i = 0; i < jumlahBuah; i++) {
            printf("Masukkan Nama buah ke-%d: ", i + 1);
            scanf("%s", daftarBuah[i]);  // Menyimpan nama buah yang dimasukkan ke dalam array
        }

        // Menampilkan nama buah yang sudah dimasukkan
        printf("\nNama buah dalam urutan yang diinputkan:\n");
        for (int i = 0; i < jumlahBuah; i++) {
            printf("%s \n", daftarBuah[i]);  // Menampilkan nama buah yang ke-i
        }

        // Mengurutkan nama buah secara abjad menggunakan metode Bubble Sort
        for (int i = 0; i < jumlahBuah - 1; i++) {
            for (int j = 0; j < jumlahBuah - i - 1; j++) {
                // Bandingkan dua buah bertetangga, jika tidak berurutan secara abjad, tukar posisi
                if (strcmp(daftarBuah[j], daftarBuah[j + 1]) > 0) {
                    // Menukar nama buah dengan menggunakan variabel sementara
                    char temp[20];
                    strcpy(temp, daftarBuah[j]);
                    strcpy(daftarBuah[j], daftarBuah[j + 1]);
                    strcpy(daftarBuah[j + 1], temp);
                }
            }
        }

        // Menampilkan nama buah yang sudah diurutkan
        printf("\nNama buah dalam urutan abjad:\n");
        for (int i = 0; i < jumlahBuah; i++) {
            printf("%s \n", daftarBuah[i]);  // Menampilkan nama buah yang ke-i
        }
    } else {
        // Jika jumlah buah lebih dari 10, tampilkan pesan kesalahan
        printf("Input maksimal 10 buah.\n");
    }

    return 0;
}
