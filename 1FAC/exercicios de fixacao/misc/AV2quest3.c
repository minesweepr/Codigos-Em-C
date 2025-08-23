/*Fa�a uma fun��o que, dado um vetor de inteiros, desloque os valores das posi��es p1 a p2 n posi��es 
para a direita.
Observa��o: caso n�o seja poss�vel o deslocamento, a fun��o dever� retornar 0; 
caso contr�rio, o deslocamento ser� realizado e o valor 1 retornado pela fun��o.*/
#include<stdio.h>
void exibir (int vetor[], int tamanho);
int deslocamento (int vetor[], int tamanho, int p1, int p2, int n);

int main (){
	int vetor[8]={1,2,3,4,5,6,7,8}, p1, p2, n, resp;
	exibir(vetor, 8);
	printf("\n\ninsira duas posicoes do vetor(comeca com 0): ");
	scanf("%d %d",&p1,&p2);
	
	printf("insira quantas casas deseja mover para a direita: ");
	scanf("%d", &n);
	
	resp=deslocamento (vetor, 8,  p1, p2, n);
	if(resp==1){
		printf("\natualizado com sucesso:\n");
		exibir(vetor, 8);
	}
	else{
		printf("\ninformacoes invalidas");
	}
	return  0;
}

int deslocamento (int vetor[], int tamanho, int p1, int p2, int n){
	int i;
	if(p1<0||p2>=tamanho){
		return 0;
	}
	for(i=p2;i>=p1;i--){
		if(i+n<tamanho){
			vetor[i+n]=vetor[i];
		}
		else{
			return 0;
		}
	}
	
	for(i=p1;i<p1+n;i++){
		vetor[i]=0;
	}
	return 1;
}

void exibir (int vetor[], int tamanho){
	int i;
	printf("vetor = ");
	for(i=0;i<tamanho;i++){
		printf("%d ", vetor[i]);
	}
}
