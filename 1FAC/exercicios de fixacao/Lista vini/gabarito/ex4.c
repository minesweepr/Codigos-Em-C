#include <stdio.h>

void func(int num){
	int num2;
	printf("Insira outro numero inteiro.\n");
	scanf("%d", &num2);
	
	if (num>num2){
		printf("1");
	}
	else {
		printf("0");
	}
}

int main(){
	int num;
	printf("Insira um numero inteiro. \n");
	scanf("%d", &num);
	func(num);
}
