/*Foi feita uma pesquisa entre os habitantes
de uma regi�o e coletados os dados de
altura e g�nero das pessoas. Fa�a um
programa que leia as informa��es de 50
pessoas e informe:
? a maior e a menor alturas
encontradas;
? a m�dia de altura das mulheres;
? a m�dia de altura da popula��o;
? o percentual de homens na
popula��o*/

#include<stdio.h>

int main (){
	int i, mul=0, hom=0;
	float alt, altmul=0, mediam=0, mediap=0, maioralt=0, menoralt=1000, perc=0, somalt=0;
	char gen;
	
	for(i=1;i<=50;i++){
		printf("\nHABITANTE %d\ninsira sua altura em metros: ", i);
		scanf("%f",&alt);
		printf("insira seu genero(M ou F): ");
		scanf(" %c",&gen);
		
		if(gen!='M' && gen!='m' && gen!='F' && gen!='f'){
			printf("genero invalido.");
			return 0;
		}
		
		if(alt>maioralt){
			maioralt=alt;
		}
		
		if(menoralt>alt){
			menoralt=alt;
		}
		
		if(gen=='F' || gen=='f'){
			mul++;
			altmul+=alt;
		}
		else{
			hom++;
		}
		somalt+=alt;
		mediap=(float)somalt/i;
		perc=((float)hom/i)*100;//nao entendir...
			
	}
	
	mediam=(float)altmul/mul;
	
	
	printf("\nRESULTADOS...\nmaior e menor altura: %.2fm & %.2fm\nmedia de altura das mulheres: %.2f\n", maioralt, menoralt, mediam); //TUDO CERTO
	printf("media de altura da populacao: %.2f\npercentual de homens na populacao: %.1f%%", mediap, perc);
	
	
	
	return 0;
}
