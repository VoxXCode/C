#include <stdio.h>

int main () {
    char gender;
    int tinggi;

    printf("masukkan :");
    scanf(" %c", &gender);

    if (gender == 'l' | gender == 'L') {
        printf("male");
        printf("masukkan tinggi");
        scanf("%d", &tinggi);
        if (tinggi > 165) {
            printf("You are above average");
        } else if (tinggi <= 165) {
            printf("you are average");
        } else {
            printf("eror");
        }
    } else if (gender == 'p' | gender == 'P') {
        printf("female");
        printf("masukkan tinggi");
        scanf("%d", &tinggi);
        if (tinggi > 155) {
            printf("You are above average");
        } else if (tinggi <= 155) {
            printf("you are average");
        } else {
            printf("eror");
        }
    
    }
}