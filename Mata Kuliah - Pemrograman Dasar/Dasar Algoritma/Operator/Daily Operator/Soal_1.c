#include <stdio.h>

// Buatlah program yang menghitung gaji karyawan berdasarkan jam kerja dan upah perjam. Jika jam kerja lebih dari 40 maka akan mendapatkan bonus 10% dari upah perjam.

int main () {

    int Jam_Kerja;
    int Upah_Perjam;

    printf("Masukkan Jam Kerja : ");
    scanf("%d", &Jam_Kerja);
    
    printf("Masukkan Upah Perjam : ");
    scanf("%d", &Upah_Perjam);
    
    if (!(Jam_Kerja > 40)) { // if itu sama dengan "Ketika" 
        int Gaji_Kotor = Jam_Kerja * Upah_Perjam; // Ketika Jam kerja kurang dari 40 jam
        printf("Gaji Kotor adalah %f \n", Gaji_Kotor);
    } else { // else itu sama dengan "Jika"
        int Gaji_Kotor = Jam_Kerja * Upah_Perjam;
        int Gaji_Awal = Jam_Kerja * (Upah_Perjam * 0.1);
        int Gaji_Akhir = Gaji_Kotor + Gaji_Awal; // Ketika Jam kerja lebih dari 40 jam
        printf("Gaji dan Bonus adalah %d \n", Gaji_Akhir);
    
    }
    
}