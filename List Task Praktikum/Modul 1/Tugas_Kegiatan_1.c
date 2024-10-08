#include <stdio.h>

int main () {
    
    printf("\n --- Program Penghitungan Nilai Akhir Mahasiswa ---\n");
    
    // Input Nama
    char Nama[50]; 
    printf("Masukkan Nama Mahasiswa : ");
    gets(Nama);

    // Input NIM
    long long int Nim;
    printf("Masukkan NIM Mahasiswa : ");
    scanf("%lld", &Nim);


    // Input Nilai Tugas
    float Nilai1, Nilai2, Nilai3;
    printf("Masukkan Nilai Tugas (0-100) : ");
    scanf("%f", &Nilai1);

    // Input Nilai UTS
    printf("Masukkan Nilai UTS (0-100) : ");
    scanf("%f", &Nilai2);
    
    // Input Nilai UAS
    printf("Masukkan Nilai UAS (0-100) : ");
    scanf("%f", &Nilai3);

    printf("----------------------------------------------------\n");
    
    // Output Nilai
    float Nilai_Tugas, UTS, UAS, Nilai_Akhir;
    
    printf("Nama Mahasiswa : %s\n", Nama);
    printf("NIM Mahasiswa : %lld\n", Nim);

    printf("Nilai Tugas : %.2f\n", Nilai1);
    printf("Nilai UTS : %.2f\n", Nilai2);
    printf("Nilai UAS : %.2f\n", Nilai3);

    // Rumus Nilai Akhir
    Nilai_Akhir = (Nilai1 * 20 / 100) + (Nilai2 * 35 / 100) + (Nilai3 * 45 / 100); 
    
    printf("Nilai Akhir : %.2f\n", Nilai_Akhir);
    
    printf("----------------------------------------------------\n");
    
    return 0;
}