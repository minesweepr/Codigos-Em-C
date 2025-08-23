/*Implementar uma função que, dado um
número inteiro, calcule (e retorne) a soma e a
média de seus divisores.*/
//se nao pede pra exibir, é int e nao é pra retornar na main

#include <stdio.h>
void calculo (int n, int *soma, int *cont){
    int s=0, c=0, i;
    for(i=1;i<=n;i++){
        if(n%i==0){
            s+=i;
            c++;
        }
    }
    *soma=s;
    *cont=c;

}

int main(){
    int n, soma, cont;
    printf("insira um numero:\nN = ");
    scanf("%d",&n);

    calculo (n,&soma,&cont);
    printf("\nsoma dos divisores: %d\nmedia dos divisores: %.1f", soma, (float)soma/cont);
    
    return 0;
}