#include <stdio.h>

int main () {
    int Kelas, Hari;
    int Harga_Ekonomi = 1000000, Harga_Eksekutif = 2000000, Harga_Bisnis = 3000000;
    

    printf("========= Program Pemesanan Tiket Pesawat ========= \n");
    printf("1. Kelas Ekonomi \t1.000.000 \n2. Kelas Eksekutif \t2.000.000 \n3. Kelas Bisnis \t3.000.000 \n");
    
    printf("Masukkan pilihan kelas : "); // Input Kelas Tiket
    scanf("%d", &Kelas);

    printf("Masukkan Hari Pemesanaan : "); // Input Hari
    scanf("%d", &Hari);


    printf("\n=================================================== \n");
    
    if (Kelas > 0 && Kelas < 2) { // Lebih dari 0 && Kurang dari 2
        if (Hari > 0 && Hari < 2) {
            printf("Anda melakukan pemesanaan 'Kelas Ekonomi',"); 
            printf(" pada hari 'Senin'"); // Senin
            printf("\nDengan total pembayaran : %d ", Harga_Ekonomi);
        } else if (Hari > 1 && Hari < 3) {
            printf("Anda melakukan pemesanaan 'Kelas Ekonomi',"); 
            printf(" pada hari 'Selasa'"); // Selasa
            printf("\nDengan total pembayaran : %d ", Harga_Ekonomi);
        } else if (Hari > 2 && Hari < 4) {
            printf("Anda melakukan pemesanaan 'Kelas Ekonomi',"); 
            printf(" pada hari 'Rabu'"); // Rabu
            printf("\nDengan total pembayaran : %d ", Harga_Ekonomi);
        } else if (Hari > 3 && Hari < 5) {
            printf("Anda melakukan pemesanaan 'Kelas Ekonomi',"); 
            printf(" pada hari 'Kamis'"); // Kamis
            printf("\nDengan total pembayaran : %d ", Harga_Ekonomi);
        } else if (Hari > 4 && Hari < 6) {
            printf("Anda melakukan pemesanaan 'Kelas Ekonomi',"); 
            printf(" pada hari 'Jumat'"); // Jumat
            printf("\nDengan total pembayaran : %d ", Harga_Ekonomi);
        } else if (Hari > 5 && Hari < 7) {
            printf("Anda melakukan pemesanaan 'Kelas Ekonomi',"); 
            printf(" pada hari 'Sabtu'"); // Sabtu
            printf("\nDengan total pembayaran : %d ", Harga_Ekonomi);
        } else if (Hari > 6 && Hari < 8) {
            printf("Anda melakukan pemesanaan 'Kelas Ekonomi',"); 
            printf(" pada hari 'Minggu'"); // Minggu

            int Hasil_Eko = Harga_Ekonomi * 0.2;
            int Hasil_Ekonomi = Harga_Ekonomi + Hasil_Eko; 
            printf("\nDengan total pembayaran : %d ", Hasil_Ekonomi);
        } else {
            printf("Pesanan anda tidak dapat diproses, silakan lakukan pemesanan ulang.");
        }
    } else if (Kelas > 1 && Kelas < 3) { // Lebih dari 1 && kurang dari 3
        if (Hari > 0 && Hari < 2) {
            printf("Anda melakukan pemesanaan 'Kelas Eksekutif',"); 
            printf(" pada hari 'Senin'"); // Senin
            printf("\nDengan total pembayaran : %d ", Harga_Eksekutif);
        } else if (Hari > 1 && Hari < 3) {
            printf("Anda melakukan pemesanaan 'Kelas Eksekutif',"); 
            printf(" pada hari 'Selasa'"); // Selasa
            printf("\nDengan total pembayaran : %d ", Harga_Eksekutif);
        } else if (Hari > 2 && Hari < 4) {
            printf("Anda melakukan pemesanaan 'Kelas Eksekutif',"); 
            printf(" pada hari 'Rabu'"); // Rabu
            printf("\nDengan total pembayaran : %d ", Harga_Eksekutif);
        } else if (Hari > 3 && Hari < 5) {
            printf("Anda melakukan pemesanaan 'Kelas Eksekutif',"); 
            printf(" pada hari 'Kamis'"); // Kamis
            printf("\nDengan total pembayaran : %d ", Harga_Eksekutif);
        } else if (Hari > 4 && Hari < 6) {
            printf("Anda melakukan pemesanaan 'Kelas Eksekutif',"); 
            printf(" pada hari 'Jumat'"); // Jumat
            printf("\nDengan total pembayaran : %d ", Harga_Eksekutif);
        } else if (Hari > 5 && Hari < 7) {
            printf("Anda melakukan pemesanaan 'Kelas Eksekutif',"); 
            printf(" pada hari 'Sabtu'"); // Sabtu
            printf("\nDengan total pembayaran : %d ", Harga_Eksekutif);
        } else if (Hari > 6 && Hari < 8) {
            printf("Anda melakukan pemesanaan 'Kelas Eksekutif',"); 
            printf(" pada hari 'Minggu'"); // Minggu

            int Hasil_Eks = Harga_Eksekutif * 0.2;
            int Hasil_Eksekutif = Harga_Eksekutif + Hasil_Eks; 
            printf("\nDengan total pembayaran : %d ", Hasil_Eksekutif);
        } else {
            printf("Pesanan anda tidak dapat diproses, silakan lakukan pemesanan ulang.");
        }
    } else if (Kelas > 2 && Kelas < 4) { // Lebih dari 2 && kurang dari 4 
        if (Hari > 0 && Hari < 2) {
            printf("Anda melakukan pemesanaan 'Kelas Bisnis',");
            printf(" pada hari 'Senin'"); // Senin
            printf("\nDengan total pembayaran : %d ", Harga_Bisnis);
        } else if (Hari > 1 && Hari < 3) {
            printf("Anda melakukan pemesanaan 'Kelas Bisnis',");
            printf(" pada hari 'Selasa'"); // Selasa
            printf("\nDengan total pembayaran : %d ", Harga_Bisnis);
        } else if (Hari > 2 && Hari < 4) {
            printf("Anda melakukan pemesanaan 'Kelas Bisnis',");
            printf(" pada hari 'Rabu'"); // Rabu
            printf("\nDengan total pembayaran : %d ", Harga_Bisnis);
        } else if (Hari > 3 && Hari < 5) {
            printf("Anda melakukan pemesanaan 'Kelas Bisnis',");
            printf(" pada hari 'Kamis'"); // Kamis
            printf("\nDengan total pembayaran : %d ", Harga_Bisnis);
        } else if (Hari > 4 && Hari < 6) {
            printf("Anda melakukan pemesanaan 'Kelas Bisnis',");
            printf(" pada hari 'Jumat'"); // Jumat
            printf("\nDengan total pembayaran : %d ", Harga_Bisnis);
        } else if (Hari > 5 && Hari < 7) {
            printf("Anda melakukan pemesanaan 'Kelas Bisnis',");
            printf(" pada hari 'Sabtu'"); // Sabtu
            printf("\nDengan total pembayaran : %d ", Harga_Bisnis);
        } else if (Hari > 6 && Hari < 8) {
            printf("Anda melakukan pemesanaan 'Kelas Bisnis',");
            printf(" pada hari 'Minggu'"); // Minggu

            int Hasil_Bis = Harga_Bisnis * 0.2;
            int Hasil_Bisnis = Harga_Bisnis + Hasil_Bis; 
            printf("\nDengan total pembayaran : %d ", Hasil_Bisnis);
        } else {
            printf("Pesanan anda tidak dapat diproses, silakan lakukan pemesanan ulang.");
        }
    } else {
            printf("Pesanan anda tidak dapat diproses, silakan lakukan pemesanan ulang.");
        }
    return 0;
}