#include <stdio.h>
#include <math.h>

int main() {
    double base = 5.0;
    double exponent = 3.0;
    double result;

    
    result = pow(base, exponent);

    
    printf("%.2f raised to the power of %.2f is %.2f\n", base, exponent, result);

    return 0;
}
