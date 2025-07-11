#include <stdio.h>
#include <math.h>

int main() {
    double numero;
    
    double a1, a2, a3;
    scanf("%lf", &numero);
    

    a1 = round(numero * 10.0) / 10.0;
    a2 = round(numero * 100.0) / 100.0;
    a3 = round(numero * 1000.0) / 1000.0;
    
    printf("%.6f\n", a1);
    printf("%.6f\n", a2);
    printf("%.6f\n", a3);
    
    return 0;
}