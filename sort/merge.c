#include <stdio.h>
#define MAXNO 100

void mergeSort(int [], int, int);

int main() {
    int n=0, i, data[MAXNO] ;
    printf("Enter N: ");
    scanf("%d", &n);
    printf("Enter the data : ");

    for (i = 0; i < n; i++) {
        scanf("%d", &data[i]);
    }

    printf("\nInput data: ") ;

    for(i=0; i<n; ++i)
        printf("%d ", data[i]) ;
    putchar('\n') ;

    mergeSort(data, 0, n-1) ;

    printf("Data in ascending order: ") ;
    for(i=0; i<n; ++i)
        printf("%d ", data[i]);
    putchar('\n');

    return 0;
}

void merge(int data[], int l, int m, int r) {
    int temp[MAXNO], i, j, k ;

    for(i = l; i <= m; ++i)
        temp[i] = data[i] ;

    for(i = r, j = m+1; i > m; --i, ++j)
        temp[i] = data[j] ;

    for(i = l, k = l, j = r; i <= j; ++k)
        if(temp[i] <= temp[j])
            data[k] = temp[i++] ;
        else
            data[k] = temp[j--] ;
}

void mergeSort(int x[],int l,int r) {
    if(l != r) {
        int mid = (l + r)/2 ;
        mergeSort(x, l, mid) ;
        mergeSort(x, mid+1, r) ;
        merge(x, l, mid, r) ;
    }
}
