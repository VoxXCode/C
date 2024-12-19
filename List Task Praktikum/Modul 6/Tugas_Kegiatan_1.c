#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define FILENAME "produk_toko.txt"
#define MAX_PRODUCTS 100
#define MAX_NAME_LENGTH 100
#define MAX_CATEGORY_LENGTH 50

// Struktur data untuk produk
typedef struct {
    int id;
    char nama[MAX_NAME_LENGTH];
    char kategori[MAX_CATEGORY_LENGTH];
    float harga;
    int stok;
} Produk;

// Fungsi untuk menampilkan menu
void tampilkanMenu() {
    printf("\n===== Manajemen Toko Elektronik =====\n");
    printf("1. Tambah Produk Baru\n");
    printf("2. Tampilkan Daftar Produk\n");
    printf("3. Update Informasi Produk\n");
    printf("4. Hapus Produk\n");
    printf("5. Keluar\n");
    printf("Pilih opsi: ");
}

// Fungsi untuk membaca data produk dari berkas
int bacaDataProduk(Produk produk[], int *jumlahProduk) {
    FILE *file = fopen(FILENAME, "r");
    if (file == NULL) {
        return 0;  // File tidak ditemukan
    }
    
    int index = 0;
    while (fscanf(file, "%d\n%[^\n]\n%[^\n]\n%f\n%d\n", 
                   &produk[index].id, produk[index].nama, produk[index].kategori, 
                   &produk[index].harga, &produk[index].stok) == 5) {
        index++;
    }
    *jumlahProduk = index;
    fclose(file);
    return 1;  // Berhasil membaca data
}

// Fungsi untuk menulis data produk ke dalam berkas
void simpanDataProduk(Produk produk[], int jumlahProduk) {
    FILE *file = fopen(FILENAME, "w");
    if (file == NULL) {
        printf("Gagal membuka file untuk menulis!\n");
        return;
    }

    for (int i = 0; i < jumlahProduk; i++) {
        fprintf(file, "%d\n%s\n%s\n%.2f\n%d\n", produk[i].id, produk[i].nama, produk[i].kategori, produk[i].harga, produk[i].stok);
    }
    fclose(file);
}

// Fungsi untuk menambahkan produk baru
void tambahProduk(Produk produk[], int *jumlahProduk) {
    int id;
    printf("\nMasukkan ID Produk: ");
    scanf("%d", &id);

    // Cek apakah ID sudah terdaftar
    for (int i = 0; i < *jumlahProduk; i++) {
        if (produk[i].id == id) {
            printf("ID SUDAH TERDAFTAR! Masukkan ID yang berbeda.\n");
            return;
        }
    }

    Produk p;
    p.id = id;
    printf("Masukkan Nama Produk: ");
    getchar();  // membersihkan newline dari buffer
    fgets(p.nama, sizeof(p.nama), stdin);
    p.nama[strcspn(p.nama, "\n")] = 0;  // menghapus newline

    printf("Masukkan Kategori Produk: ");
    fgets(p.kategori, sizeof(p.kategori), stdin);
    p.kategori[strcspn(p.kategori, "\n")] = 0;  // menghapus newline

    printf("Masukkan Harga Produk: ");
    scanf("%f", &p.harga);

    printf("Masukkan Stok Produk: ");
    scanf("%d", &p.stok);

    produk[*jumlahProduk] = p;
    (*jumlahProduk)++;
    simpanDataProduk(produk, *jumlahProduk);
    printf("Produk berhasil ditambahkan!\n");
}

// Fungsi untuk menampilkan daftar produk
void tampilkanProduk(Produk produk[], int jumlahProduk) {
    if (jumlahProduk == 0) {
        printf("\nTidak ada produk dalam daftar.\n");
        return;
    }
    
    printf("\nDaftar Produk:\n");
    for (int i = 0; i < jumlahProduk; i++) {
        printf("ID: %d\n", produk[i].id);
        printf("Nama: %s\n", produk[i].nama);
        printf("Kategori: %s\n", produk[i].kategori);
        printf("Harga: %.2f\n", produk[i].harga);
        printf("Stok: %d\n\n", produk[i].stok);
    }
}

// Fungsi untuk mengupdate informasi produk
void updateProduk(Produk produk[], int jumlahProduk) {
    int id, found = 0;
    printf("\nMasukkan ID Produk yang ingin diupdate: ");
    scanf("%d", &id);

    for (int i = 0; i < jumlahProduk; i++) {
        if (produk[i].id == id) {
            found = 1;
            printf("Masukkan Nama Produk baru: ");
            getchar();  // membersihkan newline dari buffer
            fgets(produk[i].nama, sizeof(produk[i].nama), stdin);
            produk[i].nama[strcspn(produk[i].nama, "\n")] = 0;  // menghapus newline

            printf("Masukkan Kategori Produk baru: ");
            fgets(produk[i].kategori, sizeof(produk[i].kategori), stdin);
            produk[i].kategori[strcspn(produk[i].kategori, "\n")] = 0;  // menghapus newline

            printf("Masukkan Harga Produk baru: ");
            scanf("%f", &produk[i].harga);

            printf("Masukkan Stok Produk baru: ");
            scanf("%d", &produk[i].stok);

            simpanDataProduk(produk, jumlahProduk);
            printf("Produk berhasil diperbarui!\n");
            break;
        }
    }

    if (!found) {
        printf("Produk dengan ID %d tidak ditemukan.\n", id);
    }
}

// Fungsi untuk menghapus produk
void hapusProduk(Produk produk[], int *jumlahProduk) {
    int id, found = 0;
    printf("\nMasukkan ID Produk yang ingin dihapus: ");
    scanf("%d", &id);

    for (int i = 0; i < *jumlahProduk; i++) {
        if (produk[i].id == id) {
            found = 1;
            for (int j = i; j < *jumlahProduk - 1; j++) {
                produk[j] = produk[j + 1];  // Pindahkan produk berikutnya ke posisi saat ini
            }
            (*jumlahProduk)--;  // Kurangi jumlah produk
            simpanDataProduk(produk, *jumlahProduk);
            printf("Produk dengan ID %d berhasil dihapus.\n", id);
            break;
        }
    }

    if (!found) {
        printf("Produk dengan ID %d tidak ditemukan.\n", id);
    }
}

int main() {
    Produk produk[MAX_PRODUCTS];
    int jumlahProduk = 0;

    // Membaca data dari file saat program dijalankan
    if (!bacaDataProduk(produk, &jumlahProduk)) {
        printf("Tidak ada data produk ditemukan, file produk_toko.txt mungkin belum ada.\n");
    }

    int pilihan;
    do {
        tampilkanMenu();
        scanf("%d", &pilihan);

        switch (pilihan) {
            case 1:
                tambahProduk(produk, &jumlahProduk);
                break;
            case 2:
                tampilkanProduk(produk, jumlahProduk);
                break;
            case 3:
                updateProduk(produk, jumlahProduk);
                break;
            case 4:
                hapusProduk(produk, &jumlahProduk);
                break;
            case 5:
                printf("Terima kasih telah menggunakan Manajemen Toko Elektronik.\n");
                break;
            default:
                printf("Pilihan tidak valid, coba lagi.\n");
                break;
        }
    } while (pilihan != 5);

    return 0;
}
