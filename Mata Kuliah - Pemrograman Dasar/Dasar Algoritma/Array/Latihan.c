#include <stdio.h>

int main () {
    int arrNilai[5];

    // Input nilai array
    for (int i = 0; i < 5; i++){
        printf("Masukkan indeks ke-%d = ", i);
        scanf("%d", &arrNilai[i]);
    }

    // Menampilkan nilai array
    printf("\nTampilkan nilai array\n");
    for (int i = 0; i < 5; i++) {
        printf("%d\t", arrNilai[i]);
    }

    // Menampilkan nilai array setelah dibalik
    printf("\nTampilkan nilai setelah dibalik\n");
    for (int i = 4; i >= 0; i--) {
        printf("%d\t", arrNilai[i]); 
    }

    // Menampilkan angka genap dan ganjil
    int total_genap = 0;
    int total_ganjil = 0;
    printf("\nMenampilkan angka genap dan ganjil:\n");
    for (int i = 0; i < 5; i++) {
        if (arrNilai[i] % 2 == 0) {
            printf("\nGenap --> %d\t", arrNilai[i]); 
            total_genap += arrNilai[i];
        } else {
            printf("\nGanjil --> %d\t", arrNilai[i]);
            total_ganjil += arrNilai[i];
        }
    }
    printf("\n");

    // Menampilkan total Genap dan Ganjil
    printf("Menampilkan total Genap %d\n", total_genap);
    printf("Menampilkan total Ganjil %d\n", total_ganjil);
    printf("\n");

    // Mencari nilai minimum dan maksimum
    int min = arrNilai[0];
    int max = arrNilai[0];

    for (int i = 1; i < 5; i++) {
        if (arrNilai[i] < min) {
            min = arrNilai[i];
        }
        if (arrNilai[i] > max) {
            max = arrNilai[i];
        }
    }

    // Menampilkan nilai minimum dan maksimum
    printf("Nilai Minimum = %d\n", min);
    printf("Nilai Maksimum = %d\n", max);

    return 0;
}
