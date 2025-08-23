
#include<stdio.h>

int main (){
	int i, matri, idade, anos, menor21=0, funf=0, funm=0, antigo=0, novo=200, matrinov, matrianti;
	float sal, total=0, mediasal=0;
	char genero;
	
	for(i=1;i<=3;i++){
	printf("\nFUNCIONARIO %d", i);
	printf("\nsua matricula(exemplo: 12345678): ");
	scanf("%d",&matri);
	printf("genero(M ou F): ");
	scanf(" %c",&genero);
	printf("idade que entrou na empresa: ");
	scanf("%d",&idade);
	printf("salario: R$");
	scanf("%f",&sal);
	printf("tempo (em anos) de trabalho na empresa: ");
	scanf("%d",&anos);
	
    if(idade<21){
    	menor21++;
    	
	}
	
	if(genero=='F'){
		funf++;
	}
	else{
		funm++;
		total=total+sal;
	}
	
	if(anos>antigo){
		antigo=anos;
		matrianti=matri;
		
	}
	if(anos<novo){
		novo=anos;
		matrinov=matri;
	}
    }
    
    mediasal=total/funm;
    
    printf("\n\nRESULTADOS\nquantidade de funcionarios que ingressaram na empresa com menos de 21 anos: %d\nquantidade de funcionarios do genero feminino: %d\n",menor21, funf);
    printf("media salarial dos homens: R$%.2f\nmatricula do funcionario mais antigo e mais novo: %d e %d", mediasal, matrianti, matrinov);
	return 0;
}
