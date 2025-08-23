/*Fazer uma função leituraDados que permaneça
lendo valores reais até que o número 0 seja
digitado. Ao final, a função deve determinar a
quantidade de elementos fornecidos (excluindo
o 0) e o maior dentre eles.*/
#include<stdio.h>
void leituraDados (int *quant, int *maior){
	int n,i=1;
	do{
		printf("n%d = ",i);
		scanf("%d",&n);
		*maior=(*maior>n) ? *maior: n;
		(*quant)++;
	} while(n!=0);
}

int main (){
	int quant=0, maior=0;
	leituraDados (&quant,&maior);
	printf("teste quant %d maior %d", quant - 1,maior);//ignorar isso. MAS quero saber pq q quant - 1 nao esta funcionando
	
	return 0;
}
