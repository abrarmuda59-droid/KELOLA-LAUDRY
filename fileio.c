#include "laundry.h"

int login() {
    FILE* f = fopen("akun.txt", "r");
    if (!f) {
        printf("File akun.txt tidak ditemukan!\n");
        return 0;
    }
    
    char user[30], pass[30], fuser[30], fpass[30];
    
    printf("\n==============================\n");
    printf("      KELOLA LAUNDRY          \n");
    printf("==============================\n");
    printf("Username: ");
    scanf("%s", user);
    printf("Password: ");
    scanf("%s", pass);
    
    while (fscanf(f, "%s %s", fuser, fpass) != EOF) {
        if (strcmp(user, fuser) == 0 && strcmp(pass, fpass) == 0) {
            fclose(f);
            if (strcmp(user, "admin") == 0) {
                printf("\nLogin sebagai ADMIN\n");
                return 1;
            } else {
                printf("\nLogin sebagai USER\n");
                return 2;
            }
        }
    }
    fclose(f);
    printf("\nLogin gagal!\n");
    return 0;
}

void lihatHarga() {
    printf("\n=== DAFTAR HARGA ===\n");
    printf("Reguler : Rp5000/kg (72 jam)\n");
    printf("Express : Rp10000/kg (24 jam)\n");
}

void simpanData(Queue* q, Stack* s) {
    FILE* f = fopen(FILE_DATA, "w");
    if (!f) return;
    
    Laundry* curr = q->front;
    while (curr) {
        fprintf(f, "Q|%d|%s|%s|%.1f|%d|%s|%s\n", 
                curr->id, curr->nama, curr->jenis,
