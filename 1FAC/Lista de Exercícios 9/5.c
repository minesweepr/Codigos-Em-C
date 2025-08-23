/*Fazer uma fun��o que exiba a tabuada de
pot�ncias de um n�mero n, no intervalo de 1 a
9. Se o n�mero n�o estiver neste intervalo, o
c�digo 0 deve ser retornado; caso contr�rio,
retorna-se 1.*/
#include<stdio.h>
#include<math.h>
int tabuada(int n){
	return (n>=1 && n<=9) ? 1 : 0;
}

int main (){
	int n, res, i, pot;
	printf("insina um numero N: ");
	scanf("%d",&n);
	
	res=tabuada(n);
	if(res==1){
		for(i=0;i<=9;i++){
			pot=pow(n,i);
			printf("%d potencia de %d = %d\n",n,i,pot);
		}
	}
	else{
		printf("%d nao esta no intervalo de 1 a 9",n);
	}
	
	return 0;
}
