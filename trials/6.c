#include <stdio.h>

int main(){
    for (int i = -127; i < 128; i++) {
        printf("%d = char: %c\n", i, (char)i);
    }
    return 0;
}
