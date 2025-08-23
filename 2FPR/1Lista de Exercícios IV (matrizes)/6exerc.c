/*QUESTÃO 06:
Considere uma loja que mantém em uma
matriz o total vendido por cada funcionário
pelos diversos meses do ano. Ou seja, uma
matriz de 12 linhas (uma por mês) e 10 colunas
(10 funcionários). Pede-se o desenvolvimento
de uma função para cada item abaixo:
a. Calcular o total vendido durante o ano;
b. Dado um mês fornecido pelo usuário,
determinar o total vendido nesse mês;
c. Dado um funcionário fornecido pelo
usuário, determinar o total vendido por ele
durante o ano;
d. Determinar o mês com maior índice de
vendas;
e. Determinar o funcionário que menos
vendeu durante o ano.*/
#include<stdio.h>
#include<limits.h>

#define MESES 12
#define FUNCIONARIOS 10

void aleatorizador (int linha, int coluna, int limite, int matriz[][coluna]);
void exibir (int linha, int coluna, int matriz[][coluna]);
int total_vendas_ano (int matriz[][FUNCIONARIOS]);
int total_vendas_mes (int mes, int matriz[][FUNCIONARIOS]);
int total_vendas_funcionario (int funcionario, int matriz[][FUNCIONARIOS]);
int mes_maior_vendas (int matriz[][FUNCIONARIOS]);
int funcionario_menor_vendas (int matriz[][FUNCIONARIOS]);

int main (){
	int matriz[MESES][FUNCIONARIOS], resposta, mes, funcionario;
	
	printf("Matriz total de vendas anuais por funcionario:\n");
	aleatorizador(MESES, FUNCIONARIOS, 10, matriz);
	exibir(MESES, FUNCIONARIOS, matriz);
	
	do{
		printf("\n\nO QUE DESEJA SABER?\n");
		printf("1. Total vendido durante o ano;\n2. Total vendido por mes;\n3. Total vendido por funcionario;\n4. Mes com maior indice de vendas;\n5. Funcionario com menor indice de vendas;\n6. Encerrar sessao.\n\nRESPOSTA: ");
	    scanf("%d", &resposta);
	    
	    switch (resposta){
	    	case 1:
	    		printf("\nTotal vendido durantee o ano: %d\n", total_vendas_ano(matriz));
	    	    break;
	    	
	    	case 2:
	    		printf("\nInsira o mes desejado(numero): ");
	    		scanf("%d", &mes);
	    		printf("\nTotal vendido no mes %d: %d\n", mes, total_vendas_mes(mes, matriz));
	    		break;
	    	
	    	case 3:
	    		printf("\nInsira o funcionario desejado(numero): ");
	    		scanf("%d", &funcionario);
	    		printf("\nTotal vendido pelo funcionario %d: %d\n", funcionario, total_vendas_funcionario(funcionario, matriz));
	    		break;
	    	
	    	case 4:
	    		printf("\nMes com maior indice de vendas: %d\n", mes_maior_vendas(matriz));
	    		break;
	    	
	    	case 5:
	    		printf("\nFuncionario com menor indice de vendas: %d\n", funcionario_menor_vendas(matriz));
	    		break;
	    	
	    	default:
	    		printf("\nOpcao invalida, tente novamente.\n");
		}
	    
	}while(resposta!=6);
	
	
	return 0;
}

int total_vendas_ano (int matriz[][FUNCIONARIOS]){
	int i, j, total=0;
	for(i=0;i<MESES;i++){
		for(j=0;j<FUNCIONARIOS;j++){
			total+=matriz[i][j];
		}
	}
	return total;
}

int total_vendas_mes (int mes, int matriz[][FUNCIONARIOS]){
	int j, total=0;
	for(j=0;j<FUNCIONARIOS;j++){
		total+=matriz[mes-1][j];
	}
	return total;
}

int total_vendas_funcionario (int funcionario, int matriz[][FUNCIONARIOS]){
	int i, total=0;
	for(i=0;i<MESES;i++){
		total+=matriz[i][funcionario-1];
	}
	return total;
}

int mes_maior_vendas (int matriz[][FUNCIONARIOS]){
	int i, j, maior=INT_MIN, total=0, mes;
	for(i=0;i<MESES;i++){
		total=0;
		for(j=0;j<FUNCIONARIOS;j++){
			total+=matriz[i][j];
		}
		if(total>maior){
			maior=total;
			mes=i+1;
		}
	}
	return mes;
}

int funcionario_menor_vendas (int matriz[][FUNCIONARIOS]){
	int i, j, menor=INT_MAX, total=0, funcionario;
	for(j=0;j<FUNCIONARIOS;j++){
		total=0;
		for(i=0;i<MESES;i++){
			total+=matriz[i][j];
		}
		if(total<menor){
			menor=total;
			funcionario=j+1;
		}
	}
	return funcionario;
}

void aleatorizador (int linha, int coluna, int limite, int matriz[][coluna]){
	int i, j;
	srand (time(NULL));
	
	for(i=0;i<linha;i++){
		for(j=0;j<coluna;j++){
			matriz[i][j]=rand()%limite;
		}
	}
}

void exibir (int linha, int coluna, int matriz[][coluna]){
	int i, j;
	for(i=0;i<linha;i++){
		for(j=0;j<coluna;j++){
			printf("%d ", matriz[i][j]);
		}
		printf("\n");
	}
}
