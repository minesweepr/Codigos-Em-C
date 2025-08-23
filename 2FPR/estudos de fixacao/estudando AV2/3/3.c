/*
Questão 02 [2,5 pontos]:
Implementar uma função que, dados dois arquivos textos 
arquivoA e arquivoB, contendo números inteiros, um por linha, 
sem repetições, determine o número de elementos comuns entre os dois arquivos.
*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main (){
	printf("os arquivos tem %d elementos em comum.", comum("A_exerc3.txt", "B_exerc3.txt"));
	
	return 0;
}

int comum (char nomeA[], char nomeB[]){
	FILE *arqA, *arqB;
	int numA, numB, iguais=0;
	arqA=fopen(nomeA, "r");
	arqB=fopen(nomeB, "r");
	
	if(!arqA || !arqB){
		fclose(arqA);
		fclose(arqB);
		return -1;
	}
	
	/*
	arqa= 2 4 6 8
	arqb = 1 2 3 6 9
	*/
	while(fscanf(arqA, "%d", &numA)!=EOF){
		rewind(arqB);
		while(fscanf(arqB, "%d", &numB)!=EOF){
			if(numA==numB){
				iguais++;
				break;
			}
		}
	}
	fclose(arqA);
	fclose(arqB);
	return iguais;
}
