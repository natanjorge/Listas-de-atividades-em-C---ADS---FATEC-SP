/*Exercício 3. Bytes
Crie um programa para informar quantos bytes são necessários para representar os
resultados das expressões 7/2 e 7/2.0, respectivamente.*/
#include <stdio.h>
int main(void) { 

	printf("Quantidade de bytem necessaria em '7/2': %d\n", sizeof(7/2));
	printf("Quantidade de bytem necessaria em '7/2.0': %d\n", sizeof(7/2.0));
	return 0; 
}	