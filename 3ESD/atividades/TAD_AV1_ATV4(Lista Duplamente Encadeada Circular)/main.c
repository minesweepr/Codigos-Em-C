#include <stdio.h>
#include<stdlib.h>
#include<time.h>
#include "LDEC.h"

int main()
{
    tLista *lista=cria_lista();
    
    srand(time(NULL));
    for(int i=0;i<10;i++){
        lista_inclui(lista, rand()%10);
    }
    lista_exibe(lista);
    lista_remove(lista, 2);
    
    printf("removendo o numero 2, se existir:\n");
    lista_exibe(lista);
    libera_lista(lista);
    
    return 0;
}
