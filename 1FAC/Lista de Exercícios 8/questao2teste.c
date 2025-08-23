#include<stdio.h>

float calculo (float c){
	return (c*1.8)+32;
}

int main (){
	float c, f;
	printf("insira a temperatura em celcius: ");
	scanf("%f",&c);
	
	f=calculo(c);
	printf("fahrenheit: %.1f",f);
	
	return 0;
}

