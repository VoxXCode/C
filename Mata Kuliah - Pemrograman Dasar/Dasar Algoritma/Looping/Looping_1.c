#include <stdio.h>

int main () {
    int a = 1;
    int b = 0;
    
    for (int i = 0; i < 6; i++) {
        b += 1; // + 1
        printf("%d \t", a);
        a += b; // Output a dari hasil sebelumnya + variable b
        
    }
    
    return 0;
}