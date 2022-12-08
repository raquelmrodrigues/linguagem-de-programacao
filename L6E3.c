// Implementar uma função para comparar uma substring da string2 com os n2 primeiros caracteres de string1. A substring é determinada pelo índice n1 com tamanho dado por n2.

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    
    char str1[30]="",str2[30]="",sub3[30]="",aux[30]="";
    int n, j, k, i;

    printf("insira a primeira string\n");
    scanf("%s",str1);
    printf("insira a segunda string\n");
    scanf(" %s",str2);
    printf("insira o indice do inicio da substring na string 2 \n");
    scanf(" %d",&n);
    printf("\ninsira o tamanho da substring \n");
    scanf(" %d",&j);
    k=n+j;
    
    for (i=n;i<k;i++){
        aux[i]=str1[i];
    }
    strcat(sub3,aux);
    
    if(strcmp(str2,sub3)>0 || strcmp(str2,sub3)<0)
    printf("A string 1 e a substring da string 2 s�o diferentes");
    else
    printf("A string 1 e a substring da string 2 s�o iguais");
    
    return 0;
}
