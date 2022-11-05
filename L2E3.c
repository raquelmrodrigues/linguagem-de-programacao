// Uma loja utiliza o c�digo V para compras � vista e o c�digo P para compras � prazo. 
// Fa�a um algoritmo que receba o c�digo de e o valor de 15 transa��es. Calcule e mostre:  
// O valor total das compras � vista 
// O valor total das compras a prazo 
// O valor total das compras efetuadas  

#include <stdio.h> 

int main() {
    int n = 15;
    double vista = 0, prazo = 0, total = 0;
    char codigo;

    for(int i =1; i<n; i++) {
        double valor;
        printf("Digite o tipo\n"); 
        scanf(" %c", &codigo);
        printf("Digite o valor\n"); 
        scanf(" %lf", &valor);

        total += valor;

        if(codigo == 'p') {
            prazo += valor;
        }
        if(codigo == 'v') {
            vista += valor;
        }
    }

    printf("valor a vista: %.2lf\n", vista);
    printf("valor a prazo: %.2lf\n", prazo);
    printf("valor total: %.2lf\n", total);
    return 0;
}