#include<stdio.h>
int main (){
	int dia1, mes1, ano1, dia2, mes2, ano2;
	
	printf("insira a primeira data: ");
	scanf("%d/%d/%d",&dia1, &mes1, &ano1);
	printf("insira a segunda data: ");
	scanf("%d/%d/%d",&dia2, &mes2, &ano2);
	
	if ( dia1<0 || dia2<0 || dia1>31 || dia2>31 || mes2<0 || mes1<0 || mes1>12 || mes2>12){
	printf("data invalida, tente novamente.");
	}
	
	if(ano1>ano2 || ano1==ano2 && mes1>mes2 || ano1==ano2 && mes1==mes2 && dia1>dia2){
		printf("a primeira data %02d/%02d/%02d e a mais recente", dia1, mes1, ano1);
	}

	else{
		printf("a segunda data %02d/%02d/%02d e mais recente", dia2, mes2, ano2);
	}


    return 0;
}
