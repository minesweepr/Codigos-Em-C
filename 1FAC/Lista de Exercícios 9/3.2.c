/*Fazer uma fun��o leituraDados que permane�a
lendo valores reais at� que o n�mero 0 seja
digitado. Ao final, a fun��o deve determinar a
quantidade de elementos fornecidos (excluindo
o 0) e o maior dentre eles.*/
#include<stdio.h>
int leituraDados (int *quant, int *maior){
	int n,i=0;
	do{
		i++;
		printf("n%d = ",i);
		scanf("%d",&n);
		*maior=(*maior>n) ? *maior: n;
		if(n!=0){
			(*quant)++;
		}
	} while(n!=0);
}

int main (){
	int quant=0, maior=0;
	leituraDados (&quant,&maior);
	printf("teste quant %d maior %d", quant,maior);
	
	return 0;
}
