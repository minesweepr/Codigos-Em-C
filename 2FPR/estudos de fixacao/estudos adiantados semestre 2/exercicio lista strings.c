/*Suponha que não existissem as funções strlen,
strcpy, strcat e strcmp. Pede-se, então, a
implementação de funções que tenham o
mesmo objetivo daquelas.*/
#include<stdio.h>
#include<string.h>
#define SIZE 100
int fun_strlen (char string1[]);
void fun_strcpy (char string1[], char string2[]);
void fun_strcat (char string1[], char string2[]);
int fun_strcmp (char string1[], char string2[]);

int main (){
	int resp, resultado;
	char string1[SIZE], string2[SIZE];
	do{
		printf("qual funcao deseja usar?\n1 - strlen, tamanho do string\n2 - strcpy, copiar um string para o outro\n3 - strcat, juntar duas strings\n4 - strcmp, comparar duas strings\n0 - encerrar programa\n\nRESPOSTA: ");
    	scanf("%d",&resp);
    	getchar();
    
    	switch(resp){
    		case 1: //STRLEN
    	       printf("\ntamanho do string: %d\n\n\n", fun_strlen(string1));
				break;

			case 2: //STRCOPY
			   fun_strcpy(string1, string2);
    		   printf("\nstring copiada: %s\n\n", string2);
			  	break;
			
			case 3: //STRCAT
			   fun_strcat(string1, string2);
			   printf("\nstring conectada: %s\n\n", string1);
			    break;
			
			case 4: //STRCMP
			   resultado=fun_strcmp(string1, string2);
     		   if(resultado>0){
     		    	printf("\n%s e maior que %s\n\n", string1, string2);
				}
				else if(resultado<0){
					printf("\n%s e maior que %s\n\n", string2, string1);
				}
				else{
					printf("\n ambos sao iguais\n\n\n");
				}
		    	break; 
			
			case 0:
			   printf("encerrando programa...");
			   	break;
				
    		default:
    			printf("opcao invalida, tente novamente.\n\n\n");
		}
	}while(resp!=0);
	return 0;
}

int fun_strlen (char string1[]){
	int i=1;
	printf("digite um string: ");
    fgets(string1, sizeof(string1), stdin);
    
	while(string1[i]!='\0'){
		i++;
	}
	return i;
}

void fun_strcpy (char string1[], char string2[]){
	int i=0;
	printf("digite o string de origem: ");
    fgets(string1, sizeof(string1), stdin);
    			
    do{
    	string2[i]=string1[i]; 
		i++;
	}while(string1[i]!='\0');
	
}

void fun_strcat (char string1[], char string2[]){
	int i=0, j=0;
	printf("digite o string fixo: ");
    fgets(string1, sizeof(string1), stdin);
    
    printf("digite o string adicionado: ");
    fgets(string2, sizeof(string2), stdin);
    
    while(string1[i]!='\0'){
    	i++;
	}
	
	while(string2[j]!='\0'){
		string1[i]=string2[j];
		j++;
		i++;
	}
	
}

int fun_strcmp (char string1[], char string2[]){
	int i=0;
	printf("digite o string 1: ");
    fgets(string1, sizeof(string1), stdin);
    
    printf("digite o string 2: ");
    fgets(string2, sizeof(string2), stdin);
    
    
	do{
		if(string1[i]>string2[i]){
			return 1;
		}
		if(string2[i]>string1[i]){
			return -1;
		}
		i++;
	}while (string1[i]!='\0' && string2[i]!='\0');
	return 0;
}


