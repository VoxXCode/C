#include <stdio.h>
#include <string.h>

int main() {
    int n, jumlah_barang, harga_barang;
    char jenis_transaksi[10], nama_barang[30];
    int total_biaya_pembelian = 0, total_pendapatan_penjualan = 0;
    int stok_pembelian = 0, stok_penjualan = 0;
    
    printf("Masukkan jumlah transaksi: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        printf("Masukkan jenis transaksi ke-%d (pembelian/penjualan): ", i);
        scanf("%s", jenis_transaksi);

        printf("Masukkan nama barang: ");
        scanf("%s", nama_barang);

        printf("Masukkan harga barang: ");
        scanf("%d", &harga_barang);

        printf("Masukkan jumlah barang: ");
        scanf("%d", &jumlah_barang);

        // Menangani transaksi pembelian
        if (strcmp(jenis_transaksi, "pembelian") == 0) {
            total_biaya_pembelian += harga_barang * jumlah_barang;
            stok_pembelian += jumlah_barang;
        }

        // Menangani transaksi penjualan
        else if (strcmp(jenis_transaksi, "penjualan") == 0) {
            total_pendapatan_penjualan += harga_barang * jumlah_barang;
            stok_penjualan += jumlah_barang;
        }
    }

    // Output hasil perhitungan
    printf("\nHasil Perhitungan:\n");
    printf("Total Biaya Pembelian: Rp %d\n", total_biaya_pembelian);
    printf("Total Pendapatan Penjualan: Rp %d\n", total_pendapatan_penjualan);

    // Menghitung status keuangan (untung/rugi)
    int selisih = total_pendapatan_penjualan - total_biaya_pembelian;
    if (selisih >= 0) {
        printf("Status: Laba sebesar Rp %d\n", selisih);
    } else {
        printf("Status: Kerugian sebesar Rp %d\n", -selisih);
    }

    return 0;
}
