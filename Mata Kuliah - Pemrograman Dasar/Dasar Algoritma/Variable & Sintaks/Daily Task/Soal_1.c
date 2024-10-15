#include <stdio.h>

int main ()
{
    int jarak, kecepatan, waktu_tempuh;

    printf("Nilai Jarak :");
    scanf("%d", &jarak);
    printf("Nilai Kecepatan :");
    scanf("%d", &kecepatan);

    waktu_tempuh = jarak/kecepatan;

    printf("Waktu tempuh adalah %d ", waktu_tempuh);
    return 0;
}