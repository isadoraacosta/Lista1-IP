#include <stdio.h>

int main(){

    double massa_t, aceleracao, tempo, massa_kg;

    double velocidade_atingida,comprimento_pista, trabalho_mecanico; 

    scanf("%lf", &massa_t);

    scanf("%lf", &aceleracao);

    scanf("%lf", &tempo);

    velocidade_atingida = (aceleracao * tempo) * 3.6;

    comprimento_pista = 0.5 * aceleracao * tempo * tempo;

    massa_kg = massa_t * 1000;

    trabalho_mecanico = (0.5 * massa_kg * (velocidade_atingida / 3.6) * (velocidade_atingida / 3.6));

    printf("VELOCIDADE = %.2lf\n", velocidade_atingida);

    printf("ESPACO PERCORRIDO = %.2lf\n", comprimento_pista);

    printf("TRABALHO REALIZADO = %.2lf\n", trabalho_mecanico);

    return 0;
}