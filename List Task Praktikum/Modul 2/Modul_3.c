#include <stdio.h>

int main () {
    int num = 10;
    int *ptr; // Deklarasi pointer bertipe integer

    // Mengisi pointer dengan alamat memori variable num
    ptr = &num;

    printf("Nilai dari num : %d \n", num);
    printf("Alamat memori dari num %p \n", &num);
    printf("Nilai yang diakses melalui pointer ptr : %d \n", *ptr);
    printf("Alamat memori yang disimpan dalam pointer ptr : %p \n", ptr);

    // Mengubah nilai variabel num melalui pointer ptr
    *ptr = 20;
    printf("Nilai baru dari num setelah diubah melalui pointer : %d \n", num);
    
}