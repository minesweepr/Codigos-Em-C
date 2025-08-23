#include <stdio.h>

float nota(float n1,float n2,float n3, char m){
	float medianova;
	if (m=='p' || m=='P') {
		medianova=(n1*5+n2*3+n3*2)/10;
		return medianova;
	}
	else if (m=='a' || m=='A') {
		medianova=(n1+n2+n3)/3;
		return medianova;
	}
	else {
		printf("Caractere invalido.");
	}
}

int main(){
	float nota1, nota2, nota3, mediadps;
	char media;
	printf("Insira suas tres notas.");
	scanf("%f %f %f", &nota1, &nota2, &nota3);
	printf("Insira a letra A para calcular a media aritmetica, P para calcular a media ponderada.");
	getchar();
	scanf("%c", &media);
	mediadps=nota(nota1, nota2, nota3, media);
	printf("Media do aluno: %.2f", mediadps);
	
	return 0;
}
