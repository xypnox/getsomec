#include <stdio.h>

double reiman(double N, double c) {
    double sum=0, Tn, k;
    while (N>0) {
        Tn=1;k=c;
        while (k-->0) {
            Tn *= N;
        }
        // printf("%f\n", Tn);
        sum += 1/Tn;
        N--;
    }
    return sum;
}

int main(){
    for (size_t i = 1; i < 10; i++) {
        printf("Reiman 10, %d = %f\n", i, reiman(100.0, i));
    }
    return 0;
}
