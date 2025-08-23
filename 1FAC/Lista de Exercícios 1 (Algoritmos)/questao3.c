#include<stdio.h>

int main () { 
	char genero;
	float h, pesoi;
	
	printf("Sua altura em metros(exemplo:1.75):");
	scanf("%f",&h);
	printf("Seu genero(F para feminino e M para masculino):");
	scanf(" %c",&genero); // eu nao sei pq isso funcionou, nao quero saber e tenho raiva de quem sabe. essa merda precisa de espaço, vc n precisa entender, só colocar.
	
	if (genero=='F'){
	   pesoi=(62.1*h)-44.7;
	}
	else if (genero=='M') {
	   pesoi=(72.7*h)-58;
	}
	else {
		printf("Genero invalido, tente novamente.");
		return 0;
	}

	
	printf("Seu peso ideial e %f kg",pesoi);
	
	
	return 0;
}
