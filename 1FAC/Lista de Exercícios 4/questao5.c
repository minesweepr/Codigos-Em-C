/*QUEST�O 05: Fa�a um programa que exiba
na tela os 50 primeiros termos da seguinte
s�rie: 1, -2, 3, -4, 5, -6 ...*/
#include<stdio.h>

int main (){
	int i;

    printf("os 50 primeiros termos da serie 1, -2, 3, -4, 5, -6 ... sao:\n");
		
	for(i=1;i<=50;i++){
		if(i % 2 == 0){
			printf("%d ", -i);
		}
		else {
			printf("%d ", i);
		}
	}


	
	return 0;
}

/*#include <stdio.h>

//main
void main ()
{
	//declara��o de vari�veis
	int pos, neg;
	
	//variando os valores
	for (pos=1,neg=-2;pos<50;pos+=2,neg-=2)
	{
		printf ("%d %d ", pos, neg);
	}
}*/
