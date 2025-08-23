#include<stdio.h>

int main () {
	int hrs;
	float sal, receb;
	
	printf("Insira seu salario por hora: R$");
	scanf("%f",&sal);
	printf("Carha horaria trabalhada: ");
	scanf("%d",&hrs);
	
	if (hrs<=40){
		receb=sal*hrs;
	}
	else {
		receb=40*sal+((hrs-40)*(1.5*sal));
	}
	
	printf("O salario semanal e de R$%.2f",receb);
	
	return 0;
}
