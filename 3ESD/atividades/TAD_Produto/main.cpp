#include "Produto.h"
#include <stdio.h>
#include <stdlib.h>
#define TAM 4

int main (){
    Produto *pvet[TAM]; 
    pvet[0]=produto_cria("uva", "123", 2.30, 2);
    produto_criaUnidade(pvet[0], 1001, 15, 1, 2025, 0);
    produto_criaUnidade(pvet[0], 1002, 20, 1, 2026, 1);
    
    pvet[1]=produto_cria("pera", "456", 4.50, 1);
    produto_criaUnidade(pvet[1], 2002, 10, 1, 2025, 0);
    
    pvet[2]=produto_cria("maca", "789", 6.70, 2);
    produto_criaUnidade(pvet[2], 3001, 5, 1, 2025, 0);
    produto_criaUnidade(pvet[2], 3002, 8, 1, 2025, 1);
    
    pvet[3]=produto_cria("salada mista", "101112", 8.9, 1);
    produto_criaUnidade(pvet[3], 4002, 14, 1, 2025, 0);
    
    int dia, mes, ano;
    printf("para cada produto, quais as unidades vencem em uma determinada data perguntada ao usuario\ninsira uma data (dia mes ano): ");
    scanf("%d %d %d", &dia, &mes, &ano);
    
    for(int i=0;i<TAM;i++){
        produto_vencimento(dia, mes, ano, pvet[i]);
    }
    
    for(int i=0;i<TAM;i++){
        produto_libera(pvet[i]);
    }
    return 0;
}
