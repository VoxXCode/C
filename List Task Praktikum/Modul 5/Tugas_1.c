#include <stdio.h>
#include <ctype.h>
#include <string.h>
int main() {
    char arrkarakter[]= "informatika";
    int panjang = strlen(arrkarakter);
    for(int i=0; i < panjang; i++)
    {
        if (i % 2==0)
        {
            arrkarakter[i]=toupper(arrkarakter[i]);
        }else{
            arrkarakter[i]=tolower(arrkarakter[i]);
        }
    }
    
    printf("%s", arrkarakter);

    return 0;
}