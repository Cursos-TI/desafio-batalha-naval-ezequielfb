#include <stdio.h>

int main() {
    // Matriz do tabuleiro 10x10
    int tabuleiro[10][10];
    
    // Vetores dos navios (tamanho 3)
    int navio1[3];
    int navio2[3];
    
    // Coordenadas dos navios
    int linha_navio1 = 2;
    int coluna_navio1 = 1;
    int linha_navio2 = 5;
    int coluna_navio2 = 7;
    
    int linha, coluna, i;
    
    // Inicializa o tabuleiro com água (0)
    for (linha = 0; linha < 10; linha++) {
        for (coluna = 0; coluna < 10; coluna++) {
            tabuleiro[linha][coluna] = 0;
        }
    }
    
    // Inicializa os vetores dos navios com valor 3
    for (i = 0; i < 3; i++) {
        navio1[i] = 3;
        navio2[i] = 3;
    }
    
    // Posiciona navio1 horizontalmente
    for (i = 0; i < 3; i++) {
        tabuleiro[linha_navio1][coluna_navio1 + i] = navio1[i];
    }
    
    // Posiciona navio2 verticalmente
    for (i = 0; i < 3; i++) {
        tabuleiro[linha_navio2 + i][coluna_navio2] = navio2[i];
    }
    
    // Exibe o tabuleiro
    printf("   ");
    for (coluna = 0; coluna < 10; coluna++) {
        printf("%2d ", coluna);
    }
    printf("\n");
    
    for (linha = 0; linha < 10; linha++) {
        printf("%2d ", linha);
        for (coluna = 0; coluna < 10; coluna++) {
            printf("%2d ", tabuleiro[linha][coluna]);
        }
        printf("\n");
    }
    
    return 0;
}