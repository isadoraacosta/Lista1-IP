#include <stdio.h>

int main(){
    float a, b, c, d, e, f;
    float det, dx, dy, x, y;

    scanf("%f", &a);
    scanf("%f", &b);
    scanf("%f", &c);
    scanf("%f", &d);
    scanf("%f", &e);
    scanf("%f", &f);

    det = a * e - b * d;

    dx = c * e - f * b;

    dy = a * f - d * c;

    x = dx / det;

    y = dy / det;

    printf("O VALOR DE X E = %.2f\n", x);

    printf("O VALOR DE Y E = %.2f\n", y);

    return 0;

}