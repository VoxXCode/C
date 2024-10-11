#include <stdio.h>

int main(){
    printf("===== Program penghitung Kalori Harian ===== \n");
    printf("Program ini akan menghitung total kalori harian yang dikonsumsi \n\n");

    int Kalori_Pertama, Kalori_Kedua, Kalori_Ketiga, Total_Kalori;
    const int Batas_Harian = 2500;
    
    
    printf("Masukkan kalori makanan pertama = ");
    scanf("%d", &Kalori_Pertama);

    printf("Masukkan kalori makanan pertama = ");
    scanf("%d", &Kalori_Kedua);

    printf("Masukkan kalori makanan pertama = ");
    scanf("%d", &Kalori_Ketiga);

    Total_Kalori = Kalori_Pertama + Kalori_Kedua + Kalori_Ketiga;

    printf("\nTotal Kalori = %d \n", Total_Kalori);
    if (!(Total_Kalori > Batas_Harian)) {
        printf("Total Kalori tidak melebihi batas harian.");
    } else {
        printf("Total Kalori melebihi batas harian.");
    }
    

}