// Desenvolva um programa para comparar a idade de Pedro e a de Joana e informar quem � o mais velho. 

#include <stdio.h>

int main () {
	int idadePedro, idadeJoana;
	
	printf("insira e idade de Pedro");
	scanf("%d", &idadePedro);
	printf("insira a idade de Joana");
	scanf("%d", &idadeJoana);
	
	if(idadePedro > idadeJoana) {
		printf("Pedro � mais velho que Joana\n");
	} else {
		printf("Joana � mais velha que Pedro\n");
	}
}
