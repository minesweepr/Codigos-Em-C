#include <stdio.h>

float pesquisa(){
	float salario, maiors=0, menors=10000000,mediafilhos,mediasal,tsal=0,percentsal;
	int tfilhos,nfilhos,npessoas=0,psal350=0;
	while (salario!=-1) {
		printf("(Digite -1 para encerrar) Salario: \n");
		scanf("%f", &salario);
		if (salario==-1) {
			printf("Fim do programa. \n");
			break;
		}
		printf("Numero de filhos: \n");
		scanf("%d", &nfilhos);
		npessoas++;
		if (salario>maiors) {
			maiors=salario;
		}
		if (salario<menors) {
			menors=salario;
		}
		tfilhos=tfilhos+nfilhos;
		mediafilhos=(float)(tfilhos)/npessoas;
		if (salario<=350) {
			psal350++;
		}
		tsal=(float)tsal+salario;
		mediasal=(float)(tsal)/npessoas;
		percentsal=((float)psal350/(float)npessoas)*100;
}
	printf("Maior salario: %.2f \n", maiors);
	printf("Menor salario: %.2f \n", menors);
	printf("Media de salario: %.2f \n", mediasal);
	printf("Media do numero de filhos: %.2f \n", mediafilhos);
	printf("Percentual de pessoas com o salario de ate 350,00R$: %.2f \n", percentsal);
}

int main(){
	pesquisa();
	return 0;
}
