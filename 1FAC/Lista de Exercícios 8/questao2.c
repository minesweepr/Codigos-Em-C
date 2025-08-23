#include<stdio.h>

void calculo (float c){
	float f;
	f=(c*1.8)+32;
	printf("fahrenheit: %.1f",f);
}

int main (){
	float c;
	printf("insira a temperatura em celcius: ");
	scanf("%f",&c);
	
	calculo(c);
	
	return 0;
}
