// Implementar uma função para adicionar (append) a uma subcadeia da string2 para uma string1. A substring é iniciada no índice determinado por n.

#include <stdio.h>
#include <string.h>

  int str_len(char x[]) {
    int i = 0;
    while (x[i] != 0)
      i++;
    return i;
  }

int str_ncat(char string1[], char string2[], int n) {
  int i, j;

  i = str_len(string1);

  for (j = n; string2[j] != 0; j++) {
    string1[i] = string2[j];
    i++;
  }
  if (string2[j] != 0)
    string1[i] = 0;

  return 0;
}

int main() {
  char x[50] = "primeira string";
  char y[50] = "segunda string";

  str_ncat(x, y, 0); 
  printf("x - > %s\n", x);

  return 0;
}