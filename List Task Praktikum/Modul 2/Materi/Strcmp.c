#include <stdio.h>
#include <string.h>

int main () {
    char string1[] = "Halo";
    char string2[] = "halo";

    // Membandingkan dua string 
    int hasil = strcmp(string1, string2);

    if (hasil == 0) {
        printf("String '%s' dan '%s' adalah sama. \n", string1, string2);
    } else if (hasil < 0) {
        printf("String '%s' lebih kecil dari '%s'. \n", string1, string2);
    } else {
        printf("String '%s' lebih besar dari '%s'. \n", string1, string2); 
    }
}