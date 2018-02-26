#include <stdio.h>

int main(){
    int a=7, *aP;

    aP = &*&a;
    *aP = 17 + *&*aP;

    printf("a: %d aP: %d\n", a, *aP);
    return 0;
}
