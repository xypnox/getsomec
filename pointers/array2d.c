#include <stdio.h>

int main(){
    int a[][2] = {
        {1, 2},
        {2, 3}
    };

    int (*p)[2] = a;

    for (size_t i = 0; i < 2; i++) {
        for (size_t j = 0; j < 2; j++) {
            printf("%d\t", *(*(p+i)+j));
        }
        printf("\n");
    }
    return 0;
}
