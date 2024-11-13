#include <stdio.h>
#include <string.h>

int main() {
    char Input[50];  // Menyediakan buffer untuk string yang dimasukkan

    printf("===== Program Mencari Karakter Unik dalam String =====\n");

    // Meminta pengguna untuk memasukkan sebuah string
    printf("Masukkan sebuah string : ");
    fgets(Input, sizeof(Input), stdin);  // Menggunakan fgets untuk membaca input string

    // Menghapus karakter newline yang mungkin ada di akhir input
    Input[strcspn(Input, "\n")] = '\0';

    // Array untuk menyimpan karakter yang sudah dicetak sebelumnya
    int isPrinted[256] = {0};  // Asumsi karakter dalam ASCII (256 karakter)

    // Memeriksa setiap karakter dalam string
    for (int i = 0; Input[i] != '\0'; i++) {
        // Jika karakter sudah dicetak sebelumnya, lompat ke iterasi berikutnya
        if (isPrinted[(unsigned char)Input[i]] == 1) {
            continue;  // Lompat ke iterasi berikutnya
        }

        // Cetak karakter yang belum dicetak
        printf("%c", Input[i]);
        
        // Tandai karakter tersebut sebagai sudah dicetak
        isPrinted[(unsigned char)Input[i]] = 1;
    }

    return 0;
}
