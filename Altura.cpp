#include<stdio.h> //Biblioteca de entrada/sa�da por perif�ricos padr�o
#include<conio.h> //Biblioteca para manipula��o de caracteres
#include<stdlib.h>//Biblioteca padr�o para uso de fu��es do sistema
int main () {//Programa principal
	// Declarac�o de Vari�veis
	int base, altura, area, perimetro;
	//Cabe�alho
	printf("Senac Itaquera\n", 161);
	printf("Disciplina: 113913 - ICC \n");
	printf("Aluno(a):\n\n\n");
	// Inicio da logica de programa��o
	printf("Digite a base do retangulo em cm: ");
	scanf("%d", &base);
	printf("Digite a altura do retangulo em cm: ");
	scanf("%d", &altura);
	//C�lculos
	area=base*altura;
	perimetro=(base*2)+(altura*2);
	printf("\nA area do quadrado e: %d", area);
	printf("\nO perimetro do quadrado e: %d", perimetro);
	getch(); //Fun��o que aguarda o recebimento de um caractere via teclado.
}
