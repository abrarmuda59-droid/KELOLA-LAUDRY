#include "laundry.h"

int main() {
    Queue antrian;
    Stack riwayat;
    initQueue(&antrian);
    initStack(&riwayat);
    loadData(&antrian, &riwayat);
    
    int role = login();
    if (role == 0) return 1;
    
    int pilih;
    do {
        if (role == 1) {
            printf("\n====================================\n");
            printf("          MENU ADMIN                \n");
            printf("====================================\n");
            printf("1. tambah laundry\n");
            printf("2. proses laundry\n");
            printf("3. edit pesanan\n");
            printf("4. lihat antrian\n");
            printf("5. lihat riwayat\n");
            printf("6. daftar harga\n");
            printf("7. tampilkan antrian berdasarkan jenis layanan\n");
            printf("8. sorting berdasarkan berat\n");
            printf("9. jadwal pengambilan\n");
            printf("0. keluar\n");
            printf("====================================\n");
            printf("Pilih: ");

 if (scanf("%d", &pilih) != 1) {
                printf("\nPilihan tidak valid!\n");
                while (getchar() != '\n');
                continue;
            }
            
            switch(pilih) {
                case 1: {
                    char nama[50], jenis[10], tanggalMasuk[11], tanggalSelesai[11];
                    int j, day, month, year;
                    float berat;
                    
                    printf("\nNama: ");
                    scanf(" %[^\n]", nama);
                    printf("Berat (kg): ");
                    scanf("%f", &berat);
                    if (berat < 2) berat = 2;
                    printf("Jenis (1.Reguler/2.Express): ");
                    scanf("%d", &j);
                    if (j != 1 && j != 2) {
                        printf("\nPilihan tidak ada!\n");
                        break;
                    }
                    strcpy(jenis, (j == 1) ? "reguler" : "express");
                    
                    int tanggalValid = 0;
                    while (!tanggalValid) {
                        printf("Tanggal Masuk (DD/MM/YYYY): ");
                        scanf("%s", tanggalMasuk);
