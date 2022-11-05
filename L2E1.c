// Dado um pa�s A, com 5000000 de habitantes e uma taxa de natalidade de 3% ao ano, e um pa�s B com 7000000 de habitantes e uma taxa de natalidade de 2% ao ano, 
//escrever um programa em C que seja capaz de calcular e mostrar o tempo necess�rio para que a popula��o do pa�s A ultrapasse a popula��o do pa�s B. (Utilize a estrutura while).

int main(void) {
    float a = 5000000, b = 7000000; 
    int anos = 0;
    
    while(a<b) {
        a = a + a * 0.03;
        b = b + b * 0.02;
        anos += 1;
    }
    printf("%d", anos);
}
