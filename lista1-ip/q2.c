#include <stdio.h>

int main(){

    float temperatura_f;

    float chuva_p;

    float temperatura_c;

    float chuva_mm; 

    scanf("%f", &temperatura_f);

    scanf("%f", &chuva_p);

    temperatura_c = ( 5 * (temperatura_f-32) ) / 9;

    chuva_mm = chuva_p * 25.4;

    printf("O VALOR EM CELSIUS =  %.2f\n", temperatura_c);

    printf("A QUANTIDADE DE CHUVA E = %.2f\n", chuva_mm);

    return 0;
}