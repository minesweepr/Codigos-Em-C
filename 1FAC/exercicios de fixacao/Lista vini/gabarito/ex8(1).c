#include <stdio.h>


void idade(){
	int anos, meses, dias, tdiasv;
	printf("Insira sua idade em anos, meses e dias.");
	scanf("%d %d %d", &anos, &meses, &dias);
	tdiasv=(anos*365)+(meses*30)+dias;
	printf("Voce ja viveu %d dias no total.", tdiasv);
}

int main(){
	idade();
	return 0;
}
