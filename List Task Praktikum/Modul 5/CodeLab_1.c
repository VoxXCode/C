#include <stdio.h>

int main () {

    // Deklarasi dan inisialisasi array nama siswa dengan ukuran 5x10
    // Setiap nama siswa dapat memiliki panjang maksimal 9 karakter + 1 untuk null terminator
    char arrNama[5][10] = {"Alice", "Bob", "Charlie", "David", "Eva"};
    
    // Deklarasi dan inisialisasi array nilai siswa dengan ukuran 5
    // Setiap elemen array menyimpan nilai siswa
    int arrNilai[5] = {85, 90, 78, 92, 88};

    // Menampilkan daftar nama siswa dan nilai siswa sebelum perubahan
    printf("Daftar Siswa dan Nilai Siswa sebelum di ubah. \n");
    for (int i = 0; i < 5; i++) { // Mengulang sebanyak 5 kali (jumlah siswa)
        printf("%s: %d \n", arrNama[i], arrNilai[i]); // Mencetak nama siswa dan nilai
    }
    
    // Menampilkan pesan untuk daftar setelah nilai diubah
    printf("\nDaftar Siswa dan Nilai Siswa setelah di ubah. \n");
    
    // Mengubah nilai siswa di indeks ke-3 (David) menjadi 95
    arrNilai[3] = 95;

    // Menampilkan daftar nama siswa dan nilai siswa setelah perubahan
    for (int i = 0; i < 5; i++) { // Mengulang sebanyak 5 kali (jumlah siswa)
        printf("%s: %d \n", arrNama[i], arrNilai[i]); // Mencetak nama siswa dan nilai setelah perubahan
    }
    
    return 0;
}    
