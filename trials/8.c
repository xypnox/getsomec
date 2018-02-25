#include <stdio.h>

int main(){
    float a=123.00e-2, b=0.123e1;

    if (123.00e-2 == 0.123e1) {
        printf("TRUE\n");
    } else {
        printf("FALSE\n");
    }

    if (a == b) {
        printf("TRUE\n");
    } else {
        printf("FALSE\n");
    }
    return 0;
}
