#include <stdio.h>
#include <math.h>

int main(){

    float l1, l2, l3;

    float area_triangulo, t;

    scanf("%f", &l1);

    scanf("%f", &l2);
    
    scanf("%f", &l3);

    t = (l1 + l2 + l3) / 2.0;

    area_triangulo = sqrt(t * ((t-l1) * (t-l2) * (t-l3)) );

    printf("A AREA DO TRIANGULO E = %.2f", area_triangulo);

    return 0;
}