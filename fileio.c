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
