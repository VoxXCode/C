#include <stdio.h>

enum Film {
    Spiderman = 50000,
    Batman = 55000,
    Superman = 60000,
    Avengers = 70000,
    Joker = 45000
};

enum Jenis_Tiket {
    Reguler = 30000,
    VIP = 100000,
    VVIP = 150000
};

int main () {
    int Order_Film, Order_Tiket, Bayar;
    char Member;


    printf("======== Bioskop ========\n");

    // Order Jenis Film
    printf("Film :\n");
    printf("1. Spiderman - Rp.%d \n", Spiderman);
    printf("2. Batman - Rp.%d \n", Batman);
    printf("3. Superman - Rp.%d \n", Superman);
    printf("4. Avengers - Rp.%d \n", Avengers);
    printf("5. Joker - Rp.%d \n", Joker);
    printf("Pilih film (1-5) : ");
    scanf("%d", &Order_Film);

    // Order Jenis Tiket
    printf("\nJenis Tiket :\n");
    printf("1. Reguler - Rp.%d \n", Reguler);
    printf("2. VIP - Rp.%d \n", VIP);
    printf("3. VVIP - Rp.%d \n", VVIP);
    printf("Pilih jenis tiket (1-3) : ");
    scanf("%d", &Order_Tiket);

    printf("\nApakah Anda adalah member? (Y/N) : ");
    scanf(" %c", &Member);

    if (Member == 'Y' || Member == 'y' ) {
        if (Order_Film == 1) { // ======================================= Film 1
            if (Order_Tiket == 1) {
                double M_Spiderman = Spiderman + Reguler;
                double Member_Spiderman = M_Spiderman - M_Spiderman * 0.1;

                printf("Total Harga : Rp.%.2f", Member_Spiderman);
                printf("\nAlamat memori variabel total : %p", &Member_Spiderman);
                
                printf("\nMasukkan uang pembayaran : ");
                scanf("%d", &Bayar);

                double Kembalian = Bayar - Member_Spiderman;
                if (Bayar > Member_Spiderman) {
                    printf("Kembalian Anda : Rp.%.2f \n\n\n", Kembalian);
                } else if (Bayar == Member_Spiderman) {
                    printf("Terima Kasih. \n\n\n");
                } else {
                    printf("Uang anda Kurang. \n\n\n");
                }
            } else if (Order_Tiket == 2) {
                double M_Spiderman = Spiderman + VIP;
                double Member_Spiderman = M_Spiderman - M_Spiderman * 0.1;

                printf("Total Harga : Rp.%.2f", Member_Spiderman);
                printf("\nAlamat memori variabel total : %p", &Member_Spiderman);
                
                printf("\nMasukkan uang pembayaran : ");
                scanf("%d", &Bayar);

                double Kembalian = Bayar - Member_Spiderman;
                if (Bayar > Member_Spiderman) {
                    printf("Kembalian Anda : Rp.%.2f \n\n\n", Kembalian);
                } else if (Bayar == Member_Spiderman) {
                    printf("Terima Kasih. \n\n\n");
                } else {
                    printf("Uang anda Kurang. \n\n\n");
                }
            } else if (Order_Tiket == 3) {
                double M_Spiderman = Spiderman + VVIP;
                double Member_Spiderman = M_Spiderman - M_Spiderman * 0.1;

                printf("Total Harga : Rp.%.2f", Member_Spiderman);
                printf("\nAlamat memori variabel total : %p", &Member_Spiderman);
                
                printf("\nMasukkan uang pembayaran : ");
                scanf("%d", &Bayar);

                double Kembalian = Bayar - Member_Spiderman;
                if (Bayar > Member_Spiderman) {
                    printf("Kembalian Anda : Rp.%.2f \n\n\n", Kembalian);
                } else if (Bayar == Member_Spiderman) {
                    printf("Terima Kasih. \n\n\n");
                } else {
                    printf("Uang anda Kurang. \n\n\n");
                }
            } else {
                printf("Input anda tidak valid.");
            }
        } else if (Order_Film == 2) { // ======================================= Film 2
            if (Order_Tiket == 1) {
                double M_Batman = Batman + Reguler;
                double Member_Batman = M_Batman - M_Batman * 0.1;

                printf("Total Harga : Rp.%.2f", Member_Batman);
                printf("\nAlamat memori variabel total : %p", &Member_Batman);
                
                printf("\nMasukkan uang pembayaran : ");
                scanf("%d", &Bayar);

                double Kembalian = Bayar - Member_Batman;
                if (Bayar > Member_Batman) {
                    printf("Kembalian Anda : Rp.%.2f \n\n\n", Kembalian);
                } else if (Bayar == Member_Batman) {
                    printf("Terima Kasih. \n\n\n");
                } else {
                    printf("Uang anda Kurang. \n\n\n");
                }
            } else if (Order_Tiket == 2) {
                double M_Batman = Batman + VIP;
                double Member_Batman = M_Batman - M_Batman * 0.1;

                printf("Total Harga : Rp.%.2f", Member_Batman);
                printf("\nAlamat memori variabel total : %p", &Member_Batman);
                
                printf("\nMasukkan uang pembayaran : ");
                scanf("%d", &Bayar);

                double Kembalian = Bayar - Member_Batman;
                if (Bayar > Member_Batman) {
                    printf("Kembalian Anda : Rp.%.2f \n\n\n", Kembalian);
                } else if (Bayar == Member_Batman) {
                    printf("Terima Kasih. \n\n\n");
                } else {
                    printf("Uang anda Kurang. \n\n\n");
                }
            } else if (Order_Tiket == 3) {
                double M_Batman = Batman + VVIP;
                double Member_Batman = M_Batman - M_Batman * 0.1;

                printf("Total Harga : Rp.%.2f", Member_Batman);
                printf("\nAlamat memori variabel total : %p", &Member_Batman);
                
                printf("\nMasukkan uang pembayaran : ");
                scanf("%d", &Bayar);

                double Kembalian = Bayar - Member_Batman;
                if (Bayar > Member_Batman) {
                    printf("Kembalian Anda : Rp.%.2f \n\n\n", Kembalian);
                } else if (Bayar == Member_Batman) {
                    printf("Terima Kasih. \n\n\n");
                } else {
                    printf("Uang anda Kurang. \n\n\n");
                } 
            } else {
                printf("Input anda tidak valid.");
            }
        } else if (Order_Film == 3) { // ======================================= Film 3
            if (Order_Tiket == 1) {
                double M_Superman = Superman + Reguler;
                double Member_Superman = M_Superman - M_Superman * 0.1;

                printf("Total Harga : Rp.%.2f", Member_Superman);
                printf("\nAlamat memori variabel total : %p", &Member_Superman);
                
                printf("\nMasukkan uang pembayaran : ");
                scanf("%d", &Bayar);

                double Kembalian = Bayar - Member_Superman;
                if (Bayar > Member_Superman) {
                    printf("Kembalian Anda : Rp.%.2f \n\n\n", Kembalian);
                } else if (Bayar == Member_Superman) {
                    printf("Terima Kasih. \n\n\n");
                } else {
                    printf("Uang anda Kurang. \n\n\n");
                }
            } else if (Order_Tiket == 2) {
                double M_Superman = Superman + VIP;
                double Member_Superman = M_Superman - M_Superman * 0.1;

                printf("Total Harga : Rp.%.2f", Member_Superman);
                printf("\nAlamat memori variabel total : %p", &Member_Superman);
                
                printf("\nMasukkan uang pembayaran : ");
                scanf("%d", &Bayar);

                double Kembalian = Bayar - Member_Superman;
                if (Bayar > Member_Superman) {
                    printf("Kembalian Anda : Rp.%.2f \n\n\n", Kembalian);
                } else if (Bayar == Member_Superman) {
                    printf("Terima Kasih. \n\n\n");
                } else {
                    printf("Uang anda Kurang. \n\n\n");
                }
            } else if (Order_Tiket == 3) {
                double M_Superman = Superman + VVIP;
                double Member_Superman = M_Superman - M_Superman * 0.1;

                printf("Total Harga : Rp.%.2f", Member_Superman);
                printf("\nAlamat memori variabel total : %p", &Member_Superman);
                
                printf("\nMasukkan uang pembayaran : ");
                scanf("%d", &Bayar);

                double Kembalian = Bayar - Member_Superman;
                if (Bayar > Member_Superman) {
                    printf("Kembalian Anda : Rp.%.2f \n\n\n", Kembalian);
                } else if (Bayar == Member_Superman) {
                    printf("Terima Kasih. \n\n\n");
                } else {
                    printf("Uang anda Kurang. \n\n\n");
                }
            }  else {
                printf("Input anda tidak valid.");
            }
        } else if (Order_Film == 4) { // ======================================= Film 4
            if (Order_Tiket == 1) {
                double M_Avengers = Avengers + Reguler;
                double Member_Avengers = M_Avengers - M_Avengers * 0.1;

                printf("Total Harga : Rp.%.2f", Member_Avengers);
                printf("\nAlamat memori variabel total : %p", &Member_Avengers);
                
                printf("\nMasukkan uang pembayaran : ");
                scanf("%d", &Bayar);

                double Kembalian = Bayar - Member_Avengers;
                if (Bayar > Member_Avengers) {
                    printf("Kembalian Anda : Rp.%.2f \n\n\n", Kembalian);
                } else if (Bayar == Member_Avengers) {
                    printf("Terima Kasih. \n\n\n");
                } else {
                    printf("Uang anda Kurang. \n\n\n");
                }
            } else if (Order_Tiket == 2) {
                double M_Avengers = Avengers + VIP;
                double Member_Avengers = M_Avengers - M_Avengers * 0.1;

                printf("Total Harga : Rp.%.2f", Member_Avengers);
                printf("\nAlamat memori variabel total : %p", &Member_Avengers);
                
                printf("\nMasukkan uang pembayaran : ");
                scanf("%d", &Bayar);

                double Kembalian = Bayar - Member_Avengers;
                if (Bayar > Member_Avengers) {
                    printf("Kembalian Anda : Rp.%.2f \n\n\n", Kembalian);
                } else if (Bayar == Member_Avengers) {
                    printf("Terima Kasih. \n\n\n");
                } else {
                    printf("Uang anda Kurang. \n\n\n");
                }
            } else if (Order_Tiket == 3) {
                double M_Avengers = Avengers + VVIP;
                double Member_Avengers = M_Avengers - M_Avengers * 0.1;

                printf("Total Harga : Rp.%.2f", Member_Avengers);
                printf("\nAlamat memori variabel total : %p", &Member_Avengers);
                
                printf("\nMasukkan uang pembayaran : ");
                scanf("%d", &Bayar);

                double Kembalian = Bayar - Member_Avengers;
                if (Bayar > Member_Avengers) {
                    printf("Kembalian Anda : Rp.%.2f \n\n\n", Kembalian);
                } else if (Bayar == Member_Avengers) {
                    printf("Terima Kasih. \n\n\n");
                } else {
                    printf("Uang anda Kurang. \n\n\n");
                }
            } else {
                printf("Input anda tidak valid.");
            }
        } else if (Order_Film == 5) { // ======================================= Film 5
            if (Order_Tiket == 1) {
                double M_Joker = Joker + Reguler;
                double Member_Joker = M_Joker - M_Joker * 0.1;

                printf("Total Harga : Rp.%.2f", Member_Joker);
                printf("\nAlamat memori variabel total : %p", &Member_Joker);
                
                printf("\nMasukkan uang pembayaran : ");
                scanf("%d", &Bayar);

                double Kembalian = Bayar - Member_Joker;
                if (Bayar > Member_Joker) {
                    printf("Kembalian Anda : Rp.%.2f \n\n\n", Kembalian);
                } else if (Bayar == Member_Joker) {
                    printf("Terima Kasih. \n\n\n");
                } else {
                    printf("Uang anda Kurang. \n\n\n");
                }
            } else if (Order_Tiket == 2) {
                double M_Joker = Joker + VIP;
                double Member_Joker = M_Joker - M_Joker * 0.1;

                printf("Total Harga : Rp.%.2f", Member_Joker);
                printf("\nAlamat memori variabel total : %p", &Member_Joker);
                
                printf("\nMasukkan uang pembayaran : ");
                scanf("%d", &Bayar);

                double Kembalian = Bayar - Member_Joker;
                if (Bayar > Member_Joker) {
                    printf("Kembalian Anda : Rp.%.2f \n\n\n", Kembalian);
                } else if (Bayar == Member_Joker) {
                    printf("Terima Kasih. \n\n\n");
                } else {
                    printf("Uang anda Kurang. \n\n\n");
                }
            } else if (Order_Tiket == 3) {
                double M_Joker = Joker + VVIP;
                double Member_Joker = M_Joker - M_Joker * 0.1;

                printf("Total Harga : Rp.%.2f", Member_Joker);
                printf("\nAlamat memori variabel total : %p", &Member_Joker);
                
                printf("\nMasukkan uang pembayaran : ");
                scanf("%d", &Bayar);

                double Kembalian = Bayar - Member_Joker;
                if (Bayar > Member_Joker) {
                    printf("Kembalian Anda : Rp.%.2f \n\n\n", Kembalian);
                } else if (Bayar == Member_Joker) {
                    printf("Terima Kasih. \n\n\n");
                } else {
                    printf("Uang anda Kurang. \n\n\n");
                }
            } else {
                printf("Input anda tidak valid.");
            }
        } else {
            printf("Input anda tidak valid.");
        }
    } else if (Member == 'N' || Member == 'n') {
        if (Order_Film == 1) { // ======================================= Film 1
            if (Order_Tiket == 1) {
                double Member_Spiderman = Spiderman + Reguler;
                
                printf("Total Harga : Rp.%.2f", Member_Spiderman);
                printf("\nAlamat memori variabel total : %p", &Member_Spiderman);
                
                printf("\nMasukkan uang pembayaran : ");
                scanf("%d", &Bayar);

                double Kembalian = Bayar - Member_Spiderman;
                if (Bayar > Member_Spiderman) {
                    printf("Kembalian Anda : Rp.%.2f \n\n\n", Kembalian);
                } else if (Bayar == Member_Spiderman) {
                    printf("Terima Kasih. \n\n\n");
                } else {
                    printf("Uang anda Kurang. \n\n\n");
                }
            } else if (Order_Tiket == 2) {
                double Member_Spiderman = Spiderman + VIP;

                printf("Total Harga : Rp.%.2f", Member_Spiderman);
                printf("\nAlamat memori variabel total : %p", &Member_Spiderman);
                
                printf("\nMasukkan uang pembayaran : ");
                scanf("%d", &Bayar);

                double Kembalian = Bayar - Member_Spiderman;
                if (Bayar > Member_Spiderman) {
                    printf("Kembalian Anda : Rp.%.2f \n\n\n", Kembalian);
                } else if (Bayar == Member_Spiderman) {
                    printf("Terima Kasih. \n\n\n");
                } else {
                    printf("Uang anda Kurang. \n\n\n");
                }
            } else if (Order_Tiket == 3) {
                double Member_Spiderman = Spiderman + VVIP;

                printf("Total Harga : Rp.%.2f", Member_Spiderman);
                printf("\nAlamat memori variabel total : %p", &Member_Spiderman);
                
                printf("\nMasukkan uang pembayaran : ");
                scanf("%d", &Bayar);

                double Kembalian = Bayar - Member_Spiderman;
                if (Bayar > Member_Spiderman) {
                    printf("Kembalian Anda : Rp.%.2f \n\n\n", Kembalian);
                } else if (Bayar == Member_Spiderman) {
                    printf("Terima Kasih. \n\n\n");
                } else {
                    printf("Uang anda Kurang. \n\n\n");
                }
            } else {
                printf("Input anda tidak valid.");
            }
        } else if (Order_Film == 2) { // ======================================= Film 2
            if (Order_Tiket == 1) {
                double Member_Batman = Batman + Reguler;

                printf("Total Harga : Rp.%.2f", Member_Batman);
                printf("\nAlamat memori variabel total : %p", &Member_Batman);
                
                printf("\nMasukkan uang pembayaran : ");
                scanf("%d", &Bayar);

                double Kembalian = Bayar - Member_Batman;
                if (Bayar > Member_Batman) {
                    printf("Kembalian Anda : Rp.%.2f \n\n\n", Kembalian);
                } else if (Bayar == Member_Batman) {
                    printf("Terima Kasih. \n\n\n");
                } else {
                    printf("Uang anda Kurang. \n\n\n");
                }
            } else if (Order_Tiket == 2) {
                double Member_Batman = Batman + VIP;

                printf("Total Harga : Rp.%.2f", Member_Batman);
                printf("\nAlamat memori variabel total : %p", &Member_Batman);
                
                printf("\nMasukkan uang pembayaran : ");
                scanf("%d", &Bayar);

                double Kembalian = Bayar - Member_Batman;
                if (Bayar > Member_Batman) {
                    printf("Kembalian Anda : Rp.%.2f \n\n\n", Kembalian);
                } else if (Bayar == Member_Batman) {
                    printf("Terima Kasih. \n\n\n");
                } else {
                    printf("Uang anda Kurang. \n\n\n");
                }
            } else if (Order_Tiket == 3) {
                double Member_Batman = Batman + VVIP;

                printf("Total Harga : Rp.%.2f", Member_Batman);
                printf("\nAlamat memori variabel total : %p", &Member_Batman);
                
                printf("\nMasukkan uang pembayaran : ");
                scanf("%d", &Bayar);

                double Kembalian = Bayar - Member_Batman;
                if (Bayar > Member_Batman) {
                    printf("Kembalian Anda : Rp.%.2f \n\n\n", Kembalian);
                } else if (Bayar == Member_Batman) {
                    printf("Terima Kasih. \n\n\n");
                } else {
                    printf("Uang anda Kurang. \n\n\n");
                }
            } else {
                printf("Input anda tidak valid.");
            }
        } else if (Order_Film == 3) { // ======================================= Film 3
            if (Order_Tiket == 1) {
                double Member_Superman = Superman + Reguler;

                printf("Total Harga : Rp.%.2f", Member_Superman);
                printf("\nAlamat memori variabel total : %p", &Member_Superman);
                
                printf("\nMasukkan uang pembayaran : ");
                scanf("%d", &Bayar);

                double Kembalian = Bayar - Member_Superman;
                if (Bayar > Member_Superman) {
                    printf("Kembalian Anda : Rp.%.2f \n\n\n", Kembalian);
                } else if (Bayar == Member_Superman) {
                    printf("Terima Kasih. \n\n\n");
                } else {
                    printf("Uang anda Kurang. \n\n\n");
                }
            } else if (Order_Tiket == 2) {
                double Member_Superman = Superman + VIP;

                printf("Total Harga : Rp.%.2f", Member_Superman);
                printf("\nAlamat memori variabel total : %p", &Member_Superman);
                
                printf("\nMasukkan uang pembayaran : ");
                scanf("%d", &Bayar);

                double Kembalian = Bayar - Member_Superman;
                if (Bayar > Member_Superman) {
                    printf("Kembalian Anda : Rp.%.2f \n\n\n", Kembalian);
                } else if (Bayar == Member_Superman) {
                    printf("Terima Kasih. \n\n\n");
                } else {
                    printf("Uang anda Kurang. \n\n\n");
                }
            } else if (Order_Tiket == 3) {
                double Member_Superman = Superman + VVIP;

                printf("Total Harga : Rp.%.2f", Member_Superman);
                printf("\nAlamat memori variabel total : %p", &Member_Superman);
                
                printf("\nMasukkan uang pembayaran : ");
                scanf("%d", &Bayar);

                double Kembalian = Bayar - Member_Superman;
                if (Bayar > Member_Superman) {
                    printf("Kembalian Anda : Rp.%.2f \n\n\n", Kembalian);
                } else if (Bayar == Member_Superman) {
                    printf("Terima Kasih. \n\n\n");
                } else {
                    printf("Uang anda Kurang. \n\n\n");
                }
            }  else {
                printf("Input anda tidak valid.");
            }
        } else if (Order_Film == 4) { // ======================================= Film 4
            if (Order_Tiket == 1) {
                double Member_Avengers = Avengers + Reguler;

                printf("Total Harga : Rp.%.2f", Member_Avengers);
                printf("\nAlamat memori variabel total : %p", &Member_Avengers);
                
                printf("\nMasukkan uang pembayaran : ");
                scanf("%d", &Bayar);

                double Kembalian = Bayar - Member_Avengers;
                if (Bayar > Member_Avengers) {
                    printf("Kembalian Anda : Rp.%.2f \n\n\n", Kembalian);
                } else if (Bayar == Member_Avengers) {
                    printf("Terima Kasih. \n\n\n");
                } else {
                    printf("Uang anda Kurang. \n\n\n");
                }
            } else if (Order_Tiket == 2) {
                double Member_Avengers = Avengers + VIP;

                printf("Total Harga : Rp.%.2f", Member_Avengers);
                printf("\nAlamat memori variabel total : %p", &Member_Avengers);
                
                printf("\nMasukkan uang pembayaran : ");
                scanf("%d", &Bayar);

                double Kembalian = Bayar - Member_Avengers;
                if (Bayar > Member_Avengers) {
                    printf("Kembalian Anda : Rp.%.2f \n\n\n", Kembalian);
                } else if (Bayar == Member_Avengers) {
                    printf("Terima Kasih. \n\n\n");
                } else {
                    printf("Uang anda Kurang. \n\n\n");
                }
            } else if (Order_Tiket == 3) {
                double Member_Avengers = Avengers + VVIP;

                printf("Total Harga : Rp.%.2f", Member_Avengers);
                printf("\nAlamat memori variabel total : %p", &Member_Avengers);
                
                printf("\nMasukkan uang pembayaran : ");
                scanf("%d", &Bayar);

                double Kembalian = Bayar - Member_Avengers;
                if (Bayar > Member_Avengers) {
                    printf("Kembalian Anda : Rp.%.2f \n\n\n", Kembalian);
                } else if (Bayar == Member_Avengers) {
                    printf("Terima Kasih. \n\n\n");
                } else {
                    printf("Uang anda Kurang. \n\n\n");
                }
            } else {
                printf("Input anda tidak valid.");
            }
        } else if (Order_Film == 5) { // ======================================= Film 5
            if (Order_Tiket == 1) {
                double Member_Joker = Joker + Reguler;

                printf("Total Harga : Rp.%.2f", Member_Joker);
                printf("\nAlamat memori variabel total : %p", &Member_Joker);
                
                printf("\nMasukkan uang pembayaran : ");
                scanf("%d", &Bayar);

                double Kembalian = Bayar - Member_Joker;
                if (Bayar > Member_Joker) {
                    printf("Kembalian Anda : Rp.%.2f \n\n\n", Kembalian);
                } else if (Bayar == Member_Joker) {
                    printf("Terima Kasih. \n\n\n");
                } else {
                    printf("Uang anda Kurang. \n\n\n");
                }
            } else if (Order_Tiket == 2) {
                double Member_Joker = Joker + VIP;

                printf("Total Harga : Rp.%.2f", Member_Joker);
                printf("\nAlamat memori variabel total : %p", &Member_Joker);
                
                printf("\nMasukkan uang pembayaran : ");
                scanf("%d", &Bayar);

                double Kembalian = Bayar - Member_Joker;
                if (Bayar > Member_Joker) {
                    printf("Kembalian Anda : Rp.%.2f \n\n\n", Kembalian);
                } else if (Bayar == Member_Joker) {
                    printf("Terima Kasih. \n\n\n");
                } else {
                    printf("Uang anda Kurang. \n\n\n");
                }
            } else if (Order_Tiket == 3) {
                double Member_Joker = Joker + VVIP;

                printf("Total Harga : Rp.%.2f", Member_Joker);
                printf("\nAlamat memori variabel total : %p", &Member_Joker);
                
                printf("\nMasukkan uang pembayaran : ");
                scanf("%d", &Bayar);

                double Kembalian = Bayar - Member_Joker;
                if (Bayar > Member_Joker) {
                    printf("Kembalian Anda : Rp.%.2f \n\n\n", Kembalian);
                } else if (Bayar == Member_Joker) {
                    printf("Terima Kasih. \n\n\n");
                } else {
                    printf("Uang anda Kurang. \n\n\n");
                }
            } else {
                printf("Input anda tidak valid.");
            }
        } else {
            printf("Input anda tidak valid.");
        }
    } else {
        printf("\nInput anda tidak valid.");
    }

    return 0;
}