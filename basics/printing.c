/*
    This program illustrates the various options for using printf
*/

#include <stdio.h>

int main() {
    int a = 12;
    float k = 6.98, NA = 6.022e23;

    printf("a is %d\n", a);

    printf("k is either %.1f or %.2f \n", k, k);
    printf("We all know the Avogadro's Constant %.3e\n", NA);
    printf("Look at spacing!! |%14.3e|\n", NA);

    printf("%s wants to kick %s\n", "Rohit", "Raman");
    return 0;
}
