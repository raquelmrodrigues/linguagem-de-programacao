// Faça um programa em C que mostre a tabuada de qualquer número escolhido pelo usuário (considerar tabuada do número 1 ao 10).  

#include <stdio.h>

int main() {
    
    int numero, i;
    printf("digite um número de 1 a 10\n");
    scanf("%d", &numero);

    for(i=1; i<=10; i++) {
          printf("%d x %d = %d \n",numero,i,numero*i);
    }
    return 0;
}
