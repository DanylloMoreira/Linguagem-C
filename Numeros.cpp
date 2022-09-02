#include<stdio.h> //Biblioteca de entrada/saída por periféricos padrão
#include<conio.h> //Biblioteca para manipulação de caracteres
#include<stdlib.h>//Biblioteca padrão para uso de fuções do sistema
int main () {//Programa principal
	// Declaracão de Variáveis
	int num1, num2;
	//Cabeçalho
	printf("Senac Itaquera\n", 161);
	printf("Disciplina: 113913 - ICC \n");
	printf("Aluno(a):\n\n\n");
	// Inicio da logica de programação
	printf("Voce devera digitar dois numeros diferentes de zero\n\n");
	printf("Digite o primeiro numero: ");
	scanf("%d", &num1);
	printf("Digite o segundo numero: ");
	scanf("%d", &num2);
	printf("\nA soma %d + %d = %d", num1, num2, num1+num2);
	printf("\nA subtração %d - %d = %d", num1, num2, num1-num2);
	printf("\nO produto %d x %d = %d", num1, num2, num1*num2);
	printf("\nA divisao %d : %d = %d %.2f", num1, num2, num1/num2);
	printf("\nA media entre %d e %d = %.2f", num1, num2, (float) (num1+num2)/2);
	getch(); //Função que aguarda o recebimento de um caractere via teclado.
}
