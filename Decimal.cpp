#include<stdio.h> //Biblioteca de entrada/sa�da por perif�ricos padr�o
#include<conio.h> //Biblioteca para manipula��o de caracteres
#include<stdlib.h>//Biblioteca padr�o para uso de fu��es do sistema
int main () {//Programa principal
	// Declarac�o de Vari�veis
	int num; //vari�vel que ir� receber o n�mero na base decimal
	//Cabe�alho
	printf("Senac Itaquera\n", 161);
	printf("Disciplina: 113913 - ICC \n");
	printf("Aluno(a):\n\n\n");
	//Escevendo o comando na tela
	printf("Escreva um numero na base decimal: ");
	//recebendo do teclado o n�mero decimal
	scanf("%d",&num);
	
	//Imprimindo o n�mero lido nas bases: octal e hexadecimal
	printf("\nO numero %d na base octal e: %o\n", num,num);
	printf("O numero %d na base hexadecimal e: %x", num, num);
	getch(); //Fun��o que aguarda o recebimento de um caractere via teclado.
}
