#include<stdio.h>

int main (){
	int i, cont=0;
	
	for(i=1001;cont<5;i++){
		if(i%11==5){
			cont++;
		}
	}
	
	if(cont==5){
		printf("o quinto numero maior que 1000, cuja divisao por 11 tenha resto 5: %d", i);
	}
	
	
	return 0;
}
