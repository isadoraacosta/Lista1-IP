#include <stdio.h>
 
int main(){
 
    int num , d1, d2, d3;
 
    scanf("%d", &num);
 
    d1 = num / 100;
 
    d2 = (num % 100) / 10;
 
    d3 = num % 10;
 
    printf("%d%d%d\n" ,d3,d2,d1);
 
    return 0;
    
}