#include <stdio.h>
#include <math.h>
#define ABS(X) (((X) < 0.0) ? -(X) : (X))

// Best Program EVER

double mySin(double x, double precError){
    double xRadian, term, sineVal, compError ;
    int termNo ;
    xRadian = M_PI*x/180.0 ; term = xRadian ;
    sineVal = term ; termNo = 1;

    do {
        double factor ;
        factor = 2.0 * termNo++;
        factor = factor * (factor + 1.0) ;
        factor = - xRadian * xRadian / factor ;
        sineVal = sineVal + (term = factor * term) ;
        compError = 100.0*ABS(term/sineVal) ;
    } while (compError >= precError) ;

    return sineVal ;
} // sin1.c

int main(){
    double x, prec=0.00001;
    printf("Enter The sin :");
    scanf("%lf", &x);
    printf("%lf\n", mySin(x, prec));
    return 0;
}
