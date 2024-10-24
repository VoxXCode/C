#include <stdio.h>

int main () {
    

    for(int i=1; i<=5; i++) {
        if (i%2==1)
        {
            printf("%d \t",i*i);
        } else {
            printf("%d \t", i*i*i);
        }
    }
    
    return 0;
}