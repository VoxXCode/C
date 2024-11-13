#include <stdio.h>

int main () {
    float phi = 3.14159;
    float Radius;

    printf("Masukkan Radius : ");
    scanf("%f", &Radius);

    double Area = phi * Radius * Radius;
    double Circumference = 2 * phi * Radius;
    printf("Area : %.2f \n", Area);
    printf("Circumference : %.2f", Circumference);
}