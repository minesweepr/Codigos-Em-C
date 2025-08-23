#include <stdio.h>

int adi(int n1, int n2);
int sub(int n1, int n2);
int mult(int n1, int n2);
int div(int n1, int n2);

int main () {
	int n1, n2, cod, tot;
	
	do {
		printf("Insira dois valores inteiros.\n");
		scanf("%d %d", &n1, &n2);
		printf("Insira a operacao desejada. \n 1 - Adicao \n 2 - Subtracao \n 3 - Multiplicacao \n 4 - Divisao \n 0 - Sair.");
		scanf("%d", &cod);
		if (cod==1){
			tot=adi(n1, n2);
		}
		else if (cod==2){
			tot=sub(n1, n2);
		}
		else if (cod==3){
			tot=mult(n1, n2);
		}
		else if (cod==4){
			tot=div(n1, n2);
		}
		else if (cod==0){
			break;
		}
		else{
			printf("Numero invalido.");
		}
		printf("Total = %d \n", tot);
} while (cod!=0);
printf ("Fim do programa.");
return 0;
}

int adi(int n1, int n2){
	int total;
	
	total=n1+n2;
	return total;
}

int sub(int n1, int n2){
	int total;
	
	total=n1-n2;
	return total;
}

int mult(int n1, int n2){
	int total;
	
	total=n1*n2;
	return total;
}

int div(int n1, int n2){
	int total;
	
	total=n1/n2;
	return total;
}
