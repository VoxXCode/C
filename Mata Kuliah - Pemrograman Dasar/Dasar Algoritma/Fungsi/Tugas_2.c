#include <stdio.h>
#include <string.h>

#define MAX_TRANSAKSI 100
#define MAX_KATEGORI 10

// Struktur untuk menyimpan informasi transaksi
typedef struct {
    char tanggal[20];
    char kategori[50];
    int nominal;
} Transaksi;

// Array untuk menyimpan transaksi
Transaksi transaksiList[MAX_TRANSAKSI];
int jumlahTransaksi = 0; // Variabel untuk melacak jumlah transaksi

// Struktur untuk menyimpan total pemasukan dan pengeluaran per kategori
typedef struct {
    char kategori[50];
    int pemasukan;
    int pengeluaran;
} KategoriTotal;

KategoriTotal kategoriTotals[MAX_KATEGORI];
int jumlahKategori = 0; // Variabel untuk melacak jumlah kategori yang sudah ada

// Fungsi untuk menambah transaksi
void tambahTransaksi() {
    if (jumlahTransaksi >= MAX_TRANSAKSI) {
        printf("Batas transaksi tercapai.\n");
        return;
    }
    
    // Input data transaksi
    printf("Masukkan tanggal (dd-mm-yyyy): ");
    scanf("%s", transaksiList[jumlahTransaksi].tanggal);
    
    printf("Masukkan kategori (pemasukan/pengeluaran): ");
    scanf("%s", transaksiList[jumlahTransaksi].kategori);
    
    printf("Masukkan nominal: ");
    scanf("%d", &transaksiList[jumlahTransaksi].nominal);
    
    // Perbarui total kategori
    int found = 0;
    for (int i = 0; i < jumlahKategori; i++) {
        if (strcmp(kategoriTotals[i].kategori, transaksiList[jumlahTransaksi].kategori) == 0) {
            if (strcmp(transaksiList[jumlahTransaksi].kategori, "pemasukan") == 0) {
                kategoriTotals[i].pemasukan += transaksiList[jumlahTransaksi].nominal;
            } else if (strcmp(transaksiList[jumlahTransaksi].kategori, "pengeluaran") == 0) {
                kategoriTotals[i].pengeluaran += transaksiList[jumlahTransaksi].nominal;
            }
            found = 1;
            break;
        }
    }
    
    if (!found) {
        // Jika kategori belum ada, tambahkan kategori baru
        strcpy(kategoriTotals[jumlahKategori].kategori, transaksiList[jumlahTransaksi].kategori);
        if (strcmp(transaksiList[jumlahTransaksi].kategori, "pemasukan") == 0) {
            kategoriTotals[jumlahKategori].pemasukan = transaksiList[jumlahTransaksi].nominal;
            kategoriTotals[jumlahKategori].pengeluaran = 0;
        } else if (strcmp(transaksiList[jumlahTransaksi].kategori, "pengeluaran") == 0) {
            kategoriTotals[jumlahKategori].pengeluaran = transaksiList[jumlahTransaksi].nominal;
            kategoriTotals[jumlahKategori].pemasukan = 0;
        }
        jumlahKategori++;
    }
    
    jumlahTransaksi++; // Menambah jumlah transaksi
    printf("Transaksi berhasil ditambahkan!\n");
}

// Fungsi untuk menghitung saldo akhir
int hitungSaldo() {
    int saldo = 0;
    
    // Menjumlahkan semua nominal berdasarkan kategori
    for (int i = 0; i < jumlahTransaksi; i++) {
        if (strcmp(transaksiList[i].kategori, "pemasukan") == 0) {
            saldo += transaksiList[i].nominal;
        } else if (strcmp(transaksiList[i].kategori, "pengeluaran") == 0) {
            saldo -= transaksiList[i].nominal;
        }
    }
    
    return saldo;
}

// Fungsi untuk menampilkan laporan keuangan
void laporanKeuangan() {
    if (jumlahTransaksi == 0) {
        printf("Tidak ada transaksi untuk ditampilkan.\n");
        return;
    }
    
    printf("Laporan Keuangan:\n");
    printf("Tanggal\t\tKategori\tNominal\n");
    
    for (int i = 0; i < jumlahTransaksi; i++) {
        printf("%s\t%s\t\t%d\n", transaksiList[i].tanggal, transaksiList[i].kategori, transaksiList[i].nominal);
    }
}

// Fungsi untuk menampilkan total pemasukan dan pengeluaran per kategori
void laporanPerKategori() {
    if (jumlahKategori == 0) {
        printf("Tidak ada kategori untuk ditampilkan.\n");
        return;
    }

    printf("Laporan Pemasukan dan Pengeluaran per Kategori:\n");
    printf("Kategori\tPemasukan\tPengeluaran\n");

    for (int i = 0; i < jumlahKategori; i++) {
        printf("%s\t\t%d\t\t%d\n", kategoriTotals[i].kategori, kategoriTotals[i].pemasukan, kategoriTotals[i].pengeluaran);
    }
}

// Fungsi utama
int main() {
    int pilihan;
    
    do {
        // Menu utama
        printf("\n===== Menu Laporan Keuangan =====\n");
        printf("1. Tambah Transaksi\n");
        printf("2. Hitung Saldo Akhir\n");
        printf("3. Laporan Keuangan\n");
        printf("4. Laporan Pemasukan dan Pengeluaran per Kategori\n");
        printf("5. Keluar\n");
        printf("Pilih opsi (1/2/3/4/5): ");
        scanf("%d", &pilihan);
        
        switch (pilihan) {
            case 1:
                tambahTransaksi();
                break;
            case 2:
                printf("Saldo akhir: %d\n", hitungSaldo());
                break;
            case 3:
                laporanKeuangan();
                break;
            case 4:
                laporanPerKategori();
                break;
            case 5:
                printf("Terima kasih! Program selesai.\n");
                break;
            default:
                printf("Pilihan tidak valid. Silakan coba lagi.\n");
        }
        
    } while (pilihan != 5);
    
    return 0;
}
