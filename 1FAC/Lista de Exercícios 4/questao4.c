/*
QUESTÃO 04: Faça um programa que leia 300 números reais. Ao final, devem ser exibidas as 
	seguintes informações:

		a)	A quantidade de valores negativos digitados;
		b)	A média dos valores positivos.


#include<stdio.h>

int main (){
	int i, menor, maior, negativo=0, positivo=0, total=0;
	float mediap;
	
	printf("escolha um menor numero generico entre -300 a 300: ");
	scanf("%d",&menor);
	printf("escolha um maior numero generico entre -300 a 300: ");
	scanf("%d",&maior);
	
	if(menor<-300 || maior>300 || menor>maior){
		printf("dados invalidos.");
		return 0;
	}
	
	for(i=menor;i<=maior;i++){
		printf("%d ", i);
		
	    if (i<0){
     	negativo++;
     	}
        	else if (i>0){ //socorro se eu nao colocar o if (i>0), considera 0 como numero positivo
	      	positivo++;
	      	total += i;
	      	mediap=(float)total/positivo;//esse float ai matou minha familia e mijou no meu cachorro, q odio. enfim, tem q colocar pq calculo com ambos buga um pouco
         	}	
	}
	printf("\nvalores negativos digitados: %d\nmedia dos valores positivos: %.2f", negativo, mediap);	

	return 0;
}ta errado mas é interessante*/



#include<stdio.h>

int main (){
	int i, numero, negativo=0, positivo=0, total=0;
	float mediap=0;
	
	for(i=1;i<=300;i++){
		printf ("Entre com um numero: ");
		scanf ("%d", &numero);
		
		if(numero<0){
			negativo++;
		}
		else{
			positivo++;
			total+=numero;
			
		}
	}
	mediap=total/positivo;
	printf("\nquantidade de negativos: %d\nmedia dos positivos: %.2f", negativo, mediap);
	
	return 0;
}




