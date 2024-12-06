#include <stdio.h>
#include <string.h>
int main() {
    char str[]= "informatika";
    int panjang = strlen(str);
    
    for(int i=0; i < panjang; i++){
        
        if(str[i]=='a' || str[i]=='i' ||str[i]=='u' ||str[i]=='e' ||str[i]=='o'){
            str[i]='*';
        }
    }
    printf("%s", str);

    return 0;
}