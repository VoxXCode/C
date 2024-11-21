#include <stdio.h>

int main() {
    // Deklarasi array 2D untuk kursi bioskop 5 baris dan 6 kolom
    int arrKursi[5][6];

    // Inisialisasi kursi dengan angka 0 (kursi kosong)
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 6; j++) {
            arrKursi[i][j] = 0;  // 0 berarti kursi kosong
        }
    }

    int baris, kolom;
    int pilihan;

    while (1) {
        // Menampilkan tata letak kursi dalam bentuk tabel
        printf("======== Program Sistem Pemesanan Tiket Bioskop ======== \n");
        printf("\nTata Letak Kursi Bioskop:\n");
        for (int i = 0; i < 5; i++) {
            for (int j = 0; j < 6; j++) {
                printf("%d ", arrKursi[i][j]);  // Menampilkan 0 untuk kosong, 1 untuk terpesan
            }
            printf("\n");
        }

        // Menampilkan statistik kursi
        int kursiKosong = 0, kursiTerpesan = 0;
        for (int i = 0; i < 5; i++) {
            for (int j = 0; j < 6; j++) {
                if (arrKursi[i][j] == 0) {
                    kursiKosong++;
                } else {
                    kursiTerpesan++;
                }
            }
        }
        printf("\nStatistik Kursi:\n");
        printf("Jumlah kursi kosong: %d\n", kursiKosong);
        printf("Jumlah kursi yang sudah dipesan: %d\n", kursiTerpesan);

        // Menu pilihan
        printf("\n1. Pesan kursi\n");
        printf("2. Keluar\n");
        printf("Pilih menu: ");
        scanf("%d", &pilihan);

        if (pilihan == 1) {
            // Meminta pengguna memasukkan nomor baris dan kolom
            printf("Masukkan nomor baris (1-5): ");
            scanf("%d", &baris);
            printf("Masukkan nomor kolom (1-6): ");
            scanf("%d", &kolom);

            // Validasi input
            if (baris >= 1 && baris <= 5 && kolom >= 1 && kolom <= 6) {
                if (arrKursi[baris - 1][kolom - 1] == 0) {  // Jika kursi kosong
                    arrKursi[baris - 1][kolom - 1] = 1;  // Menandakan kursi terpesan (1)
                    printf("Kursi di baris %d, kolom %d telah dipesan.\n", baris, kolom);
                } else {
                    // Menampilkan pesan error jika kursi sudah dipesan
                    printf("Error: Kursi di baris %d, kolom %d sudah dipesan.\n", baris, kolom);
                }
            } else {
                printf("Input tidak valid. Pilih baris antara 1-5 dan kolom antara 1-6.\n");
            }
        } else if (pilihan == 2) {
            // Keluar dari program
            printf("Terima kasih, program selesai.\n");
            break;
        } else {
            printf("Pilihan tidak valid, coba lagi.\n");
        }
    }

    return 0;
}
