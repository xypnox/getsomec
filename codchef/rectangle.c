#include <stdio.h>

int isrect(int a, int b, int c, int d){
    if (a == b) {
        if (c == d) {
            return 1;
        } else {
            return 0;
        }
    } else {
        if (a == c && b == d) {
            return 1;
        } else if (a == d && b == c) {
            return 1;
        } else {
            return 0;
        }
    }
}

int main(){
    int n1, n2, n3, n4, a[1000], n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d %d %d %d", &n1, &n2, &n3, &n4);
        a[i] = isrect(n1, n2, n3, n4);
    }
    for (int j = 0; j < n; j++) {
        if (a[j]) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }
    return 0;
}
