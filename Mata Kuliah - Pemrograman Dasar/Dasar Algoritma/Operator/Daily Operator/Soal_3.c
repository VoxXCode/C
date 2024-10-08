#include <stdio.h>

int main () {
    int Total_Belanja;

    printf("Masukkan Total Belanja : ");
    scanf("%d", &Total_Belanja);

    if (!(Total_Belanja > 100000)) {
        printf("Total Belanja : %d", Total_Belanja);
    } else {
        int Total_Akhir =  Total_Belanja - (0.15 * Total_Belanja);
        printf("Total Belanja setelah mendapatkan diskon : %d", Total_Akhir);
    }
}