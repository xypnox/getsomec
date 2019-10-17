#include <stdio.h>

int main() {
    float sinval=0.0, term, angle;
    int i;

    printf("fact(5) = %f\n", fact(5.0));

    printf("Enter the Angle in degree : \n");

    scanf("%f", &angle);
    angle = angle * 3.14159 / 180.0;
    printf("Angle in radian is : %f \n", angle);
    
    term = angle;
    sinval += term;

    for (i = 1; i < 10; i++) {
        term = term * (-1) * angle * angle / ((2 * i) * (2 * i + 1));
        sinval += term;
    }

    printf("The Sin of %f is %f \n", angle, sinval);
    return 0;
}
