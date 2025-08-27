#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct assalariados {
	char nome[81];
	char sexo;
	int idade;
	float salario;
	char estado[3];
};
typedef struct assalariados Assalariados;

Assalariados cadastra(char *nome, char sexo, int idade, float salario, char *estado);
int contabilizaEstado(char *sigla, Assalariados vAssalariados[], int numAssalariados);
void relatorio(Assalariados vAssalariados[], int numAssalariados, char *estados[], int numEstados);
void imprime(Assalariados vAssalariados[], int numAssalariados);


int main(void){
	char *estados[27]={"AC", "AL", "AM", "AP", "BA", "CE", "DF", "ES", "GO", "MA", "MG", "MS", "MT", "PA", "PB", "PE", "PI", "PR", "RJ", "RN", "RO", "RR", "RS", "SC", "SE", "SP", "TO"};
	Assalariados *pessoas;
	int numAssalariados=9;
	pessoas = (Assalariados*) malloc (numAssalariados * sizeof(Assalariados));
	pessoas[0] = cadastra("Fulano0 de tal", 'M',45,1500.00, "RJ");
	pessoas[1] = cadastra("Ciclano0", 'M',50,2500.00, "RS");
	pessoas[2] = cadastra("Beltrano0", 'M',42,500.00, "RS");
	pessoas[3] = cadastra("Fulano1 de tal", 'F',45,1500.00, "RJ");
	pessoas[4] = cadastra("Ciclano1", 'M',30,2500.00, "RS");
	pessoas[5] = cadastra("Beltrano1", 'M',42,500.00, "RS");
	pessoas[6] = cadastra("Fulano2 de tal", 'M',45,1500.00, "AC");
	pessoas[7] = cadastra("Ciclano2", 'F',30,2500.00, "RS");
	pessoas[8] = cadastra("Beltrano2", 'M',42,500.00, "RS");
	
	imprime(pessoas, numAssalariados);
	relatorio(pessoas,numAssalariados, estados, 27);
	
	free(pessoas);
	return 0;
}

void relatorio(Assalariados vAssalariados[], int numAssalariados, char *estados[], int numEstados){
	int cont, i;
	printf("\n\nRELATORIO POR ESTADO:");
	for(i=0;i<numEstados;i++){
		cont=contabilizaEstado(estados[i], vAssalariados, numAssalariados);
		if(cont!=0){
			printf("\nEstado %s com %d homens maiores de 40 anos e salario maior que R$1000,00", estados[i],cont);
		}
	}
}

int contabilizaEstado(char *sigla, Assalariados vAssalariados[], int numAssalariados){
	int quant=0, i;
	for(i=0;i<numAssalariados;i++){
		if(strcmp(vAssalariados[i].estado, sigla)==0 && vAssalariados[i].sexo=='M' && vAssalariados[i].idade>40 && vAssalariados[i].salario>1000.00){
			quant++;
		}
	}
	return quant;
}

void imprime(Assalariados vAssalariados[], int numAssalariados){
	int i;
	for(i=0;i<numAssalariados;i++){
		printf("ASSALARIADO %d:", i+1);
		printf("\n  > nome: %s", vAssalariados[i].nome);
		printf("\n  > sexo: %c", vAssalariados[i].sexo);
		printf("\n  > idade: %d", vAssalariados[i].idade);
		printf("\n  > salario: %.2f", vAssalariados[i].salario);
		printf("\n  > estado: %s\n\n", vAssalariados[i].estado);
	}
}

Assalariados cadastra(char *nome, char sexo, int idade, float salario, char *estado){
	Assalariados novo;
	strcpy(novo.nome, nome);
	novo.sexo=sexo;
	novo.idade=idade;
	novo.salario=salario;
	strcpy(novo.estado, estado);
	return novo;
}

