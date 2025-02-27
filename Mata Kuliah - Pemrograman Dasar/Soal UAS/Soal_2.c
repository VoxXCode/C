#include <stdio.h>
#include <string.h>

int main() {
    // Membuat array 2 dimensi yang menyimpan nama-nama kota di Jawa Timur
    char kota_jawa_timur[2][5][20] = {
        {"Malang", "Lamongan", "Banyuwangi", "Sumenep", "Batu"},
        {"Surabaya", "Blitar", "Kediri", "Pasuruan", "Probolinggo"}
    };
    
    // Variabel untuk NIM akhiran dan nama kota yang dicari
    int nim_akhiran;
    char kota_dicari[20];

    // Input NIM
    printf("Masukkan NIM akhiran: ");
    scanf("%d", &nim_akhiran);

    // Menentukan kota yang dicari berdasarkan NIM akhiran
    if (nim_akhiran % 2 == 1) { // Ganjil
        strcpy(kota_dicari, "Surabaya");
    } else { // Genap
        strcpy(kota_dicari, "Banyuwangi");
    }

    // Menampilkan kota yang dicari
    printf("Kota dicari: %s\n", kota_dicari);

    // Mencari kota di dalam array
    int ditemukan = 0; // Variabel penanda ditemukan atau tidaknya kota

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 5; j++) {
            if (strcmp(kota_jawa_timur[i][j], kota_dicari) == 0) {
                ditemukan = 1;
                break;
            }
        }
        if (ditemukan) break;
    }

    // Menampilkan hasil pencarian
    if (ditemukan) {
        printf("Kota %s ditemukan.\n", kota_dicari);
    } else {
        printf("Kota %s tidak ditemukan.\n", kota_dicari);
    }

    return 0;
}