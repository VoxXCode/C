#include <stdio.h>

int main () 
{
    int pulsa_awal, durasi_pangggilan, tarif;

    printf("Pulsa Awal adalah : ");
    scanf("%d", &pulsa_awal);
    printf("Durasi Panggilan adalah : ");
    scanf("%d", &durasi_pangggilan);
    printf("Tarif Per Menit adalah : ");
    scanf("%d", &tarif);

    int hasil_pulsa = pulsa_awal-tarif*durasi_pangggilan;
    

    printf("Sisa Pulsa adalah : %d", hasil_pulsa);
}