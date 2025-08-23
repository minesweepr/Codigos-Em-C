#include<stdio.h>

int main (){
	int num, val, i, mul=0;
	
	printf("insira um numero x: ");
	scanf("%d",&num);
	
	
	for(i=1;i<=50;i++){
	printf("%d. insira um valor: ", i);
	scanf("%d",&val);
	
	if(num%val==0){
		mul++;
    }	
	}
	
	printf("\na quantidade total de multiplos de %d e: %d", num, mul);
	
	return 0;
}
