// Dados tr�s n�meros inteiros positivos, informar que tipo de tri�ngulo eles definem: equil�tero: 3 lados iguais; is�sceles: 2 lados iguais; escaleno: 3 lados distintos; 

#include <stdio.h>

int main () {
	int a, b, c;
	
	printf("insira os 3 valores dos lados");
	scanf("%d %d %d", &a, &b, &c);
	
	if(a == b && b == c) {
		printf("equilatero");
	} else if(a != b && b != c && c != a) {
		printf("escaleno");
	} else {
		printf("isosceles");
	}
}
