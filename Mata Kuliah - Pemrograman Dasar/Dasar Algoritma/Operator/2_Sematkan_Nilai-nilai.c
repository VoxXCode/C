#include <stdio.h>

int main () {
    
    int a, b;

    printf("==================================== \n");

    printf("Sematkan : \n");
    printf("\t Variabel a = %d \n", a = 8);
    printf("\t Variabel b = %d \n", b= 4);

    printf("==================================== \n");

    printf("Tambahkan dan sematkan : \n");
    printf("\t Variabel a += b (8 += 4) a = %d \n", a += b);
    
    printf("==================================== \n");

    printf("Kurangi dan sematkan : \n");
    printf("\t Variabel a -= b (12 -= 4) a = %d \n", a -= b);

    printf("==================================== \n");

    printf("Kalikan dan sematkan : \n");
    printf("\t Variabel a *= b (8 *= 4) a = %d \n", a *= b);

    printf("==================================== \n");

    printf("Bagi dan sematkan : \n");
    printf("\t Variabel a /= b (32 /= 4) a = %d \n", a /= b);

    printf("==================================== \n");

    printf("Moduluskan dan sematkan : \n");
    printf("\t Variabel a %%= b (8 %%= 4) a = %d \n", a %= b);
    
}