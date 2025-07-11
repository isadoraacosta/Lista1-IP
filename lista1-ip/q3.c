#include <stdio.h>

int main(){

    float raio, altura, pi, aluminio, custo;

    float area_cilindro, area_circulo, area_lateral_c;

    scanf("%f", &raio);

    scanf("%f", &altura);

    pi = 3.14159;

    area_circulo= pi * (raio*raio);

    area_lateral_c= 2 * pi * raio * altura; 

    area_cilindro = 2 * area_circulo + area_lateral_c;

    custo = area_cilindro * 100;

    printf("O VALOR DO CUSTO E = %.2f \n ", custo);
    


    return 0;
}
