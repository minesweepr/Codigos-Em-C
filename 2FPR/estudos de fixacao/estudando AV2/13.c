/*
Questão 03 [2,5 pontos]:
Uma pesquisa foi feita e cada entrevistado informou os seguintes dados: 
nome, gênero e idade. Todas as informações coletadas foram armazenadas 
sob a forma de um vetor de structs, cada posição armazenando os dados de 
um entrevistado. Pede-se o desenvolvimento de uma função que, dado um gênero, 
retorne a posição do entrevistado que atenda aos seguintes requisitos:
  > a. Deve ser do gênero especificado como parâmetro da função;
  > b. Caso mais de um entrevistado seja do gênero definido, deverá ser retornada 
    a posição do entrevistado mais novo daquele gênero;
  > c. Por último, se houver mais de uma pessoa do gênero escolhido e com a menor 
  idade, deverá ser retornada a posição da que possuir o nome que vier primeiro 
  em uma ordem crescente alfabética.
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
	
	preencher(vet);//só para testes
	
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


