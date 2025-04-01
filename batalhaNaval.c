#include <stdio.h>

int main() {
    int tabuleiro[10][10] = {0};

    // Habilidade "Cone" (centro em (4,4))
    for(int i = 4-1; i <= 4+1; i++) {
        for(int j = 4-1; j <= 4+1; j++) {
            if(i >= 0 && i < 10 && j >= 0 && j < 10) {
                tabuleiro[i][j] = 2; // 2 = Cone
            }
        }
    }

    // Habilidade "Cruz" (linha 2 e coluna 6)
    for(int i = 0; i < 10; i++) {
        tabuleiro[2][i] = 3; // 3 = Cruz
        tabuleiro[i][6] = 3;
    }

    // Habilidade "Octaedro" (padrão matemático)
    for(int i = 0; i < 10; i++) {
        for(int j = 0; j < 10; j++) {
            if((i + j) % 3 == 0) {
                tabuleiro[i][j] = 4; // 4 = Octaedro
            }
        }
    }

    // Exibir tabuleiro com legendas
    printf("Tabuleiro com habilidades (0=Agua, 2=Cone, 3=Cruz, 4=Octaedro):\n");
    for(int i = 0; i < 10; i++) {
        for(int j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}
