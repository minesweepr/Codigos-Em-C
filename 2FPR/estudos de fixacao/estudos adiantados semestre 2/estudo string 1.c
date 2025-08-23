#include<stdio.h>
#include<string.h>

void main (){
	char nome[100];
	
	printf("insira seu nome: ");
	fgets(nome, sizeof(nome), stdin); //diferente do scanf, inclui espacos. BASE fgets(nome, tamanho, stdin). o tamanho pode ser com numero ou sizeof(nome_do_string)
	//fgets tambem da uma linha a mais dps, diferente do gets
	printf("\no nome escaneado foi %s", nome);
	//fputs(nome, stdout); esse simplesmente mostra exatamente oqq vc digitou
}
