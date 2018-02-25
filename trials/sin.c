#include <stdio.h>
#include <math.h>

float fact(float x){
    float f=1.0;
    for (; x > 0; x-=1) {
        f *= x;
    }
    return f;
}

int main() {
    float sinval=0.0, angle;
    int i;

    printf("fact(5) = %f\n", fact(5.0));

    printf("Enter the Angle in degree : \n");

    scanf("%f", &angle);
    angle = angle * 3.14159 / 180.0;
    printf("Angle in radian is : %f \n", angle);


    for (i = 1; i < 10; i++) {
        sinval += pow(-1.0, i-1.0) * pow(angle, 2.0*i - 1.0) / fact(2.0*i-1.0);
    }

    printf("The Sin of %f is %f \n", angle, sinval);
    return 0;
}
