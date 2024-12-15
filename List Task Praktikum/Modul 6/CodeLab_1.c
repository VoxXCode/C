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

    // Meminta input angka dari pengguna untuk menghitung faktorial
    printf("Masukkan angka untuk menghitung faktorial: ");
    scanf("%d", &angka);
    
    // Menghitung dan menampilkan hasil faktorial dari angka yang dimasukkan
    printf("Faktorial dari %d adalah %d\n", angka, Faktorial(angka));

    // Meminta input angka dari pengguna untuk menentukan jumlah suku deret Fibonacci
    printf("Masukkan jumlah suku deret Fibonacci yang diinginkan: ");
    scanf("%d", &angka);

    // Menampilkan deret Fibonacci sesuai dengan jumlah suku yang diminta
    printf("Deret Fibonacci hingga suku ke-%d: ", angka);
    for (i = 0; i < angka; i++) {
        printf("%d ", Fibonacci(i));  // Memanggil fungsi Fibonacci untuk tiap suku
    }
    printf("\n");

    return 0;
}
