/*desenvolva um algoritmo que contenha uma funcao para 
verificar se um numero e positivo ou negativo. caso seja 
positivo, informe se � par ou impar*/

#include<stdio.h>
int calculo (n){
	int
	if(n>1){
		printf("%d e positivo",n);
		if(n%2==0){
			printf("")
		}
	}
	
}

int main (){
	int n;
	printf("insira um numero: ");
	scanf("%d",&n);
	
	return 0;
}


/*#include <stdio.h>

// Fun��o para verificar se o n�mero � positivo ou negativo
int verificarNumero(int n) {
    if (n > 0) {
        return 1; // Retorna 1 se o n�mero for positivo
    } else if (n < 0) {
        return -1; // Retorna -1 se o n�mero for negativo
    } else {
        return 0; // Retorna 0 se o n�mero for zero
    }
}

int main() {
    int numero, resultado;

    // Solicita ao usu�rio que insira um n�mero
    printf("Insira um n�mero: ");
    scanf("%d", &numero);

    // Chama a fun��o para verificar o n�mero e recebe o resultado
    resultado = verificarNumero(numero);

    // Verifica o retorno da fun��o e imprime as mensagens correspondentes
    if (resultado == 1) {
        printf("O n�mero � positivo.\n");

        // Verifica se o n�mero � par ou �mpar
        if (numero % 2 == 0) {
            printf("E o n�mero � par.\n");
        } else {
            printf("E o n�mero � �mpar.\n");
        }
    } else if (resultado == -1) {
        printf("O n�mero � negativo.\n");
    } else {
        printf("O n�mero � zero, que � neutro.\n");
    }

    return 0;
}*/
