#include <stdio.h>

int main(){
    printf("=====Program penghitung kalori harian==== \n");
    printf("\nProgram ini akan menghitung total kalori harian yang dikonsumsi \n");

    int Kalori_Pertama, Kalori_Kedua, Kalori_Ketiga;
    int Total_Kalori;
    

    printf("Masukkan kalori makanan pertama = ");
    scanf("%d", &Kalori_Pertama);

    printf("Masukkan kalori makanan pertama = ");
    scanf("%d", &Kalori_Kedua);

    printf("Masukkan kalori makanan pertama = ");
    scanf("%d", &Kalori_Ketiga);

    Total_Kalori = Kalori_Pertama + Kalori_Kedua + Kalori_Ketiga;
    printf("Total Kalori = %d", Total_Kalori);

}