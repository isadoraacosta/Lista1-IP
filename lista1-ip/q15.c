#include <stdio.h>
 
int main(){ 
 
    int a;
 
    scanf("%d", &a);
 
 
    if (a>= 0 && a<=255){
 
        printf("%d", a/128);
        a = a % 128;
        printf("%d", a/64);
        a = a % 64;
        printf("%d", a/32);
        a = a % 32;
        printf("%d", a/16);
        a = a % 16;
        printf("%d", a/8);
        a = a % 8;
        printf("%d", a/4);
        a = a % 4;
        printf("%d", a/2);
        a = a % 2;
        printf("%d", a/1);
        a = a % 1;
    }
    else{
        printf("Numero invalido!");
    }
 
 
    return 0;
}