#include <stdio.h>

int main(){
    char a[100];
    printf("Enter a string: ");
    scanf("%[^\n]", a);
    printf("a = %s\n", a);
    return 0;
}
