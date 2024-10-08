#include <stdio.h>

int main () {
    //Mendeklarasikan dan menginisialisasi string
    char greeting[] = "Hello, World!";

    // Menampilkan string menggunakan printf
    printf("Pesan : %s \n", greeting);

    // Menampilkan karakter-karakter individual dalam string
    printf("Karakter pertama : %c \n", greeting[0]);
    printf("Karakter kedua : %c \n", greeting[1]);
    printf("Karakter ketiga : %c \n", greeting[2]);
}