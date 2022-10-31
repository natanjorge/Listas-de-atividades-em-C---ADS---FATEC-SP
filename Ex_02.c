/*Exercício 2. Erro
Qual é o erro no programa a seguir?
#include <stdio.h>
int main(void) { printf("%d\n",0678); return 0; }*/
#include <stdio.h>
int main(void) { 
	printf("%d\n","0678"); //Faltou inserir aspas
	return 0; 
}	