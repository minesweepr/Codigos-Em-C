#include <stdio.h>
#include <string.h>

#define SIZE 8
void main (){
	char string1[SIZE]="string1", string2[SIZE]="string2";
	
	
	printf("ORIGINAL\nstring1 = %s\nstring2 = %s", string1, string2);
	strcpy(string1, string2);
	printf("\n\nNOVO\nstring1 = %s\nstring2 = %s", string1, string2);
}
