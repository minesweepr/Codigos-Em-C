/*Quest�o 08:
Desenvolver uma fun��o recursiva que, dada
uma string, exiba-a invertida.*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void inv (char s[], int i);
int main (){
	char s[100];
	printf("insira uma palavra: ");
	fgets(s,sizeof(s),stdin);
	s[strcspn(s, "\n")] = '\0';
	
	inv(s, 0);
	
	return 0;
}

void inv (char s[], int i){
	if(s[i]!='\0'){
		inv(s, i+1);
	    printf("%c", s[i]);
	}
}
