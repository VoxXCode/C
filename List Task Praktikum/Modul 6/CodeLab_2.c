#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char nama[50];
    char nim[20];
    char program_studi[50];
} Mahasiswa;

// Fungsi untuk menulis data mahasiswa ke dalam file
void tulisDataKeFile(const char *namaFile, Mahasiswa mahasiswa[], int jumlah) {
    FILE *file = fopen(namaFile, "w");  // Membuka file untuk menulis (write mode)
    if (file == NULL) {
        printf("Gagal membuka file untuk menulis!\n");
        exit(1);
    }

    for (int i = 0; i < jumlah; i++) {
        fprintf(file, "%s\n%s\n%s\n", mahasiswa[i].nama, mahasiswa[i].nim, mahasiswa[i].program_studi);
    }

    fclose(file);  // Menutup file setelah selesai menulis
    printf("Data mahasiswa telah disimpan ke dalam file '%s'.\n", namaFile);
}

// Fungsi untuk membaca data mahasiswa dari file dan menampilkannya
void bacaDataDariFile(const char *namaFile) {
    FILE *file = fopen(namaFile, "r");  // Membuka file untuk membaca (read mode)
    if (file == NULL) {
        printf("Gagal membuka file untuk membaca!\n");
        exit(1);
    }

    Mahasiswa mahasiswa;
    printf("\nData Mahasiswa:\n");
    while (fscanf(file, "%49[^\n]\n%19[^\n]\n%49[^\n]\n", mahasiswa.nama, mahasiswa.nim, mahasiswa.program_studi) == 3) {
        printf("Nama: %s\n", mahasiswa.nama);
        printf("NIM: %s\n", mahasiswa.nim);
        printf("Program Studi: %s\n", mahasiswa.program_studi);
        printf("-----------------------------\n");
    }

    fclose(file);  // Menutup file setelah selesai membaca
}

int main() {
    // Mendefinisikan data mahasiswa
    Mahasiswa mahasiswa[3] = {
        {"Budi Santoso", "123456789", "Teknik Informatika"},
        {"Siti Aisyah", "987654321", "Sistem Informasi"},
        {"Andi Pratama", "112233445", "Teknik Elektro"}
    };

    const char *namaFile = "data_mahasiswa.txt";

    // Menulis data mahasiswa ke file
    tulisDataKeFile(namaFile, mahasiswa, 3);

    // Membaca dan menampilkan data dari file
    bacaDataDariFile(namaFile);

    return 0;
}
