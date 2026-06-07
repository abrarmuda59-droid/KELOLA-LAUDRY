#include "laundry.h"

void shellSort(Queue* q) {
    if (q->count < 2) {
        printf("\nMinimal 2 antrian untuk sorting\n");
        return;
    }
    
    Laundry* arr[100];
    int n = 0;
    Laundry* curr = q->front;
    while (curr) {
        arr[n++] = curr;
        curr = curr->next;
    }
    
    for (int gap = n / 2; gap > 0; gap /= 2) {
        for (int i = gap; i < n; i++) {
            Laundry* temp = arr[i];
            int pTemp = (strcmp(temp->jenis, "express") == 0) ? 1 : 2;
            int j;
            for (j = i; j >= gap; j -= gap) {
                int pJ = (strcmp(arr[j - gap]->jenis, "express") == 0) ? 1 : 2;
                if (pJ > pTemp) {
                    arr[j] = arr[j - gap];
                } else {
                    break;
                }
            }
            arr[j] = temp;
        }
    }
    
    q->front = arr[0];
    for (int i = 0; i < n - 1; i++) {
        arr[i]->next = arr[i+1];
    }
    arr[n-1]->next = NULL;
    q->rear = arr[n-1];
    
    printf("\n[Shell Sort] Antrian: EXPRESS dulu, baru REGULER\n");
}
