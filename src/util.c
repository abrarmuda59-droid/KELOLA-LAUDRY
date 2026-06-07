#include "laundry.h"

void bersihkanBuffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

int bacaInt(char *pesan) {
    int nilai;
    if (strlen(pesan) > 0) printf("%s", pesan);
    while (scanf("%d", &nilai) != 1) {
        bersihkanBuffer();
        printf("Input harus angka! ");
        if (strlen(pesan) > 0) printf("%s", pesan);
    }
    bersihkanBuffer();
    return nilai;
}

float bacaFloat(char *pesan) {
    float nilai;
    printf("%s", pesan);
    while (scanf("%f", &nilai) != 1) {
        bersihkanBuffer();
        printf("Input harus angka! %s", pesan);
    }
    bersihkanBuffer();
    return nilai;
}

void bacaString(char *pesan, char *target, int maxLen) {
    printf("%s", pesan);
    fgets(target, maxLen, stdin);
    target[strcspn(target, "\n")] = 0;
}

int isKabisat(int year) {
    if (year % 400 == 0) return 1;
    if (year % 100 == 0) return 0;
    if (year % 4 == 0) return 1;
    return 0;
}

int getMaxDay(int month, int year) {
    if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) {
        return 31;
    }
    else if (month == 4 || month == 6 || month == 9 || month == 11) {
        return 30;
    }
    else {
        if (isKabisat(year)) return 29;
        else return 28;
    }
}

void hitungTanggalSelesai(char *tglMasuk, char *tglSelesai, int tambahHari) {
    int day, month, year;
    sscanf(tglMasuk, "%d/%d/%d", &day, &month, &year);
    
    day += tambahHari;
    
    while (day > getMaxDay(month, year)) {
        day -= getMaxDay(month, year);
        month++;
        if (month > 12) {
            month = 1;
            year++;
        }
    }
    
    sprintf(tglSelesai, "%02d/%02d/%04d", day, month, year);
}
