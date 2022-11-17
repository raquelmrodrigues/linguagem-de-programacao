// Elabore umalgoritmo que preencha duas matrizes 10×10 comvaloresaleatórios 0 e 1 e emseguida, compare se as matrizes são iguais 
// (possuem os mesmos valores em cada posição).
// Detalhes:
// a) declarar uma CONSTANTE para o tamanho das matrizes 
// (inicie comtamanho 2 e quando o algoritmo estiver pronto aumente para 10);
// b) imprima o resultado da comparação das duas matrizes 
// (somente osnumeros que são diferentes, ou seja, 0 emuma matriz e 1 na outra etc);
// c) crie umlopping para repetir as montagens randômicas e os testes;d) 
// Declare uma constante de tempo... 
// cada tela deve ficar exposta por 5 segundos antes de trocar para a próxima iteração;

#include <stdio.h>
#include <Windows.h>

int main (void) {

	const int tamanho = 10; 
	int i, j;
	int matriz1[tamanho][tamanho];
	int matriz2[tamanho][tamanho];
	
	while(1) {
		for(i=0;i<=tamanho;i++) {
			for(j=0;j<=tamanho;j++) {
				matriz1[i][j] = rand() % 2;
			}
		}
		
		for(i=0;i<=tamanho;i++) {
			for(j=0;j<=tamanho;j++) {
				matriz2[i][j] = rand() % 2;
			}
		}

		for(i=0;i<=tamanho;i++) {
			for(j=0;j<=tamanho;j++) {
				if(matriz1[i][j] == matriz2[i][j]) {
					printf("\t%d", matriz1[i][j]);
				} else {
				printf("\t-");
				}
			}
			printf("\n");
		}
		
		Sleep(5000);
		system("cls");
	}
	
}
