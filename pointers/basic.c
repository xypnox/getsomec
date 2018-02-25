#include <stdio.h>

int main() {
    int *a, b=9;

    a = &b;

    b++;

    printf("%d %d\n", *a, b);
    return 0;
}
