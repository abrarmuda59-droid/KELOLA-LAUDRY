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
            printf("\n+====================+\n");
            printf("|     MENU ADMIN      |\n");
            printf("+====================+\n");
            printf("| 1. Tambah Laundry   |\n");
            printf("| 2. Tandai Selesai   |\n");
            printf("| 3. Edit Pesanan     |\n");
            printf("| 4. Hapus Pesanan    |\n");
            printf("| 5. Lihat Antrian    |\n");
            printf("| 6. Lihat Riwayat    |\n");
            printf("| 7. Daftar Harga     |\n");
            printf("| 8. Antrian by Jenis |\n");
            printf("| 9. Antrian by Berat |\n");
            printf("| 10. Jadwal Ambil    |\n");
            printf("| 0. Keluar           |\n");
            printf("+====================+\n");
            printf("Pilih: ");
            
            pilih = bacaInt("");
            
            if (pilih == 1) {
                char nama[50], jenis[10], tglMasuk[11], tglSelesai[11];
                float berat;
                int j;
                
                bacaString("Nama: ", nama, MAX_NAMA);
                berat = bacaFloat("Berat (kg): ");
                if (berat < 2) berat = 2;
                
                do {
                    j = bacaInt("Jenis (1.Reguler/2.Express): ");
                    if (j != 1 && j != 2) {
                        printf("Pilihan hanya 1 atau 2!\n");
                    }
                } while (j != 1 && j != 2);
                
                if (j == 1) strcpy(jenis, "reguler");
                else strcpy(jenis, "express");
                
                int valid = 0;
                while (!valid) {
                    bacaString("Tanggal Masuk (DD/MM/YYYY): ", tglMasuk, 11);
                    if (validasiTanggal(tglMasuk)) valid = 1;
                }
                
                int tambahHari = (strcmp(jenis, "express") == 0) ? 1 : 3;
                hitungTanggalSelesai(tglMasuk, tglSelesai, tambahHari);
                
                Laundry* baru = (Laundry*)malloc(sizeof(Laundry));
                baru->id = nextId++;
                strcpy(baru->nama, nama);
                strcpy(baru->jenis, jenis);
                baru->berat = berat;
                baru->harga = hitungHarga(berat, jenis);
                strcpy(baru->tanggalMasuk, tglMasuk);
                strcpy(baru->tanggalSelesai, tglSelesai);
                baru->next = NULL;
                
                enqueue(&antrian, baru);
                simpanData(&antrian, &riwayat);
                printf("\nBERHASIL! ID:%d | Total: Rp%d\n", baru->id, baru->harga);
            }
            else if (pilih == 2) {
                if (isEmptyQueue(&antrian)) {
                    printf("\nAntrian kosong\n");
                } else {
                    int id = bacaInt("Masukkan ID Laundry: ");
                    Laundry* proses = dequeueByID(&antrian, id);
                    if (proses) {
                        pushStack(&riwayat, proses);
                        simpanData(&antrian, &riwayat);
                        printf("\nLaundry ID %d selesai\n", id);
                    } else {
                        printf("\nID %d tidak ditemukan\n", id);
                    }
                }
            }
