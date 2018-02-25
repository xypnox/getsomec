#include <stdio.h>
#include <string.h>

int main(){
    char str[100];
    int dec = 0;
    printf("Enter The binary : ");
    gets(str);

    for (size_t i = 0; i < strlen(str); i++) {
        if(str[i]=='1'){
            int p = strlen(str)-i-1, k=1;
            while (p-->0) {
                k *= 2;
            }
            dec += k;
        }
    }

    printf("The decimal conversion of %s is %d\n", str, dec);
    return 0;
}
