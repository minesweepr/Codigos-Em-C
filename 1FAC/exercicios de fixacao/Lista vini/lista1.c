#include<stdio.h>
void calculo (int age){
		
	if(age>=18){
		printf("adulto");
	}
	else{
		if(age>=14){
			printf("juvenil b");
		}
		else{
			if(age>=11){
				printf("juvenil a");
			}
			else{
				if(age>=8){
					printf("infantil b");
				}
				else{
					printf("infantil b");
				}
			}
		}
	}
	
}

int main (){
	int age;
	printf("insira sua idade: ");
	scanf("%d",&age);
	
	printf("categoria: ");
	calculo(age);
	
	
	return 0;
}
