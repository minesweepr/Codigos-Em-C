//ok entendikkkkkkkk
#include<stdio.h>

int main (){
	int i, pgostF=0, pgostM=0, pngost=0, totalg;
	char genero, pref;
	
	for(i=1;i<=3;i++){
	printf("\nCLIENTE %d", i);
	printf("\ninsira seu genero(M ou F): ");
	scanf(" %c",&genero);
	printf("escolha se voce [G]ostou ou [N]ao gostou do novo produto: ");
	scanf(" %c",&pref);

	if(genero!='M' && genero!='F' || pref!='G' && pref!='N'){ //perguntar pq && e nao ||
		printf("informacao invalida.");
		return 0;
	}

	
	if(genero=='F'){
		if(pref=='G'){
			pgostF++;
		}
		else{
			pngost++;
		}
	}
	
	else{
		if(pref=='G'){
			pgostM++;
		}
		else{
			pngost++;
		}
	}
}
	totalg=pgostM+pgostF;
	
	printf("\n\nRESULTADO:\nnumero de pessoas que gostaram do produto: %d\n", totalg);
	
	printf("numero de pessoas que nao gostaram do produto: %d\n", pngost);
	
	
	if(pgostM>pgostF){
		printf("o genero que o produto teve uma melhor aceitacao foi o [M]asculino.\n");
	}
	else{
		if(pgostF>pgostM){
		printf("o genero que o produto teve uma melhor aceitacao foi o [F]eminino.\n");
	}
	else{
		if(pgostF=pgostM){
		printf("o produto teve a mesma aceitacao entre os generos.");
		}
	else{
		printf("o produto nao teve aceitacao entre os generos.");
	}
	}
    }
 
	
	return 0;
}
