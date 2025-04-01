#include <stdio.h>

int main() {
    int tabuleiro[10][10] = {0};

    // Navios horizontais/verticais (como no nível novato)
    for(int i = 0; i < 3; i++) tabuleiro[2][i] = 3;
    for(int i = 3; i <= 5; i++) tabuleiro[i][5] = 3;
    for(int i = 1; i <= 3; i++) tabuleiro[7][i] = 3;
    for(int i = 0; i <= 2; i++) tabuleiro[i][8] = 3;

    // Navios diagonais
    // Navio 5: Diagonal (0,0) -> (2,2)
    for(int i = 0; i < 3; i++) {
        tabuleiro[i][i] = 3;
    }

    // Navio 6: Diagonal (5,3) -> (7,5)
    for(int i = 0; i < 3; i++) {
        tabuleiro[5+i][3+i] = 3;
    }

    // Exibir tabuleiro
    printf("Tabuleiro 10x10 com navios diagonais:\n");
    for(int i = 0; i < 10; i++) {
        for(int j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}