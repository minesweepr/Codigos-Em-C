/*QUEST�O 02: Fa�a um programa que exiba
todos os elementos da seguinte s�rie, assim
como a soma destes elementos:
1, 50, 2, 49, 3, 48, 4, 47, 5, 46, ..., 49, 2, 50, 1

#include<stdio.h>
int main (){
	int i, o=50, soma=0;

	printf("serie: ");
	
	//1, 50, 2, 49, 3, 48, 4, 47, 5, 46	
	for(i=1; i<=5; i++) {

        printf("%d %d ", i, o--);
        soma=soma+i+o;
        }
    //5, 47, 4, 48, 3, 49, 2, 50, 1    
	for(i=5; i>=1; i--) {

        printf("%d %d ", i, o++);
        soma=soma+i+o;
        }    

 
	printf("\na respectiva soma sera: %d", soma);
	return 0;
} essa vers�o � a errada, mas ainda � interessante de ver*/

#include<stdio.h>
int main (){
	int i, o=50, soma=0;

	printf("serie: ");
	
	for(i=1; i<=50; i++) {
        soma+=i+o;
        printf("%d %d ", i, o--);
        
        }    

 
	printf("\na respectiva soma sera: %d", soma);
	return 0;
}



