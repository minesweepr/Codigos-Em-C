#include<stdio.h>
#include<string.h>
#define SIZE 100
void main (){
	char string1[SIZE], string2[SIZE];
	int tamanho;
	printf("insira o nome do seu pai: ");
	fgets(string1, sizeof(string1), stdin);
	
	printf("insira o nome da sua mae: ");
	fgets(string2, sizeof(string2), stdin);
	
	tamanho=strcmp(string1,string2);
	
	if(tamanho>0){
		printf("o nome %s e maior que o nome %s", string1, string2);
	}
	else if(tamanho<0){
		printf("o nome %s e maior que o nome %s", string2, string1);
	}
	else{
		printf("os nomes tem o mesmo parametro");
	}
}
/*
EXPLICA��O: a compara��o � lexica, ou seja, a=1 b=2 c=3 etc. dba e maior que abd
    -1 indicando que o par�metro 1 � menor que o par�metro 2;
    0 indicando que os par�metros s�o iguais;
    1 caso o primeiro seja maior que o segundo par�metro.
    
    #include <stdio.h>
#include <string.h>
#define SIZE 100

int main() {
    char string1[SIZE], string2[SIZE];
    int resultado;

    printf("Insira o nome do seu pai: ");
    fgets(string1, sizeof(string1), stdin);
    string1[strcspn(string1, "\n")] = '\0'; // Remove o '\n'

    printf("Insira o nome da sua m�e: ");
    fgets(string2, sizeof(string2), stdin);
    string2[strcspn(string2, "\n")] = '\0'; // Remove o '\n'

    // Compara as strings
    resultado = strcmp(string1, string2);

    if (resultado > 0) {
        printf("O nome \"%s\" � maior que o nome \"%s\".\n", string1, string2);
    } else if (resultado < 0) {
        printf("O nome \"%s\" � maior que o nome \"%s\".\n", string2, string1);
    } else {
        printf("Os nomes t�m o mesmo par�metro.\n");
    }

    return 0;
}

*/
