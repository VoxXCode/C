#include <stdio.h>

int main () 
{
    int bayar;
    int diskon;

    printf("masukkan : " );
    scanf("%d", &bayar);
    
    printf("masukkan : " );
    scanf("%d", &diskon);    


    int potongan = bayar*diskon/100; // Jika di menggunakan () hasil dari variable ini tidak akan terbaca/terhitung.
    int total = bayar-potongan;

    printf("Yang di bayar adalah : %d", total);
    return 0;
}