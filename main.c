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
