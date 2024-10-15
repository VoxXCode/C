#include <stdio.h>
#include <math.h> // Meng-include library math.h

int main () {
    double num = 16.0;
    double result;

    result = sqrt(num);

    printf("Akar Kuatrat dari %.2f adalah %.2f \n", num, result);

    double angle = 45 * M_PI / 180;
    double sinValue = sin(angle);
    printf("Sinus dari 45 derajat adalah %.2f", sinValue);

    return 0;
}