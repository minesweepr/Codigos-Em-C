/*
Questão 04 [2,5 pontos]:
Pede-se uma função que, dados dois arquivos textos, contendo números inteiros, 
determine se possuem os mesmos valores, independente do número ocorrências de 
cada número nos arquivos.*/
#include<stdio.h>
#include<stdlib.h>

int mesmosvalores (char nomearqA[], char nomearqB[]);
int main (){
	int resp=mesmosvalores("A.txt", "B.txt");
	if(resp>0){
		printf("os arquivos possuem os mesmos valores");
	} else if(resp<0){
		printf("erro ao abrir o(s) arquivo(s)");
	} else{
		printf("os arquivos nao possuem os mesmos valores");
	}
	return 0;
}

int mesmosvalores (char nomearqA[], char nomearqB[]){
	FILE *a, *b;
	int numA, numB, igual;
	a=fopen(nomearqA, "r");
	b=fopen(nomearqB, "r");
	
	if(!a || !b){
		fclose(a);
		fclose(b);
		return -1;
	}
	
	while(fscanf(a, "%d", &numA)!=EOF){
		rewind(b);
		igual=0;
		while(fscanf(b, "%d", &numB)!=EOF){
			if(numA==numB){
				igual=1;
				break;
			}
		}
		if(!igual){
			return 0;
		}
	}
	
	fclose(a);
	fclose(b);
	return 1;
}
