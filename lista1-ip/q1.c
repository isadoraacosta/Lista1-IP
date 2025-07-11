#include <stdio.h>

int main(){

    double salario; 
    float kw;
    float valorkw;
    float consumo; 
    float comdesconto;

    scanf("%lf", &salario);

    scanf("%f", &kw);

    valorkw = (salario * 0.7) / 100;

    consumo = valorkw * kw;

    comdesconto = consumo - (consumo  *0.1);


    printf("Custo por kW: R$ %.2f\n", valorkw);
    
    printf("Custo do consumo: R$ %.2f\n", consumo);

    printf("Custo com desconto: R$ %.2f\n", comdesconto);


    return 0;
}