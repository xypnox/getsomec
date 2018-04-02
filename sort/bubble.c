#include <stdio.h>

void swap(int* a, int* b) {
    *b = *a + *b;
    *a = *b - *a;
    *b = *b - *a;
}

void BubbleSort(int A[], int size, int asc) {
    int i, j;
    for (i = 0; i < size; i++) {
        for (j = 0; j < size - i - 1; j++) {
            if (A[j] > A[j+1] && asc == 1) {
                swap(&A[j], &A[j+1]);
            } else if(A[j] < A[j+1]) {
                swap(&A[j+1], &A[j]);
            }
        }
    }
}

void printArray(int A[], int size) {
    int i = 0;
    printf("\n[");
    for (i = 0; i < size; i++) {
        printf(" %d", A[i]);
    }
    printf(" ]\n");
}

int main(){
    int x = 9, y = 7;
    int A[] = {1, 3, 0, 4, 5, 2, 6};
    printf("%d %d\n", x, y);
    swap(&x, &y);
    printf("%d %d\n", x, y);
    printArray(A, 7);
    BubbleSort(A, 7, 0);
    printArray(A, 7);


    return 0;
}
