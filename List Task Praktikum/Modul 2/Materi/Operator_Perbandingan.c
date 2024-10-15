#include <stdio.h>

int main () {
    int a = 10, b = 5;

    if (a == b) {
        printf("%d sama dengan %d\n", a, b);
    } else { 
        printf("%d tidak sama dengan %d\n", a, b);
    } 
    
    if (a != b) {
        printf("%d tidak sama dengan %d\n", a, b);
    } else {
        printf("%d sama dengan %d\n", a, b);
    }

    if (a > b) {
        printf("%d lebih besar dari %d\n", a, b);
    } else {
        printf("%d tidak lebih besar dari %d\n", a, b);
    }

    if (a < b) {
        printf("%d lebih kecil dari %d\n", a, b);
    } else {
        printf("%d tidak lebih kecil dari %d\n", a, b);
    }

    if (a >= b) {
        printf("%d lebih besar atau sama dengan %d\n", a, b);
    } else {
        printf("%d tidak lebih besar atau sama dengan %d\n", a, b);
    }

    if (a <= b) {
        printf("%d lebih kecil atau sama dengan %d\n", a, b);
    } else {
        printf("%d tidak lebih kecil atau sama dengan %d\n", a, b);
    }
    return 0;

}