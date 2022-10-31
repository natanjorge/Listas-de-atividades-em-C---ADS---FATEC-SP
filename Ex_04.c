/*Exercício 4. Conversão
Dado um número inteiro em base 10, exibir o valor correspondente em base 16.*/

#include <stdio.h>
int main(void) { 

	int nConv;

	printf("Informe um numero inteiro: \n");
	scanf("%d", &nConv);

	printf("Em hexadecimal= %X\n\n\n", nConv);
	
	return 0; 
}	