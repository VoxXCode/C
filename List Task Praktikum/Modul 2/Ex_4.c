#include <stdio.h>

int main () {
    // Deklarasi variable
    unsigned int a = 12, b = 25; // 12 dalam biner 0000 1100
    unsigned int b = 25; // 25 dalam biner 0001 1001

    // Operator AND 
    unsigned int hasil_and = a & b; // 0000 1100 | 0001 1001 = 0000 1000 (8)
    printf("Hasil dari %u & %u = %u \n", a, b, hasil_and);

    // Operator OR 
    unsigned int hasil_or = a | b; // 0000 1100 | 0001 1001 = 0001 1101 (29)
    printf("Hasil dari %u | %u = %u \n", a, b, hasil_or);

    // Operator XOR 
    unsigned int hasil_xor = a ^ b; // 0000 1100 ^ 0001 1001 = 0001 0101 (21)
    printf("Hasil dari %u ^ %u = %u \n", a, b, hasil_xor);

    // Operator NOT
    unsigned int hasil_not = ~a; // ~0000 1100 = 1111 0011 (bitwise NOT hasilkan bilangan negatif di signed int)
    printf("Hasil dari ~%u = %u \n", a, hasil_not);
    
    // Left shift
    unsigned int hasil_left_shift = a << 2; // 0000 1100 << 2 = 0011 0000 (48)
    printf("Hasil dari %u << 2 = %u \n", a, hasil_left_shift);

    // Right shift
    unsigned int hasil_right_shift = a >> 2; // 0000 1100 >> 2 = 0000 0011 (3)
    printf("Hasil dari %u >> 2 = %u \n", a, hasil_right_shift);
}