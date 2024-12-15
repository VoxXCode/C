#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define FILENAME "data_mahasiswa.txt" // Nama file tempat data disimpan

// Struktur untuk menyimpan data mahasiswa
struct Mahasiswa {
    char nama[50];          // Nama mahasiswa
    char nim[15];           // NIM mahasiswa
    char programStudi[50];  // Program Studi mahasiswa
};

// Fungsi untuk menulis data mahasiswa ke dalam file
void tulisData() {
    // Buka file dalam mode tulis (write)
    FILE *file = fopen(FILENAME, "w");
    if (file == NULL) {
        perror("Gagal membuka file"); // Cetak pesan error jika file tidak bisa dibuka
        return;
    }

    struct Mahasiswa mhs; // Variabel untuk menyimpan data mahasiswa

    // Input data mahasiswa dari pengguna
    printf("Masukkan nama: ");
    getchar(); // Menghapus newline yang tertinggal dari input sebelumnya
    fgets(mhs.nama, sizeof(mhs.nama), stdin);
    mhs.nama[strcspn(mhs.nama, "\n")] = '\0'; // Hilangkan karakter newline di akhir input

    printf("Masukkan NIM: ");
    fgets(mhs.nim, sizeof(mhs.nim), stdin);
    mhs.nim[strcspn(mhs.nim, "\n")] = '\0'; // Hilangkan karakter newline di akhir input

    printf("Masukkan Program Studi: ");
    fgets(mhs.programStudi, sizeof(mhs.programStudi), stdin);
    mhs.programStudi[strcspn(mhs.programStudi, "\n")] = '\0'; // Hilangkan karakter newline di akhir input

    // Tulis data ke file dengan format baris per baris
    fprintf(file, "%s\n%s\n%s\n", mhs.nama, mhs.nim, mhs.programStudi);

    // Tutup file setelah selesai menulis
    fclose(file);

    printf("\nData mahasiswa berhasil ditulis ke file.\n");
}

// Fungsi untuk membaca data mahasiswa dari file
void bacaData() {
    // Buka file dalam mode baca (read)
    FILE *file = fopen(FILENAME, "r");
    if (file == NULL) {
        perror("Gagal membuka file"); // Cetak pesan error jika file tidak bisa dibuka
        return;
    }

    struct Mahasiswa mhs; // Variabel untuk menyimpan data mahasiswa yang dibaca

    // Baca data dari file
    if (fgets(mhs.nama, sizeof(mhs.nama), file) == NULL ||
        fgets(mhs.nim, sizeof(mhs.nim), file) == NULL ||
        fgets(mhs.programStudi, sizeof(mhs.programStudi), file) == NULL) {
        printf("Data dalam file tidak lengkap atau rusak.\n");
        fclose(file); // Tutup file jika terjadi kesalahan
        return;
    }

    // Hilangkan karakter newline dari data yang dibaca
    mhs.nama[strcspn(mhs.nama, "\n")] = '\0';
    mhs.nim[strcspn(mhs.nim, "\n")] = '\0';
    mhs.programStudi[strcspn(mhs.programStudi, "\n")] = '\0';

    // Tutup file setelah selesai membaca
    fclose(file);

    // Tampilkan data mahasiswa ke layar
    printf("\nData Mahasiswa:\n");
    printf("Nama: %s\n", mhs.nama);
    printf("NIM: %s\n", mhs.nim);
    printf("Program Studi: %s\n", mhs.programStudi);
}

// Fungsi utama program
int main() {
    int pilihan; // Variabel untuk menyimpan pilihan menu

    // Loop utama program untuk menampilkan menu
    while (1) {
        // Tampilkan menu pilihan
        printf("\nPilih aksi:\n");
        printf("1. Tulis data mahasiswa\n");
        printf("2. Baca data mahasiswa\n");
        printf("3. Keluar\n");
        printf("Masukkan pilihan: ");

        // Validasi input menu agar hanya menerima angka
        if (scanf("%d", &pilihan) != 1) {
            printf("Input tidak valid. Silakan masukkan angka.\n");
            while (getchar() != '\n'); // Bersihkan buffer input
            continue;
        }

        // Eksekusi pilihan menu
        switch (pilihan) {
            case 1:
                // Tulis data mahasiswa ke file
                tulisData();
                break;
            case 2:
                // Baca data mahasiswa dari file
                bacaData();
                break;
            case 3:
                // Keluar dari program
                printf("Keluar dari program.\n");
                return 0;
            default:
                // Jika pilihan tidak valid
                printf("Pilihan tidak valid. Silakan coba lagi.\n");
        }
    }

    return 0;
}
