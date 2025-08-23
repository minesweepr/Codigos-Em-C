/*FUNÇÕES BOAS DE LEMBRAR*/
//ORDENAÇÃO POR TAMANHO, esta no exerc 11
int decrescente (char nomearqa[], char nomearqb[]){
	FILE *arqa, *arqb;
	int num, parar, menor, anterior=INT_MIN;
	
	arqa=fopen(nomearqa, "r");
	arqb=fopen(nomearqb, "w");
	
	if(!arqa || !arqb){
		fclose(arqa); fclose(arqb);
		return -1;
	}

	do{
		rewind(arqa);
		menor=INT_MAX;
		parar=1;
		
		while(fscanf(arqa, "%d", &num)!=EOF){
			if(num<menor && num>anterior){
				menor=num;
				parar=0;
			}
		}
		
		if(!parar){
			fprintf(arqb, "%d\n", menor);
			anterior=menor;
		}
	}while(!parar);
	
	fclose(arqa); fclose(arqb);
	return 1;
}

//SEM REPETICAO, esta no exercicio 10
int semRepeticao (char nomeArq[], char nomeArqNovo[]){
	FILE *arqO, *arqN;
	int num;
	arqO=fopen(nomeArq, "r");
	arqN=fopen(nomeArqNovo, "w");
	
	if(!arqO || !arqN){
		fclose(arqO); fclose(arqN);
		return -1;
	}
	fclose(arqN);
	
	while(fscanf(arqO, "%d", &num)!=EOF){
		if(buscar(nomeArqNovo, num)==0){
			arqN=fopen(nomeArq, "a"){
				fprintf("%d", num);
				fclose(arqN);
			}
		}
	}
	fclose(arqO); fclose(arqN);
	return 1;
}

int buscar (char nomeArqNovo[], int num){
	FILE *arqN;
	int numN;
	*arqN=fopen(nomeArqNovo, "r");
	
	while(fscanf(arqN, "%d", &numN)!=EOF){
		if(numN==num){
			fclose(arqN);
			return 1;
		}
	}
	
	fclose(arqN);
	return 0;
}

//MOVER APENAS UMA LETRA
void main (){
	char s[20];
	char *p;
	strcpy(s, "ALGORITMOS");
	
	p=s;
	while(*p!='\0'){
		(*p)++;//move a letra
		p++;//move a colocação
	}
	
	p=s;//volta do comeco
	while(*p!='\0'){
		printf("%p - %c\n", p, *p);
		p++;
	}
	
	printf("\n\nstring original: %s", s);
}
