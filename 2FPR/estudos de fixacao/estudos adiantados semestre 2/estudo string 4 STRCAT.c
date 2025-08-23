#include<stdio.h>
#include<string.h>
#define SIZE 100
void main (){
	char msg[SIZE], nm[SIZE];
	printf("insira a msg: ");
	fgets(msg, sizeof(msg), stdin);
	
	printf("insira seu nome: ");
	fgets(nm, sizeof(nm), stdin);
	
	strcat(msg, nm);
	printf("%s", msg);
}
