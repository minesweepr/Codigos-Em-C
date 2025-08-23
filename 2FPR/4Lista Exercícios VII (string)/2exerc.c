/*Quest�o 02:
Dada uma string s, desenvolver uma fun��o
que determine se s � ou n�o um pal�ndromo.
Observa��o: uma string s ser� um pal�ndromo
quando seus caracteres formarem a mesma
sequ�ncia, independente se s � percorrida da
esquerda para direita ou vice-versa.*/
#include<stdio.h>
#include<string.h>

int palindromo(char s[]);

int main (){
	char s[50];
	
	printf("insira seu nome: ");
	fgets(s, sizeof(s), stdin);
	
	//s[strcspn(s, "\n")] = '\0'; ao inves de -2, eu posso usar isso. perguntar pro professor
	
	printf("\nseu nome %s", palindromo(s)==1? "e um palindromo!":"nao e um palindromo.");
	
	return 0;
}

int palindromo(char s[]){
	int i, j;
	for(i=0, j=strlen(s)-2; i<j ;i++, j--){
		if(s[i]!=s[j]){
			return 0;
		}
	}
	return 1;
}
