#include <stdio.h>

int main() {
    int Bilangan;
    int Jumlah_Bilangan = 0;      // Variabel untuk menyimpan jumlah total bilangan
    int Total_Input = 0;       // Variabel untuk menghitung jumlah bilangan yang dimasukkan

    // Menampilkan pesan untuk meminta input
    printf("===== Program Menghitung Total dan Rata-Rata Bilangan =====\n");

    // Loop untuk terus meminta input bilangan bulat positif satu per satu.
    while (1) {
        printf("Masukkan bilangan bulat positif (masukkan angka negatif untuk berhenti) : ");
        scanf("%d", &Bilangan);

        if (Bilangan < 0) {
            break;
        }

        // Menambahkan angka ke jumlah jika angka positif
        Jumlah_Bilangan += Bilangan;
        Total_Input++;  // Menambah jumlah angka yang dimasukkan
    }

    // Menghitung rata-rata
    if (Total > 0) {
        
        double Rata_Rata = (double)Jumlah_Bilangan / Total_Input;
        printf("\nTotal bilangan : %d\n", Jumlah_Bilangan);
        printf("Rata-rata bilangan : %.2f\n", Rata_Rata);
    } else {
        printf("Tidak ada bilangan yang dimasukkan.\n");
    }

    return 0;
}
