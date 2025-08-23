#include<stdio.h>
#define QUANT 200

int main (){
	int i, num, numpares=0, maiornum=0;
	float media;
	
	for(i=1;i<=QUANT;i++){
		printf("%d. insira um numero inteiro: ", i);
		scanf("%d",&num);
		
		if(i%2==0 && maiornum<num){
			maiornum=num;
		}
		
		if(num%2==0){
			numpares+=num;
		}
	}
	media=(float)numpares/QUANT;
	printf("\nRESULTADOS...\nmaior numero de ordem par: %d\nmedia dos numeros pares: %.2f", maiornum, media);
	
	return 0;
}
