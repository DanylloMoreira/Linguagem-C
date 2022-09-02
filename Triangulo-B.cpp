#include<stdio.h>
#include<math.h>

int main(){
    float a, b, c;

    printf("digite o primeiro lado:\n");
    scanf("%d", &a);

    printf("digite o segundo lado:\n");
    scanf("%d", &b);

    printf("digite o terceiro lado:\n");
    scanf("%d", &c);

    if (c > a + b  a > b + c  b > a + c ){
    printf("Nao forma um triangulo\n");
    }

    else if ( a != b && a != c && b != c ){
    printf("Triangulo escaleno\n");
    }

    else if ( a == b && a == c){
    printf("Triangulo equilatero\n");
    }

    else if (a == b  a == c  b == c){
    printf("Triangulo isosceles\n");
    }

return 0;
}
