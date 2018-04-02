#include <stdio.h>
#include <stdlib.h>


typedef struct node {
    int data ;
    struct node *next ;
} node, *list;



int main() {

    int n, i;

    printf("Enter n: ");
    scanf("%d", &n);

    int **p = (int **) malloc(sizeof(int*)*n);
    int *row = (int *) malloc(sizeof(int)*n);



    for (i = 0; i < n; i++) {
        printf("Enter row %d size : ", i+1);
        scanf("%d", &row[i]);
        p[i] = (int *) malloc(sizeof(int)*row[i]);
    }



    for (i = 0; i < n; i++) {
        printf("Enter for row %d \n", i+1);
        for (size_t j = 0; j < row[i]; j++) {
            scanf("%d", &p[i][j]);
        }
    }


    for (i = 0; i < n; i++) {
        printf("\n row %d \n", i+1);
        for (size_t j = 0; j < row[i]; j++) {
            printf(" %d ", *(*(p+i)+j) );
        }
    }

    return 0;
}
