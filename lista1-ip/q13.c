#include <stdio.h>
#include <math.h>

int main(){

    float ax, ay, bx, by;

    float distancia;

    scanf("%f", &ax);

    scanf("%f", &ay);

    scanf("%f", &bx);

    scanf("%f", &by);

    distancia = sqrt( pow(bx - ax, 2) + pow( by - ay, 2) );

    printf("A DISTANCIA ENTRE A e B = %.2f\n", distancia);

    return 0;



}