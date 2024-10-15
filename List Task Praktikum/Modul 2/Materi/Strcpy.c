#include <stdio.h>
#include <string.h>

int main () {
    char sumber[] = "Hello World!";
    char tujuan[50];

    // Menyalin string dari 'sumber' ke 'tujuan'
    strcpy(tujuan, sumber);

    printf("String sumber : %s \n", sumber);
    printf("String tujuan setelah strcpy : %s", tujuan); 
}