// Fa�a um programa em C que mostre a tabuada de qualquer n�mero escolhido pelo usu�rio (considerar tabuada do n�mero 1 ao 10).  

#include <stdio.h>

int main() {
    
    int numero, i;
    printf("digite um n�mero de 1 a 10\n");
    scanf("%d", &numero);

    for(i=1; i<=10; i++) {
          printf("%d x %d = %d \n",numero,i,numero*i);
    }
    return 0;
}
