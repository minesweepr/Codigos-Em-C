#include<stdio.h>
#include<stdlib.h>

#define TAMANHO 3

void inicializar_tabuleiro (char tabuleiro[TAMANHO][TAMANHO]);
void mostrar_tabuleiro (char tabuleiro[TAMANHO][TAMANHO]);
int checar_vitoria (char tabuleiro[TAMANHO][TAMANHO]);

int main (){
	int linha, coluna, jogador, partida=1;
	char tabuleiro[TAMANHO][TAMANHO];
	
	inicializar_tabuleiro(tabuleiro);
	while(partida<=9){
		mostrar_tabuleiro(tabuleiro);
		
		jogador=(partida % 2 == 0) ? 'O' : 'X';
		
		printf("\nTurno %d. Sua vez, jogador %c.", partida, jogador);
		printf("\nEscolha a linha e coluna que deseja jogar (1-3)(1-3): ");
		scanf("%d %d", &linha, &coluna);
		
		
		linha--;
		coluna--;
		if(linha<0 || coluna<0 || linha>=TAMANHO || coluna>=TAMANHO || tabuleiro[linha][coluna]!=' '){
			printf("\nJogada invalida, tente novamente. ");
			getchar();
			system("pause");
		}
		else{
			tabuleiro[linha][coluna]=jogador;
			partida++;
		}
		
		if(partida>=5 && checar_vitoria(tabuleiro)==1){
			mostrar_tabuleiro(tabuleiro);
			printf("\nParabens, jogador %c!! Voce ganhou B)", jogador);
			exit(0);
		}
	}
	mostrar_tabuleiro(tabuleiro);
	printf("\nEmpate! Deu velha.");
	
	return 0;
}

void inicializar_tabuleiro (char tabuleiro[TAMANHO][TAMANHO]){
	int i, j;
	for(i=0;i<TAMANHO;i++){
		for(j=0;j<TAMANHO;j++){
			tabuleiro[i][j]=' ';
		}
	}
}

void mostrar_tabuleiro (char tabuleiro[TAMANHO][TAMANHO]){
	int i, j;
	system("cls");
	for(i=0;i<TAMANHO;i++){
		for(j=0;j<TAMANHO;j++){
			printf(" %c ", tabuleiro[i][j]);
			if(j<TAMANHO-1){
				printf("|");
			}
			else{
				printf("\n");
			}
		}
		if(i<TAMANHO-1){
			printf("---+---+---\n");
		}
	}
	
}

int checar_vitoria (char tabuleiro[TAMANHO][TAMANHO]){
	int i;
	if((tabuleiro[0][0]!=' ' && tabuleiro[0][0] == tabuleiro[1][1] && tabuleiro[0][0]==tabuleiro[2][2]) ||
		(tabuleiro[0][2]!=' ' && tabuleiro[0][2] == tabuleiro[1][1] && tabuleiro[0][2]==tabuleiro[2][0])){
		return 1; //vitória diagonal
	}
	for(i=0;i<TAMANHO;i++){
		if((tabuleiro[i][0]!=' ' && tabuleiro[i][0] == tabuleiro[i][1] && tabuleiro[i][0]==tabuleiro[i][2]) ||
		   (tabuleiro[0][i]!=' ' && tabuleiro[0][i] == tabuleiro[1][i] && tabuleiro[0][i]==tabuleiro[2][i])){
			return 1; //vitória vertical e horizontal
		}
	}
	return 0;
}


