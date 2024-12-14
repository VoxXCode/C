#include <stdio.h>

// Fungsi rekursif untuk menghitung faktorial
int Faktorial(int n) {
    if (n == 0 || n == 1) {
        return 1;  // Basis rekursi: faktorial 0 dan 1 adalah 1
    } else {
        return n * Faktorial(n - 1);  // Rekursi: n! = n * (n-1)!
    }
}

// Fungsi rekursif untuk menghasilkan suku Fibonacci ke-n
int Fibonacci(int n) {
    if (n == 0) {
        return 0;  // Basis rekursi: F(0) = 0
    } else if (n == 1) {
        return 1;  // Basis rekursi: F(1) = 1
    } else {
        return Fibonacci(n - 1) + Fibonacci(n - 2);  // Rekursi: F(n) = F(n-1) + F(n-2)
    }
}

int main() {
    int angka, i;

    // Input angka untuk faktorial
    printf("Masukkan angka untuk menghitung faktorial: ");
    scanf("%d", &angka);
    
    // Menghitung dan menampilkan faktorial
    printf("Faktorial dari %d adalah %d\n", angka, Faktorial(angka));

    // Input angka untuk deret Fibonacci
    printf("Masukkan jumlah suku deret Fibonacci yang diinginkan: ");
    scanf("%d", &angka);

    // Menampilkan deret Fibonacci
    printf("Deret Fibonacci hingga suku ke-%d: ", angka);
    for (i = 0; i < angka; i++) {
        printf("%d ", Fibonacci(i));
    }
    printf("\n");

    return 0;
}
