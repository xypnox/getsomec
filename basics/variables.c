/*
    A simple program to show the mechanism of variables of c
*/

#include <stdio.h>

int main() {
    int a=3, b=4, c;

    printf("a = %i\n", a);
    printf("b = %i\n", b);
    printf("a + b = %i\n", a + b);

    c = a*b + b;

    int d = c * 3;

    printf("c = %i\n", c);
    printf("d = %i\n", d);

    return 0;
}
