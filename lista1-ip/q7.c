#include <stdio.h>
#include <math.h>

int main(){

    float altura, aresta_h;

    float area_hexagono, volume_p;

    scanf("%f", &altura);

    scanf("%f", &aresta_h);

    area_hexagono = (3 * (aresta_h * aresta_h) * sqrt(3) ) /2;

    volume_p = (1.0/3.0) * area_hexagono * altura;  

    printf("O VOLUME DA PIRAMIDE E = %.2f METROS CUBICOS\n ", volume_p);

    return 0;

} 
  