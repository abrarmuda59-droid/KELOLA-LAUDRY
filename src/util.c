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
