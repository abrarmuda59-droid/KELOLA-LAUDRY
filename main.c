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
            printf("| 4. Lihat Antrian    |\n");
            printf("| 5. Lihat Riwayat    |\n");
            printf("| 6. Daftar Harga     |\n");
            printf("| 7. Antrian by Jenis |\n");
            printf("| 8. Antrian by Berat |\n");
            printf("| 9. Jadwal Ambil     |\n");
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
