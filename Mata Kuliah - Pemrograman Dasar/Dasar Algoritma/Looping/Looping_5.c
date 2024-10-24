#include <stdio.h>

int main () {
    int ganjil = 0;
    int genap = 1;
    for (int i = 1; i < 11; i++) {
        if (i%2==1) {
            ganjil++;
            printf("%d \t", ganjil);
        } else {
            genap+=2;
            printf("%d \t", genap);
        }
    }
    
    return 0;
}