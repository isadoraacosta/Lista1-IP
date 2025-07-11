#include <stdio.h>

int main(){

    float custo_fabrica, percent_dist, percent_impostos, result;

    scanf("%f", &custo_fabrica);
    
    scanf("%f", &percent_dist);

    scanf("%f", &percent_impostos);

    percent_dist = custo_fabrica * (percent_dist / 100.0);

    percent_impostos = custo_fabrica * (percent_impostos / 100.0);

    result = custo_fabrica + percent_dist + percent_impostos;

    printf("O VALOR DO CARRO E = %.2f", result);

    return 0;
}