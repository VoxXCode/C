#include <stdio.h>
#include <string.h> // Meng-include library string.h

int main () {
    char str1[50] = "Pemrograman ";
    char str2[50] = "Bahasa C";

    strcat(str1, str2);

    printf("Hasil penggabungan : %s \n", str1);

    int len = strlen(str1);
    printf("Panjang string : %d", len);

    return 0;
}