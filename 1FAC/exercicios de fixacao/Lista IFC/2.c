/*Escreva uma função que calcule e retorne a distância entre dois pontos (
x1, y1) e (x2, y2). Todos os números e valores de retorno devem ser do
tipo float.*/
#include<stdio.h>
#include<math.h>

float calculo (float x1, float y1, float x2, float y2){
	return sqrt(pow(x2-x1,2)+pow(y2-y1,2)); //perguntar pro professor se seria melhor separar o calculo em etapas
}

int main (){
	float x1, y1, x2, y2, res;
	printf("insira dois pontos:\n(x1 y1) = ");
	scanf("%f %f",&x1,&y1);
	printf("(x2 y2) = ");
	scanf("%f %f",&x2,&y2);
	
	printf("\ndistancia entre os dois pontos: %.2f",res=calculo(x1,y1,x2,y2));
	
	return 0;
}

