/*Desenvolver uma fun��o recursiva que, dada uma string s, determine 
se s representa um n�mero real. Para tal, deve atender �s seguintes regras:

i. s s� pode conter caracteres que representem os algarismos de 0 a 9 
(ou seja, '0', '1', '2',...,'8' ou '9') e o caractere ponto ('.');

ii. O ponto n�o � obrigat�rio. Por�m, caso exista, s� pode aparecer 
uma vez e n�o deve figurar na primeira e nem na �ltima posi��o da string.

Caso s cumpra as regras, o valor 1 dever� ser retornado pela fun��o; caso contr�rio, retornar� 0.*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int validade (char s[], int tamanho, int ponto, int i);

int main (){
	int tamanho, ponto=0, i=0;
	char string[100];
	printf("insira um numero qualquer: ");
	fgets(string, sizeof(string), stdin);
	
	string[strcspn(string, "\n")] = '\0';
	tamanho=strlen(string)-1;
	
	printf("\n%s %s valida.", string, (validade(string, tamanho, ponto, i)==1)?"e":"nao e");
	
	return 0;
}

int validade (char s[], int tamanho, int ponto, int i){
	if(s[i]=='\0'){
		return 1;
	}
	if(s[i]=='.'){
		if(i==0 || i==tamanho || ponto){
			return 0;
		}
		return validade(s, tamanho, 1, i+1);
	}
	if(s[i]<'0' || s[i]>'9'){
		return 0;
	}
	
	return validade(s, tamanho, ponto, i+1);
}
