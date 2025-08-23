#include<stdio.h>
#include<math.h>

int main () {
	int NP;
	float PT, GP, PP;
	
	printf("Qual seu Peso na Terra em kg?");
	scanf("%f",&PT);
	printf("Selecione o numero do seu planeta.");
	scanf("%d",&NP);
	
	if (PT <= 0 || 0 >= NP || NP > 6 ) {
		printf("Numero invalido, tente novamente");
		return 0;
	}
	
	
	
	if (NP == 1){
		PP=(PT/10)*0.37;
		printf("Seu peso na Terra e %f, seu peso em Mercurio e %f", PT, PP);
	}
    else if (NP == 2){
		PP=(PT/10)*0.88;
		printf("Seu peso na Terra e %f, seu peso em Venus e %f", PT, PP);
	}
	else if (NP == 3){
		PP=(PT/10)*0.38;
		printf("Seu peso na Terra e %f, seu peso em Marte e %f", PT, PP);
	}
	else if (NP == 4){
		PP=(PT/10)*2.64;
		printf("Seu peso na Terra e %f, seu peso em Jupiter e %f", PT, PP);
	}
	else if (NP == 5){
		PP=(PT/10)*1.15;
		printf("Seu peso na Terra e %f, seu peso em Saturno e %f", PT, PP);
    }
		
	else {
		PP=(PT/10)*1.17;
		printf("Seu peso na Terra e %f, seu peso em Urano e %f", PT, PP);
	}
	
	return 0;
}
