#include<stdio.h> //Biblioteca de entrada/saida por perifericos padr�o
#include<conio.h> //Biblioteca para manipula��o de caracteres
#include<stdlib.h>//Biblioteca padr�o para uso de fu��es do sistema
int main () {//Programa principal
	// Declarac�o de Vari�veis
	int auxnum;
	//Cabe�alho
	printf("Senac Itaquera\n", 161);
	printf("Disciplina: 113913 - ICC \n");
	printf("Aluno(a):\n\n\n");
	// Inicio da logica de programa��o
	printf("**** Tabuada ****\n\n");
	printf("Digite um numero: ");
	scanf("%d", &auxnum);
	// Escrevendo Mensagens na Tela
	printf("\n\n\t%d x 1 = %d\n", auxnum,auxnum*1);
	printf("\t%d x 2 = %d\n", auxnum,auxnum*2);
	printf("\t%d x 3 = %d\n", auxnum,auxnum*3);
	printf("\t%d x 4 = %d\n", auxnum,auxnum*4);
	printf("\t%d x 5 = %d\n", auxnum,auxnum*5);
	printf("\t%d x 6 = %d\n", auxnum,auxnum*6);
	getch(); //Fun��o que aguarda o recebimento de um caractere via teclado.
}
