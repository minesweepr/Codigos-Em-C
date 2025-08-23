/*desenvolva um algoritmo que contenha uma funcao para 
verificar se um numero e positivo ou negativo. caso seja 
positivo, informe se é par ou impar*/

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

// Função para verificar se o número é positivo ou negativo
int verificarNumero(int n) {
    if (n > 0) {
        return 1; // Retorna 1 se o número for positivo
    } else if (n < 0) {
        return -1; // Retorna -1 se o número for negativo
    } else {
        return 0; // Retorna 0 se o número for zero
    }
}

int main() {
    int numero, resultado;

    // Solicita ao usuário que insira um número
    printf("Insira um número: ");
    scanf("%d", &numero);

    // Chama a função para verificar o número e recebe o resultado
    resultado = verificarNumero(numero);

    // Verifica o retorno da função e imprime as mensagens correspondentes
    if (resultado == 1) {
        printf("O número é positivo.\n");

        // Verifica se o número é par ou ímpar
        if (numero % 2 == 0) {
            printf("E o número é par.\n");
        } else {
            printf("E o número é ímpar.\n");
        }
    } else if (resultado == -1) {
        printf("O número é negativo.\n");
    } else {
        printf("O número é zero, que é neutro.\n");
    }

    return 0;
}*/
