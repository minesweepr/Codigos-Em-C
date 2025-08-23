#include <stdio.h>

void nadador(int id) {
	if (id>=5 && id<=7) {
		printf("Categoria Infantil A");
	}
	else if (id>=8 && id<=10) {
		printf("Categoria Infantil B");
	}
	else if (id>=11 && id<=13){
		printf("Categoria Juvenil A");
	}
	else if (id>=14 && id<=17){
		printf("Categoria Juvenil B");
	}
	else if (id>=18){
		printf("Categoria Adulta");
	}
	else {
		printf("Idade Invalida.");
	}
	
}

int main() {
	int idade;
	
	printf("Insira a idade do nadador.");
	scanf("%d", &idade);
	nadador(idade);
	
	return 0;
}