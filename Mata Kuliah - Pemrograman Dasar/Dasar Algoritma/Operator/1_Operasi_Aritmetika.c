#include <stdio.h>

int main () {
    
    int a = 4, b = 8, c = 1, d = 1, e = 2;

    printf("==================================== \n");

    printf("Penambahan : %d \n", a + b);
    printf("Pengurangan : %d \n", a - b);
    printf("Perkalian : %d \n", a * b);
    printf("Pembagian : %d \n", a / b);
    printf("Modulus : %d \n", a % b); // Sisa Hasil Pembagian
    
    
    printf("==================================== \n");

    // OPERATOR INCREMENT (Ditambahkan 1)

    // Post-Increment = Output di tampilkan terlebih dahulu baru di tambahkan
    printf("Penambahan satuan posfiks : %d \n", c++); // Output yang di tampilkan
    printf("Nilai penambahan satuan posfiks sekarang : %d \n", c); // Yang ini output yang sudah di tambahkan

    // Pre-Increment = Output di tambahkan dahulu baru di tampilkan
    printf("Penambahan satuan prefiks : %d \n", ++d);
    printf("Nilai penambahan satuan prefiks : %d \n", d); // Kenapa ada dua output sedangkan hasil outputnya sama ?

    printf("==================================== \n");

    // OPERATOR DECREMENT (Dikurangi 1)

    printf("Pengurangan satuan posfiks : %d \n", a--);
    printf("Nilai pengurangan satuan posfiks : %d \n", a);

    printf("Pengurangan satuan prefiks : %d \n", --b);
    printf("Nilai pengurangan satuan prefiks : %d \n", b);

    printf("==================================== \n");
    
}