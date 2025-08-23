/*Questão 07:
Desenvolver uma função recursiva que
determine o número de caracteres comuns
entre duas strings s1 e s2.*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int comum (char s1[], char s2[], int i, int j);
void sem_repeticao(char s[], char s1[]);

int main (){
	char str1[100], str2[100], auxiliar_s1[100], auxiliar_s2[100];
	printf("insira duas palavras...\npalavra 1: ");
	fgets(str1, sizeof(str1), stdin);
	str1[strcspn(str1, "\n")] = '\0';
	
	printf("\npalavra 2: ");
	fgets(str2, sizeof(str2), stdin);
	str2[strcspn(str2, "\n")] = '\0';
	
	sem_repeticao(str1, auxiliar_s1);
	sem_repeticao(str2, auxiliar_s2);
	printf("s1 %s, s2 %s, auxiliar_s1 %s, auxiliar_s2 %s", str1, str2, auxiliar_s1, auxiliar_s2);
	
	printf("as palavras tem %d caracteres em comum.", comum(auxiliar_s1, auxiliar_s2, 0, 0));
	
	return 0;
}
/*
s1- chococlate
s1- chococlate
s2- menta
e-t-a 3
banana
abacate
*/

//função extra que eu adicionei para garantir que nao tenhacaracteres repetidos(exemplo: banana -> ban)
void sem_repeticao(char s[], char s1[]){
	int i, j, k;
	
	strcpy(s1,s);
	for(i=0;s1[i]!='\0';i++){
		for(j=i+1;s1[j]!='\0';j++){
			if(s1[i]==s1[j]){
				for(k=j;s[k]!='\0';k++){
					s1[k]=s1[k+1];
				}
				j--;
			}
		}
	}
}

int comum (char s1[], char s2[], int i, int j){
	if(s1[j]=='\0'){
		return 0;
	}
	if(s2[i]=='\0'){
		return comum(s1, s2, 0, j+1);
	}
	if(s2[i]==s1[j]){
		return 1+comum(s1, s2, 0, j+1);
	} else{
		return comum(s1, s2, i+1, j);
	}
}








