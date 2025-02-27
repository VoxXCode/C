#include <stdio.h>

int main() {
    // Deklarasi array 2D untuk nama siswa
    char nama_siswa[3][20] = {
        "Andi", 
        "Budi", 
        "Dimas"
    };

    // Deklarasi array 2D untuk nilai siswa (Kuis, UTS, UAS)
    int nilai_siswa[3][3] = {
        {70, 90, 68},  // Nilai Andi: Kuis, UTS, UAS
        {75, 86, 70},  // Nilai Budi: Kuis, UTS, UAS
        {85, 62, 75}   // Nilai Dimas: Kuis, UTS, UAS
    };

    // Perulangan untuk menghitung rata-rata nilai tiap siswa
    for (int i = 0; i < 3; i++) {
        int total_nilai = 0;
        
        // Menjumlahkan nilai Kuis, UTS, dan UAS
        for (int j = 0; j < 3; j++) {
            total_nilai += nilai_siswa[i][j];
        }
        
        // Menghitung rata-rata
        float rata_rata = total_nilai / 3.0; // Membagi dengan 3.0 untuk mendapatkan hasil float
        
        // Menampilkan hasil
        printf("Rata-rata nilai %s: %.2f\n", nama_siswa[i], rata_rata);
    }

    return 0;
}
