#include <stdio.h>

int main() {
    // Variabel untuk menyimpan total biaya pembelian dan total pendapatan penjualan
    float total_biaya_pembelian = 0;
    float total_pendapatan_penjualan = 0;

    // Variabel untuk input jumlah transaksi
    int jumlah_transaksi;

    // Meminta input jumlah transaksi
    printf("Masukkan jumlah transaksi: ");
    scanf("%d", &jumlah_transaksi);

    // Loop untuk setiap transaksi
    for (int i = 0; i < jumlah_transaksi; i++) {
        // Variabel untuk jenis transaksi, nama barang, harga barang, dan jumlah barang
        char jenis_transaksi[20];
        char nama_barang[50];
        float harga_barang;
        int jumlah_barang;
        float total_transaksi;

        printf("\nTransaksi ke-%d:\n", i + 1);

        // Meminta input jenis transaksi
        printf("Masukkan jenis transaksi (pembelian/penjualan): ");
        scanf("%s", jenis_transaksi);

        // Meminta input nama barang, harga barang, dan jumlah barang
        printf("Masukkan nama barang: ");
        scanf("%s", nama_barang);
        printf("Masukkan harga barang: ");
        scanf("%f", &harga_barang);
        printf("Masukkan jumlah barang: ");
        scanf("%d", &jumlah_barang);

        // Menghitung total transaksi (harga * jumlah)
        total_transaksi = harga_barang * jumlah_barang;

        // Menambah atau mengurangi total biaya atau pendapatan
        if (strcmp(jenis_transaksi, "pembelian") == 0) {
            total_biaya_pembelian += total_transaksi;
        } else if (strcmp(jenis_transaksi, "penjualan") == 0) {
            total_pendapatan_penjualan += total_transaksi;
        } else {
            printf("Jenis transaksi tidak valid! Harap masukkan 'pembelian' atau 'penjualan'.\n");
            i--;  // Mengulang transaksi jika jenis transaksi tidak valid
        }
    }

    // Menampilkan total biaya pembelian dan total pendapatan penjualan
    printf("\n--- Ringkasan ---\n");
    printf("Total biaya pembelian: Rp %.2f\n", total_biaya_pembelian);
    printf("Total pendapatan penjualan: Rp %.2f\n", total_pendapatan_penjualan);

    // Menentukan apakah toko mendapatkan keuntungan atau kerugian
    if (total_pendapatan_penjualan > total_biaya_pembelian) {
        float keuntungan = total_pendapatan_penjualan - total_biaya_pembelian;
        printf("Toko mendapatkan keuntungan sebesar Rp %.2f\n", keuntungan);
    } else if (total_pendapatan_penjualan < total_biaya_pembelian) {
        float kerugian = total_biaya_pembelian - total_pendapatan_penjualan;
        printf("Toko mengalami kerugian sebesar Rp %.2f\n", kerugian);
    } else {
        printf("Toko tidak mengalami keuntungan atau kerugian, pendapatan dan biaya sama.\n");
    }

    return 0;
}
