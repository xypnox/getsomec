#include <stdio.h>

int main(){
    int array[5] = {1, 2, 3, 6, 7};

    int* ptr;
    ptr = array;

    for (size_t i = 0; i < 5; i++) {
        printf("array [ %d ] = %d \n", i, array[i]);
    }

    for (size_t i = 0; i < 5; i++) {
        printf(" *(ptr + %d) = %d \n", i, *(ptr + i));
    }

    *(array+1) = 5;

    printf("After operation\n");

    for (size_t i = 0; i < 5; i++) {
        printf("array [ %d ] = %d \n", i, array[i]);
    }
    return 0;
}
