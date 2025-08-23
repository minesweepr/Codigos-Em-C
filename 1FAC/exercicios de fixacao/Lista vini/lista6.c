#include<stdio.h>

void calculo (){
	int kids, i=0, sal350=0;
	float sal, saltotal=0, kidstotal=0;
	char resp;
	do{
		i++;
		printf("\nHABITANTE %d...\nnumero de filhos: ",i);
		scanf("%d",&kids);
		printf("salario: R$");
		scanf("%f",&sal);
		printf("deseja continuar a pesquisa?(s/n) ");
		scanf(" %c",&resp);
		saltotal+=sal;
		kidstotal+=kids;
		if(sal<=350){
			sal350++;
		}
		
	}while(resp=='s');
	
	printf("\n\nRESULTADOS:\nmedia salarial = R$%.2f\nmedia de filhos = %.1f\npercentual de pessoas com salario de ate R$350.00 = %.1f%%", saltotal/i, (float)kidstotal/i, ((float)sal350/i)*100);

}

int main (){
	calculo ();
	return 0;
}
