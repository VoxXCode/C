#include <stdio.h>

int main () {
    int x = 11, y = 5;


    // Operator logika AND (&&)
    if (x > 0 && y > 0) {
        printf("Kedua nilai x dan y lebih besar dari 0 \n");
    } else {
        printf("Salah satu atau kedua nilai x dan y tidak lebih dari 0 \n");
    }
    
    // Operator logika OR (||)
    if (x > 10 || y > 10) {
        printf("salah satu dari nilai x atau y lebih besar dari 10 \n");
    } else {
        printf("Kedua nilai x dan y tidak lebih besar dari 10 \n");
    }

    // Operator logika NOT (!)
    if (!(x > y)) {
        printf("x tidak lebih dari y \n");
    } else {
        printf("x lebih besar dari y \n");
    }
}