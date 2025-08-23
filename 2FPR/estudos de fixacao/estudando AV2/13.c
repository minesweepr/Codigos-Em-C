/*
Quest�o 03 [2,5 pontos]:
Uma pesquisa foi feita e cada entrevistado informou os seguintes dados: 
nome, g�nero e idade. Todas as informa��es coletadas foram armazenadas 
sob a forma de um vetor de structs, cada posi��o armazenando os dados de 
um entrevistado. Pede-se o desenvolvimento de uma fun��o que, dado um g�nero, 
retorne a posi��o do entrevistado que atenda aos seguintes requisitos:
  > a. Deve ser do g�nero especificado como par�metro da fun��o;
  > b. Caso mais de um entrevistado seja do g�nero definido, dever� ser retornada 
    a posi��o do entrevistado mais novo daquele g�nero;
  > c. Por �ltimo, se houver mais de uma pessoa do g�nero escolhido e com a menor 
  idade, dever� ser retornada a posi��o da que possuir o nome que vier primeiro 
  em uma ordem crescente alfab�tica.
*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<limits.h>

#define TAM 5

typedef struct{
	char nome[100], genero;
	int idade;
} Tinfo;

void preencher (Tinfo vet[]);
int posicao (int tamanho, Tinfo vet[tamanho], int genP);

int main (){
	Tinfo vet[TAM];
	char genero_parametro;
	int resp;
	
	preencher(vet);//s� para testes
	
	printf("selecione o genero: ");
	scanf(" %c", &genero_parametro);
	
	resp=posicao(TAM, vet, genero_parametro);
	
	if(resp<0){
		printf("\nnao ha ninguem do genero escolhido");
	} else{
		printf("\nposicao %d", resp);
	}
	
	return 0;
}

int posicao (int tamanho, Tinfo vet[tamanho], int genP){
	int i, posicao=-1;
	for(i=0;i<tamanho;i++){
		if(vet[i].genero==genP){
			if(posicao==-1){
				posicao=i;
			} else if(vet[i].idade<vet[posicao].idade){
				posicao=i;
			} else {
				if(vet[i].idade==vet[posicao].idade && strcmp(vet[i].nome,vet[posicao].nome)<0){
					posicao=i;
				}
			}
		}
	}
	
	return posicao;
}

void preencher (Tinfo vet[]){
	strcpy(vet[0].nome, "CARLOS");
	vet[0].genero='M';
	vet[0].idade=25;
	
	strcpy(vet[1].nome, "ANA");
	vet[1].genero='F';
	vet[1].idade=22;
	
	strcpy(vet[2].nome, "BEATRIZ");
	vet[2].genero='F';
	vet[2].idade=22;
	
	strcpy(vet[2].nome, "DANIELA");
	vet[3].genero='F';
	vet[3].idade=30;
	
	strcpy(vet[0].nome, "JOAO");
	vet[4].genero='M';
	vet[4].idade=21;
}


