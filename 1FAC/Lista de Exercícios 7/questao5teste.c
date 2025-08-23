#include<stdio.h>

int main (){
	int i=1, age, alt80total=0, age50=0;
	float alt, peso, altme=0, media, maiorpeso=0;
	char cont;
	
	do{
		printf("\nPESSOA %d\nidade: ", i);
		scanf("%d",&age);
		printf("altura(m): ");
		scanf("%f",&alt);
		printf("peso(kg): ");
		scanf("%f",&peso);
		printf("\ndeseja continuar a pesquisa(s/n)? ");
		scanf(" %c",&cont);
		i++;
		
		if(age>50){
		    age50++;
		}
		if(peso>80){
			altme+=alt;
			alt80total++;
		}
		if(alt>1.65 && age<30){
			maiorpeso=peso;
		}
	}
	while(cont=='s');
	
	printf("\nRESULTADOS...\ntotal de pessoas com idade superior a 50: %d\nmedia de peso das pessoas com mais de 80kg: %.2f\n", age50, media=altme/alt80total);
	printf("maior peso dentre as pessoas com mais de 1.65m e menos que 30 anos: %.2f", maiorpeso);
	
	
	return 0;
}
