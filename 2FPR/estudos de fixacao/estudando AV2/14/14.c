/*
Questão 04 [2,5 pontos]:
Implementar uma função que, dado um arquivo 
texto A contendo números inteiros, crie um 
novo arquivo, B, com os mesmos valores que 
estão em A, porém sem repetição de elementos.
Nota: por ser uma questão que avalia a manipulação 
de arquivos, nenhuma outra estrutura (como vetores) 
pode ser utilizada.*/
#include<stdio.h>
#include<stdlib.h>

int main (){
	if(novo("a.txt", "b.txt")<0){
		printf("erro ao abrir os arquivos");
	} else{
		printf("arquivo criado com sucesso");
	}
	
	return 0;
}

int novo (char nomeA[], char nomeB[]){
	FILE *a, *b;
	int num;
	a=fopen(nomeA, "r");
	b=fopen(nomeB, "r");
	if(!a || !b){
		fclose(a); fclose(b);
		return -1;
	}
	fclose(b);
	
	while(fscanf(a, "%d", &num)!=EOF){
		if(!repeticao(nomeB, num)){
			b=fopen(nomeB, "a");
			fprintf(b, "%d\n", num);
			fclose(b);
		}
	}
	fclose(a); fclose(b);
	return 0;
}

int repeticao(char nomearq[], int numA){
	FILE *arq;
	int num;
	arq=fopen(nomearq, "r");
	while(fscanf(arq, "%d", &num)!=EOF){
		if(num==numA){
			fclose(arq);
			return 1;
		}
	}
	fclose(arq);
	return 0;
}
