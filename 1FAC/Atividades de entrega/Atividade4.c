#include<stdio.h>

#define QUANT 7

int main (){
	int code, i, age, professores=0, mesdou=0, espec=0, idad=0, incompleto=0;
	float percent, media;
	char esc;
	
	for(i=1;i<=QUANT;i++){
		printf("\nPESSOA %d...\nselecione se voce e professor(codigo 1) ou funcionario(codigo 2): codigo ", i);
		scanf("%d",&code);
		printf("idade: ");
		scanf("%d",&age);
		printf("escolaridade([I]fundamental incompleto, [F]fundamental completo, [E]ensino medio, [G]graduacao, [P]especializacao, [M]mestrado, [D]doutorado): ");
		scanf(" %c",&esc);
		
		if(code==1){
			professores++;
			if(esc=='M' || esc=='D'){
				mesdou++;
			}
		}
		
		if(esc=='P'){
			espec++;
	     	}
	     	
	    if(esc=='I' || esc=='F'){
	    	incompleto++;
			idad+=age;
	    }
		
	}
	media=idad/incompleto;
	percent=((float)mesdou/professores)*100;
	
	printf("\nRESULTADO DA PESQUISA...\npercentual de professores mestres ou doutores: %.2f%%", percent);
	printf("\nquantidade de especialistas: %d\nidade media dos que nao possuem fundamental completo: %.2f", espec, media);
	   
	
	return 0;
}
