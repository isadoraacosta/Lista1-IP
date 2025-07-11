#include <stdio.h>

int main(){
    
    int horas, min, seg, result;

    scanf("%i", &horas);

    scanf("%i", &min);

    scanf("%i", &seg);

    horas = horas * 3600;

    min = min * 60;

    result = horas + min + seg;

    printf("O TEMPO EM SEGUNDOS E = %i ", result);

    return 0;

}