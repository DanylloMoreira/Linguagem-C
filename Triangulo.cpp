#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
    int a, b, c;

    printf("digite o primeiro lado:\n");
    scanf("%d", &a);

    printf("digite o segundo lado:\n");
    scanf("%d", &b);

    printf("digite o terceiro lado:\n");
    scanf("%d", &c);

    if(a == (b + c)){
    printf("e um triangulo retangulo: ");
    } 

    else if(a > (b + c)){
    printf("e um triangulo obtusangulo: ");
    }

    else if(a < (b + c)){
    printf("triangulo Acutangulo: ");
    }

return 0;
}
