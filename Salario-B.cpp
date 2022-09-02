#include <stdio.h>
#include <math.h>

int main(){
    float salario, reajuste;

    printf("Informe o salario do funcionario:\n");
    scanf("%f", &salario);

    if (salario <= 300.00){
    reajuste = (0.5 * salario) + salario;
    printf("Salario com Reajuste: = %.2f\n", reajuste);
    }

    else if (salario > 300.00){
    reajuste = (0.3 * salario) + salario;
    printf("Salario com reajuste: %.2f\n", reajuste);
    }

    return 0;
}
