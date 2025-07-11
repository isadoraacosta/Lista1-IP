#include <stdio.h>

int main(){


    int valor;

    int cem, cinq, dez, um;

    scanf("%d", &valor);

    cem = valor/ 100;

    cinq = (valor % 100) / 50;

    dez = ((valor % 100) % 50) / 10;

    um = ((valor % 100) % 50) % 10;

    printf("NOTAS DE 100 = %d\n", cem);
    printf("NOTAS DE 50 = %d\n", cinq);
    printf("NOTAS DE 10 = %d\n", dez);
    printf("MOEDAS DE 1 = %d\n", um);








    return 0;

}