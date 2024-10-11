#include <stdio.h>
#include <string.h>

int main () {
    char Teks[] ="Hello World!";

    // Menghitung panjangan string 
    int Panjang = strlen(Teks);

    printf("Panjang String '%s' : %d \n", Teks, Panjang);
}