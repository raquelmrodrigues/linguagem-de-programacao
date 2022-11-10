// Escreva um programa para ler uma temperatura em graus Fahrenheit, calcular e escrever o valor correspondente em graus Celsius. 

#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	float fahrenheit, celcius;
	
	printf("digite a temperatura em  Fahrenheit\n");
	scanf("%f", &fahrenheit);

	celcius = (fahrenheit - 32) / 1.8;
	
	printf("a temperatura em celsius é:%0.2f", celcius);
}
