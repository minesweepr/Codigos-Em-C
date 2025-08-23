#include<stdio.h>

int main () {
	int dia, mes,r;
	
	printf("Digite seu dia: ");
	scanf("%d",&dia);
	printf("Digite o numero do mes: ");
	scanf("%d",&mes);
	
	if(mes>12 || mes<1 || dia<1){
		printf("data invalida, tente novamente.");
	}
	
	if(mes==1){
		r=dia;
	}
	else if(mes==2){
		r=dia+31;
	}
	else if(mes==3){
		r=dia+31+28;
	}
	else if(mes==4){
		r=dia+31+28+31;
	}
	else if(mes==5){
		r=dia+31+28+31+30;
	}
	else if(mes==6){
		r=dia+31+28+31+30+31;
	}
	else if(mes==7){
		r=dia+31+28+31+30+31+30;
	}
	else if(mes==8){
		r=dia+31+28+31+30+31+30+31;
	}
	else if(mes==9){
		r=dia+31+28+31+30+31+30+31+31;
	}
	else if(mes==10){
		r=dia+31+28+31+30+31+30+31+31+30;
	}
	else if(mes==11){
		r=dia+31+28+31+30+31+30+31+31+30+31;
	}
	else{
		r=dia+31+28+31+30+31+30+31+31+30+31+30;
	}
	
	printf("%d/%d - %d dia do ano",dia,mes,r);
	
	return 0;
}

