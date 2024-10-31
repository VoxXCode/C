#include <stdio.h>

int main () {
    
    for (int i = 0; i <= 7; i++) {
        
        for (int j = 1; j <= i; j++) {
            printf(" ");
        }
        for (int k = 1; k <= i; k++) {
            printf("*");
            
        }
        printf("\n");
    }
    
    return 0;
}