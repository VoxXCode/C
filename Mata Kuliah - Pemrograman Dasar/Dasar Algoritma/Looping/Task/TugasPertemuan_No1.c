#include <stdio.h>

int main () {
    int Jumlah_Mahasiswa;

    printf("===== Program Pengelompokan Nilai Mahasiswa =====\n");

    printf("Masukkan jumlah mahasiswa : ");
    scanf("%d", &Jumlah_Mahasiswa);

    int NilaiMahasiswa[Jumlah_Mahasiswa]; // Harus diatas perulangannya langsung
    int Kategori[5] = {0, 0, 0, 0, 0};

    for (int i = 0; i < Jumlah_Mahasiswa; i++) {
        printf("Masukkan nilai mahasiswa ke-%d : ", i + 1);
        scanf("%d", &NilaiMahasiswa[i]);
    }

    printf("\nHasil Kategori :");

    for (int i = 0; i < Jumlah_Mahasiswa; i++) {
        char Kategori_Nilai;

        if (NilaiMahasiswa[i] >= 85) {
            Kategori_Nilai = 'A';
            Kategori[0]++;
        } else if (NilaiMahasiswa[i] >= 70) {
            Kategori_Nilai = 'B';
            Kategori[1]++;
        } else if (NilaiMahasiswa[i] >= 55) {
            Kategori_Nilai = 'C';
            Kategori[2]++;
        } else if (NilaiMahasiswa[i] >= 40) {
            Kategori_Nilai = 'D';
            Kategori[3]++;
        } else {
            Kategori_Nilai = 'E';
            Kategori[4]++;
        }
        
        printf("\nMahasiswa %d: Nilai %d, Kategori %c", i + 1, NilaiMahasiswa[i], Kategori_Nilai);
    }

    printf("\n\nJumlah Mahasiswa di Setiap Kategori :\n");

    char kategoriList[] = {'A', 'B', 'C', 'D', 'E'};

    for (int i = 0; i < 5; i++) {
        printf("%c : %d Mahasiswa\n", kategoriList[i], Kategori[i]);
    }
    
    return 0;
}