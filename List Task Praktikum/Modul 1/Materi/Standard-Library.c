#include <stdio.h>
#include <stdlib.h> // Meng-include library stdlib.h

int main () {
    char str[10] = "1234";
    int num;

    // Mengonversi string ke integer menggunakan fungsi atoi
    num = atoi(str);

    printf("String : %s \nInteger : %d ", str, num);

    return 0;
}