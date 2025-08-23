#include<stdio.h>
#include<math.h>

int main () {
	int NP;
	float PT, GP, PP;
	char *nomeP;
	
	printf("Qual seu Peso na Terra em kg? ");
	scanf("%f",&PT);
	printf("Selecione o numero do seu planeta: ");
	scanf("%d",&NP);
	
	if (PT <= 0 || 0 >= NP || NP > 6 ) {
		printf("Numero invalido, tente novamente");
		return 0;
	}
	
	if (NP == 1){
		PP=(PT/10)*0.37;
		nomeP= "Mercurio";
	}
	else {
		if (NP == 2){
		PP=(PT/10)*0.88;
		nomeP= "Venus";
	     }
	     else {
	     	if (NP == 3){
	    	PP=(PT/10)*0.38;
	    	nomeP= "Marte";
	     }
	     else {
	     	if (NP == 4){
	     	PP=(PT/10)*2.64;
	     	nomeP= "Jupter";
	     }
	     else{
	        if (NP == 5){
	     	PP=(PT/10)*1.15;
	     	nomeP= "Saturno";
		}
		else{
			PP=(PT/10)*1.17;
			nomeP= "Urano";
	        	}
	    	 }
    	 }
	 }
	
	}
	
	printf("Seu peso na Terra e %.2f, seu peso em %s e %.2f", PT, nomeP, PP);
	
	return 0;
}
