#include<stdio.h>
#include<string.h>

void main (){
	char nome[100];
	printf("insira seu nome: ");
	fgets(nome, sizeof(nome), stdin);
	
	printf("\ntamanho do string: %d", strlen(nome));
	
}
