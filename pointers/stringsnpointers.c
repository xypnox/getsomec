#include <stdio.h>

int main(){
    char str[] = "Hello dog";
    printf("%s\n", str);

    char* ptr = str;
    printf("%s %s\n", str, ptr); // not *ptr??

    str[0] = 'A';
    printf("%s %s\n", str, ptr);

    *(ptr+1) = 'B';
    printf("%s %s\n", str, ptr);

    // Now see this doesn't work
    char str2[] = "Kill John";
    char* ptr2 = str2;
    printf("%s %s\n", str2, ptr2);
    str2[0]= 'A';

    printf("%s %s\n", str2, ptr2);
    return 0;
}
