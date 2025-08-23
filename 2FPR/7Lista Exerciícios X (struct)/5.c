/*Quest�o 05:
O hist�rico de um aluno � representado por um
vetor de structs onde cada posi��o armazena o
c�digo da disciplina cursada, semestre e ano
que a cumpriu e a m�dia final na disciplina.
Implementar uma fun��o que exiba o hist�rico
do aluno com o seguinte formato:
NomeDisciplina1 (c�digo1) M�diaDisciplina1
NomeDisciplina2 (c�digo2) M�diaDisciplina2

.
.
.

NomeDisciplinaN (c�digoN) M�diaDisciplinaN

Coeficiente de rendimento: CR
Observa��es:
1. Para obter os dados da disciplina, um outro
vetor de structs deve ser consultado. Este,
por sua vez, armazena para cada disciplina
do curso as seguintes informa��es: c�digo,
nome e n�mero de cr�ditos;
2. O coeficiente de rendimento consiste em
uma m�dia ponderada de todos os graus
atribu�dos �s disciplinas cursadas, onde os
pesos s�o representados pelo n�mero de
cr�ditos da disciplina;
3. Todos os dados em negrito apresentados no
formato do hist�rico devem ser obtidos a
partir dos vetores.*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define TAM 5

typedef struct{
	int semestre, ano;
} Speriodo;

typedef struct{
	char nome[20], codigo[3], 
	int creditos;
	Speriodo periodo;
} Sdisciplina;

typedef struct{
	char codigoDis[3];
} Scursado;



