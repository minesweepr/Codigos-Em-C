/*Quest�o 03:
Considere a exist�ncia de um vetor de structs
com quant posi��es, onde cada uma destas
armazena os seguintes dados sobre os
funcion�rios de uma empresa: matricula (int),
nome (string), g�nero (char) e sal�rio (float).

Pede-se uma fun��o que, dado um g�nero,
desloque todos os funcion�rios deste g�nero
para o in�cio do vetor (e, consequentemente, os
funcion�rios do outro g�nero ficar�o ao final do
conjunto).*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define TAM 5

typedef struct{
	int matricula;
	char nome[100], sexo;
	float salario;
}DADOSfun;

void ordenar (int tamanho, DADOSfun funcionario[tamanho], char agab);
void exibir_vetor (int tamanho, DADOSfun vetor[tamanho]);

int main (){
	DADOSfun funcionario[TAM];
	int i;
	char sexo_ordenado;
	
	for(i=0;i<TAM;i++){
		printf("\n\ndigite o nome do funcionario %d: ",  i+1);
		fgets(funcionario[i].nome, sizeof(funcionario[i].nome), stdin);
		funcionario[i].nome[strcspn(funcionario[i].nome, "\n")]='\0';
		printf("\ndigite seu sexo(M/F): ");
		scanf(" %c", &funcionario[i].sexo);
		printf("\ndigite sua matricula: ");
		scanf("%d", &funcionario[i].matricula);
		printf("\ndigite seu salario: R$");
		scanf("%f", &funcionario[i].salario);
		getchar();
	}
	
	printf("\n\ndigite um sexo(M/F): ");
	scanf(" %c", &sexo_ordenado);
	
	printf("\nvetor reordenado de acordo com o sexo:\n");
	ordenar(TAM, funcionario, sexo_ordenado);
	exibir_vetor(TAM, funcionario);
	
	return 0;
}

/*
M
M F M M F
M F M M F
M M M F F
*/

void ordenar (int tamanho, DADOSfun funcionario[tamanho], char agab){
	DADOSfun temp;
	int i, j=tamanho-1;
	for(i=0;i<j;i++){
		if(funcionario[i].sexo!=agab){
			temp=funcionario[i];
            funcionario[i]=funcionario[j];
            funcionario[j]=temp;
            i--;
            j--;
		}
	}
}

void exibir_vetor (int tamanho, DADOSfun vetor[tamanho]){
	int i;
	for(i=0;i<tamanho;i++){
			printf("%c ", vetor[i].sexo);
    }
}





