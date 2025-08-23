#include <stdio.h>

float descont(float preco, float desconto){
	float novopreco, valordesconto;
	valordesconto=(desconto/100)*preco;
	novopreco=preco-valordesconto;
	printf("Quantidade de desconto: -%.2f \n", valordesconto);
	return novopreco;
}

float valor(float npreco, int quantidade){
	float total;
	total=npreco*quantidade;
	
	return total;
}

int main(){
	float preco, desconto, npreco, total;
	int qtd;
	printf("Preco do item:\n");
	scanf("%f", &preco);
	printf("Porcentagem de desconto: \n");
	scanf("%f", &desconto);
	printf("Quantidade a ser comprada: \n");
	scanf("%d", &qtd);
	npreco=descont(preco, desconto);
	total=valor(npreco, qtd);
	printf("Valor original: %.2f \n", preco);
	printf("Valor total da venda: %.2f \n", total);
}
