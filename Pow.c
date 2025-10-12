//To calculate power of a no. using pow builtin 
#include <stdio.h>
#include <math.h>
int main() {
    int base, exponent;
    double result;
    scanf("%d %d", &base, &exponent);
    result = pow(base, exponent);
    printf("%.0f\n", result);
    return 0;
}
