#include<stdio.h> //Biblioteca de entrada/saida por perifericos padr�o
#include<conio.h> //Biblioteca para manipula��o de caracteres
#include<stdlib.h>//Biblioteca padr�o para uso de fun��es do sistema
int main () {//Programa principal
	// Declara��o de Variaveis
	int total, susp, mort, conf;
	//Cabe�alho
	printf("Senac Itaquera\n", 161);
	printf("Disciplina: 113913 - ICC \n");
	printf("Aluno(a):\n\n\n");
	// Inicio da logica de programa��o
	printf("Preencha com as seuintes informa��es sobre a Dengue em Brasilia:\n\n");
	printf("\tCasos Suspeitos: ");
	scanf("%d", &susp);
	printf("\tCasos Confirmados: ");
	scanf("%d", &conf);
	printf("\tQuantidade de Mortes: ");
	scanf("%d, &mort");
	// Apresenta��o dos resultados
	printf("\nInforma��es sobre a dengue em Brasilia:\n");
	printf("\tCasos Suspeitos: %d\n", susp);
	printf("\tCasos Confirmados: %d\n", conf);
	printf("\tQuantidade de Mortes: %d\n", mort);
	total=susp+conf+mort;
	printf("\n\tTotal de dados: %d\n\n, total");
	
	getch (); //Fun��o que aguarda o recebimento de um caractere via teclado.
}
