/*Quest�o 03:
Desenvolver uma fun��o que, dada uma string
s, crie uma substring que inicie na posi��o p de
s e contenha n caracteres.
Observa��es: se p e/ou n forem inv�lidos, a
substring ser� vazia; ii) se s n�o possuir n
caracteres al�m de p, a substring a ser criada
come�ar� em p e terminar� no final de s.*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void criacao_substring (int inicio, int tamanho, char string[], char substring[]);

int main (){
	char string[100], substring[100];
	int inicio, tamanho;
	printf("crie uma string: ");
	fgets(string, sizeof(string), stdin);
	
	printf("\nescolha o inicio da sua substring: ");
	scanf("%d", &inicio);
	
	printf("\nescolha a quantidade de caracteres: ");
	scanf("%d", &tamanho);
	
	criacao_substring (inicio, tamanho, string, substring);
	printf("\n\nstring: %s\nsubstring: %s", string, substring);
	
	return 0;
}

void criacao_substring (int inicio, int tamanho, char string[], char substring[]){
	int i, j, tamamnho_string;
	inicio--;
	tamamnho_string=strlen(string);
	if(inicio<0 || inicio>tamamnho_string || tamanho + inicio>tamamnho_string || tamanho<0){
		substring[0]='\0';
	}
	else{
		for(i=inicio, j=0; i<inicio+tamanho; i++, j++){
			substring[j]=string[i];
		}
		substring[j]='\0';
	}
}
