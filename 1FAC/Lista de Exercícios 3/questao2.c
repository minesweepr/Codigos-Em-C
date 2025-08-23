#include<stdio.h>
#include<math.h>

int main(){
	char *Nfigura;
	int figura;
	float raio, base, alt, lado, resultado;
	
	printf("escolha uma das figuras a seguir(1-circulo, 2-retangulo, 3-quadrado ou 4-triangulo): ");
	scanf("%d",&figura);
	
	if(figura>4 || figura<1){
		printf("opcao invalida, tente novamente.");
		return 0;
	}
	
	if(figura== 1){
		Nfigura="circulo";
		printf("forneca o numero do raio: ");
		scanf("%f",&raio);
		resultado = 3.14159 * pow(raio,2);
		
	}
	else{
		if(figura== 2){
		Nfigura="retangulo";	
		printf("forneca, respectivamente, o numero da base e da altura: ");	
		scanf("%f %f",&base, &alt);
		resultado = base * alt;
		
		}
		else{
			if(figura== 3){
			Nfigura="quadrado";	
			printf("forneca o numero do lado: ");	
			scanf("%f",&lado);
			resultado = pow(lado,2);
			}
			else{
				Nfigura="triangulo";
				printf("forneca, respectivamente, o numero da base e da altura: ");	
				scanf("%f %f",&base, &alt);
				resultado = (base * alt)/2;	
				
			}
		}
	}

	
	printf("a area do %s e: %.2f",Nfigura,resultado);
	
	
	return 0;
}
