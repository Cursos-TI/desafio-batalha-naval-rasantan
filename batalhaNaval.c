#include <stdio.h>

int main() {
    int tabuleiro[10][10] = {0}; // Tabuleiro 10x10 inicializado com água (0)

    // Posicionar 4 navios de tamanho 3 (2 horizontal, 2 vertical)
    // Navio 1: Horizontal na linha 2, colunas 0-2
    for(int i = 0; i < 3; i++) {
        tabuleiro[2][i] = 3;
    }

    // Navio 2: Vertical na coluna 5, linhas 3-5
    for(int i = 3; i <= 5; i++) {
        tabuleiro[i][5] = 3;
    }

    // Navio 3: Horizontal na linha 7, colunas 1-3
    for(int i = 1; i <= 3; i++) {
        tabuleiro[7][i] = 3;
    }

    // Navio 4: Vertical na coluna 8, linhas 0-2
    for(int i = 0; i <= 2; i++) {
        tabuleiro[i][8] = 3;
    }

    // Exibir tabuleiro
    printf("Tabuleiro 10x10 (0=Água, 3=Navio):\n");
    for(int i = 0; i < 10; i++) {
        for(int j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}