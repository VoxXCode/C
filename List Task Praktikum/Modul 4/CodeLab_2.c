#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, j;
    int length;

    // Input string dari pengguna
    printf("Masukkan string: ");
    fgets(str, sizeof(str), stdin);
    
    // Menghapus karakter newline (\n) dari input string
    length = strlen(str);
    if (str[length - 1] == '\n') {
        str[length - 1] = '\0';
    }

    // Mencetak karakter unik
    for (i = 0; i < length; i++) {
        // Lewati jika karakter sudah ada sebelumnya
        int is_unique = 1;
        
        // Cek apakah karakter str[i] sudah muncul sebelumnya
        for (j = 0; j < i; j++) {
            if (str[i] == str[j]) {
                is_unique = 0;
                break;
            }
        }

        // Jika karakter unik, cetak dan lanjutkan
        if (is_unique) {
            printf("%c ", str[i]);
        }
    }
    printf("\n");

    return 0;
}
