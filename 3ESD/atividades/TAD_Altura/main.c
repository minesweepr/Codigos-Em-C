#include <stdio.h>
#include <stdlib.h>
#include "Altura.h"

/*TAD ALTURA:opera��es usuais ( ver slides)

diferen�a: recebe duas alturas e retorna uma altura com a diferen�a absoluta entre elas
soma: recebe uma altura e um valor inteiro em cent�metros. retorna uma nova altura atualizada
copia: recebe uma altura e retorna uma nova altura com mesmos valores da recebida

atribui e acessa m e cm separadamente ( desej�vel)

main para testar todas as fun��es da interface de seu TAD*/

int main() {
	Altura *alt1=alt_cria(1,70), *alt2=alt_cria(1,55);
	alt_exibe(alt1);
	alt_exibe(alt2);
	
	printf("\n\na diferenca absoluta entre as duas alturas e de %dcm", alt_compara(alt1, alt2));
	
	Altura *soma=alt_soma(alt1, 50);
	printf("\na primeira altura somada com 50cm resulta em %s", alt_getAltura(soma));
	alt_getAltura(soma);
	
	Altura *novo=alt_copia(alt2);
	printf("\na copia da segunda altura %s", alt_getAltura(novo));
	
	alt_libera(alt1);
	alt_libera(alt2);
	alt_libera(soma);
	alt_libera(novo);
	
	return 0;
}
