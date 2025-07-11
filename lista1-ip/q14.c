#include <stdio.h>

int main(){

    int num, d1, d2, d3, controle, novo_num;

    scanf("%i", &num);

    d1 = num / 100; 

    d2 = (num / 10) % 10;  

    d3 = num % 10; 

    controle = (d1  + (3 * d2) + (5 * d3)) % 7;

    novo_num = (num * 10) + controle;

    printf("O NOVO NUMERO E = %i", novo_num);

    return 0;
}