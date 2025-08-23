/*
Questão 02 [2,5 pontos]:
Considerando a existência de um arquivo A contendo números inteiros positivos, 
um por linha, pede-se a implementação de uma função que crie um segundo arquivo, 
B, com as seguintes características:
 > Para cada valor de A, escrever em B uma linha com todos os seus divisores;
 > Para cada elemento do primeiro arquivo, apenas uma linha de divisores deve 
 ser inserida em B.*/
#include<stdio.h>
#include<stdlib.h>
#include<limits.h>

int divisores (char nomearqA[], char nomearqB[], char nomearqTemp[]);
int repeticao (char nomearq[], int num);

int main (){
	printf("a geracao %sfoi bem sucedida", divisores("A.txt", "B.txt", "temp.txt")==1?"":"nao ");
	
	return 0;
}

int divisores (char nomearqA[], char nomearqB[], char nomearqTemp[]){
	FILE *arqa, *arqb, *arqt;
	int num, i;
	arqa=fopen(nomearqA, "r"); arqb=fopen(nomearqB, "w"); arqt=fopen(nomearqTemp, "w");
	if(!arqa || !arqb || !arqt){
		fclose(arqa);fclose(arqb);fclose(arqt);
		return -1;
	}
	fclose(arqt);
	
	while(fscanf(arqa, "%d", &num)!=EOF){
		if(!repeticao(nomearqTemp, num)){
			arqt=fopen(nomearqTemp, "a");
			fprintf(arqt, "%d\n", num);
			fclose(arqt);
		}
	}
	
	arqt=fopen(nomearqTemp, "r");
	while(fscanf(arqt, "%d", &num)!=EOF){
		for(i=1;i<=num;i++){
			if(num%i==0)
			fprintf(arqb, "%d ", i);
		}
		fprintf(arqb, "\n");
	}
	fclose(arqa);fclose(arqb);fclose(arqt);
	return 1;
}

int repeticao (char nomearq[], int num){
	FILE *arq;
	int numArq;
	arq=fopen(nomearq, "r");
	while(fscanf(arq, "%d", &numArq)!=EOF){
		if(num==numArq){
			return 1;
		}
	}
	fclose(arq);
	return 0;
}
