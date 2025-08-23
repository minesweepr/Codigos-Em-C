#include<stdio.h>
//a unica diferença é q esse tem os bagui no else
int main () {
	
	float saldo, credito;
	
	printf("Saldo medio: ");
	scanf("%f", &saldo);
	


    if (saldo >= 2500) {
		credito=saldo*0.4;
	}
	else{
		if (saldo >= 1500){
			credito=saldo*0.3;
		}
		else{
			if (saldo >= 1000){
				credito=saldo*0.2;
			}
			else{
				printf("nenhum credito.");
		return 0;
			}
		}
	}
	
	printf("voce tem %.2f creditos!",credito);
	
	return 0;
}
