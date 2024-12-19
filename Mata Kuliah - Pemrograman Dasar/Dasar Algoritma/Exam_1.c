// #include <stdio.h>

// int a;
// int b;

// int GCD(int a, int b) {
//     if (b == 0) {
//         return a;
//     } else {
//         return GCD(b, a % b); 
//     }
    
// }

// int main() {
//     printf("Masukkan :");
//     scanf("%d", &a);
//     printf("Masukkan :");
//     scanf("%d", &b);
//     int hasil = GCD(a, b); 
//     printf("%d", hasil);   
//     return 0;
// }

//==============================================

// #include <stdio.h>

// int n, hasil;

// int Deret(int n) {
//     if (n == 1) {
//         return n;
//     } else {
//         return n + Deret(n - 1);
//     }
// }

// int main() {  
//     printf("Masukkan : ");
//     scanf("%d", &n);  
//     hasil = Deret(n);
//     printf("%d", hasil);  
//     return 0;
// }


//==============================================

#include <stdio.h>

int Pangkat(int a, int b) {
    if (b == 0) {
        return 1;
    } else {
        return a * Pangkat(a, b - 1); 
    }
}

int main() {
    int a, b, hasil;
    printf("Masukkan angka untuk basis (a): ");
    scanf("%d", &a);

    printf("Masukkan angka untuk eksponen (b): ");
    scanf("%d", &b);

    hasil = Pangkat(a, b);
    printf("%d^%d = %d\n", a, b, hasil);
    return 0;
}
