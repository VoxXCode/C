#include <stdio.h>

// Deklarasi variabel global untuk menyimpan informasi kamar
int kamarStandard = 10; // Jumlah kamar standar yang tersedia
int kamarDeluxe = 5;
int kamarSuite = 2;

// Harga kamar per malam
const int HARGA_STANDARD = 300000;
const int HARGA_DELUXE = 500000;
const int HARGA_SUITE = 1000000;

// Fungsi untuk memeriksa ketersediaan kamar
int cekKetersediaan(char tipeKamar) {
    if (tipeKamar == 'S' && kamarStandard > 0) {
        kamarStandard--;
        return 1;
    } else if (tipeKamar == 'D' && kamarDeluxe > 0) {
        kamarDeluxe--;
        return 1;
    } else if (tipeKamar == 'U' && kamarSuite > 0) {
        kamarSuite--;
        return 1;
    }
    return 0;
}

// Fungsi untuk memesan kamar
int pesanKamar(char tipeKamar, int jumlahHari) {
    if (cekKetersediaan(tipeKamar)) {
        printf("Pemesanan kamar berhasil!\n");
        return 1; // Pemesanan berhasil
    } else {
        printf("Maaf, kamar tidak tersedia.\n");
        return 0; // Pemesanan gagal
    }
}

// Fungsi untuk menghitung biaya kamar
int hitungBiaya(char tipeKamar, int jumlahHari) {
    int hargaPerMalam;
    switch (tipeKamar) {
        case 'S':
            hargaPerMalam = HARGA_STANDARD;
            break;
        case 'D':
            hargaPerMalam = HARGA_DELUXE;
            break;
        case 'U':
            hargaPerMalam = HARGA_SUITE;
            break;
        default:
            printf("Tipe kamar tidak valid.\n");
            return 0;
    }
    int totalBiayaSebelumPajak = hargaPerMalam * jumlahHari;
    // Tambahkan 10% pajak layanan
    int pajakLayanan = totalBiayaSebelumPajak * 0.1;
    int totalBiaya = totalBiayaSebelumPajak + pajakLayanan;

    return totalBiaya;
}

int main() {
    char tipeKamar;
    int jumlahHari;

    printf("Masukkan tipe kamar (S: Standard, D: Deluxe, U: Suite): ");
    scanf(" %c", &tipeKamar);

    printf("Masukkan jumlah hari menginap: ");
    scanf("%d", &jumlahHari);

    if (tipeKamar != 'S' && tipeKamar != 'D' && tipeKamar != 'U') {
        printf("Tipe kamar tidak valid.\n");
        return 1;
    }
    
    if (jumlahHari <= 0) {
        printf("Jumlah hari harus lebih dari 0.\n");
        return 1;
    }

    if (pesanKamar(tipeKamar, jumlahHari)) {
        int totalBiaya = hitungBiaya(tipeKamar, jumlahHari);
        printf("Total biaya (termasuk pajak 10%%): Rp%d\n", totalBiaya);
    }

    return 0;
}
