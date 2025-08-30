#include <stdio.h>
#include <stdlib.h>
#include "Matriz.h"
#include <time.h>

/* 
Usando o TAD Matriz acima e a fun��o preenche_acessos ,que preenche uma matriz recebida com o uso dos equipamentos por dia x hora, com valores aleat�rios
resolva o seguinte problema:
O centro esportivo deseja acompanhar a frequ�ncia de uso dos equipamentos ao longo de uma semana. Para isso, utiliza uma
matriz de inteiros 7x14, onde:
? Cada linha representa um dia da semana (0 a 6 ? domingo a s�bado),
? Cada coluna representa um per�odo de uma hora (das 8h �s 21h, totalizando 14 horas por dia).
? Cada c�lula da matriz armazena quantas vezes os equipamentos foram usados em um determinado dia e hora.
Construa um programa, utilizando a fun��o preencher_uso e o TAD Matriz, que , ap�s exibir a matriz criada, calcule e exiba:
a) A m�dia di�ria de utiliza��es em uma determinada hora (por ex: m�dia de uso �s 9h considerando todos os dias) 
b) A quantidade total de utiliza��o dos equipamentos em um determinado dia (independente da hora)
c) um dia e hor�rio com o maior n�mero de utiliza��es.
 */

int main() {
	Matriz *m=criaMatriz(7, 14);
	printf("matriz:\n");
	preenche_acessos(m);
	imprimeMatriz(m);
	
	int hora;
	printf("\n\na) A media diaria de utilizacoes em uma determinada hora (por ex: media de uso as 9h considerando todos os dias)");
	printf("\ninsira a hora(coluna[8-21]) desejada: ");
	scanf("%d", &hora);
	long long soma;
	if(somaColunaMatriz(m, hora-8, &soma)==1){
		float media=(float)soma/linhasMatriz(m);
		printf("\nmedia: %.2f", media);
	} else{
		printf("\nhouve um erro.");
	}
	
	int dia;
	printf("\n\n\nb) A quantidade total de utilizacao dos equipamentos em um determinado dia (independente da hora)");
	printf("\ninsira o dia(linha[1-7]) desejado: ");
	scanf("%d", &dia);
	if(somaLinhaMatriz(m, dia-1, &soma)==1){
		printf("\nsoma: %lld", soma);
	} else{
		printf("\nhouve um erro.");
	}
	
	int quant=maior_utilizacao(m, &dia, &hora);
	printf("\n\n\nc) um dia e horario com o maior numero de utilizacoes.");
	printf("\no maior numero de utilizadoes e %d e ocorre no dia %d as %dhras", quant, dia+1, hora+8);
	
	return 0;
}
