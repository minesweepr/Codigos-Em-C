/******************************************************************************

Questão 03 [2,5 pontos]:
Dadas duas strings s1 e s2, implementar uma função que crie duas outras strings - 
s3 e s4 com as seguintes características:
  - s3: conterá todos os caracteres de s1 que também estão em s2;
  - s4: conterá todos os caracteres de s1 que não estão em s2.
Exemplo:
s1: "PROGRAMACAO"  -->  s3: "ROGRAMAAO"
s2: "ALGORITMOS"  -->  s4: "PC"

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void nome (char s1[], char s2[], char s3[], char s4[]);
int main()
{
    char s1[]="PROGRAMACAO", s2[]="ALGORITMOS", s3[100], s4[100];
    nome(s1, s2, s3, s4);
    printf("s1 = %s\ns2 = %s\ns3 = %s\ns4 = %s", s1, s2, s3, s4);
    return 0;
}

void nome (char s1[], char s2[], char s3[], char s4[]){
    int i, j, achou, k=0, l=0;
    for(i=0;s1[i]!='\0';i++){
        achou=0;
        for(j=0;s2[j]!='\0';j++){
            if(s1[i]==s2[j]){
                achou=1;
            }
        }
        if(achou){
            s3[k++]=s1[i];
        }
        else{
            s4[l++]=s1[i];
        }
    }
    s3[k]='\0';
    s4[l]='\0';
}
