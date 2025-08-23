/*Fazer uma função leituraDados que permaneça
lendo valores reais até que o número 0 seja
digitado. Ao final, a função deve determinar a
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
