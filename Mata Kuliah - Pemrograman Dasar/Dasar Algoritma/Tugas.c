#include <stdio.h>
#include <string.h>

typedef struct {
    char nama[50];
    int umur;
    float nilai;
} Mahasiswa;

float Hslratarata(Mahasiswa data[], int n) {
    int i;
    float hasil = 0;
    for (i = 0; i < n; i++) {
        hasil += data[i].nilai;
    }
    return hasil / n;
}

void urutkanNilai(Mahasiswa data[], int n) {
    int i, j;
    for (i = 0; i < n - 1; i++) {
        for (j = i + 1; j < n; j++) {
            if (data[i].nilai < data[j].nilai) {
                Mahasiswa temp = data[i];
                data[i] = data[j];
                data[j] = temp;
            }
        }
    }
}

void urutkanNama(Mahasiswa data[], int n) {
    int i, j;
    for (i = 0; i < n - 1; i++) {
        for (j = i + 1; j < n; j++) {
            if (strcmp(data[i].nama, data[j].nama) > 0) {
                Mahasiswa temp = data[i];
                data[i] = data[j];
                data[j] = temp;
            }
        }
    }
}

void urutkanUmur(Mahasiswa data[], int n) {
    int i, j;
    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            if (data[i].umur < data[j].umur) {
                Mahasiswa temp = data[i];
                data[i] = data[j];
                data[j] = temp;
            }
        }
    }
}

int main() {
    Mahasiswa data[10];
    int n, pilihan, i;
    
    printf("Masukkan Jumlah Mahasiswa: ");
    scanf("%d", &n);
    getchar();

    // Input data for each student
    for (i = 0; i < n; i++) {
        printf("\nData Mahasiswa ke %d:\n", i + 1);
        printf("Nama Mahasiswa: ");
        fgets(data[i].nama, sizeof(data[i].nama), stdin);
        data[i].nama[strcspn(data[i].nama, "\n")] = '\0';  
        
        printf("Umur: ");
        scanf("%d", &data[i].umur);
        
        printf("Nilai: ");
        scanf("%f", &data[i].nilai);
        getchar();  
    }

  
    float ratarata = Hslratarata(data, n);

    
    
    

    do {
        printf("\nPilih cara pengurutan:\n");
        printf("1. Berdasarkan Nama\n");
        printf("2. Berdasarkan Umur\n");
        printf("3. Berdasarkan Nilai\n");
        printf("4. Keluar\n");
        printf("Masukkan pilihan (1/2/3/4): ");
        scanf("%d", &pilihan);
        switch (pilihan) {
            case 1:
                urutkanNama(data, n);
                printf("\nData Mahasiswa berdasarkan Abjad Nama:\n");
                for (i = 0; i < n; i++) {
                    printf("Nama Mahasiswa: %s\nUmur: %d\nNilai: %.2f\n", data[i].nama, data[i].umur, data[i].nilai);
                    printf("\nRata-rata Nilai: %.2f\n", ratarata);
                }
                break;
            case 2:
                urutkanUmur(data, n);
                printf("\nData Mahasiswa berdasarkan Umur:\n");
                for (i = 0; i < n; i++) {
                    printf("Nama Mahasiswa: %s\nUmur: %d\nNilai: %.2f\n", data[i].nama, data[i].umur, data[i].nilai);
                    printf("\nRata-rata Nilai: %.2f\n", ratarata);
                }
                break;
            case 3:
                urutkanNilai(data, n);
                printf("\nData Mahasiswa berdasarkan Nilai Tertinggi:\n");
                for (i = 0; i < n; i++) {
                    printf("Nama Mahasiswa: %s\nUmur: %d\nNilai: %.2f\n", data[i].nama, data[i].umur, data[i].nilai);
                    printf("\nRata-rata Nilai: %.2f\n", ratarata);
                }
                break;
            case 4:
                printf("Terima kasih");
                break;
            default:
                printf("Pilihan tidak valid!\n");
                break; 
        } 
    } while (pilihan != 4);
 
    

    return 0;
}