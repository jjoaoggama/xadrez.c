#include <stdio.h>

int main() {
    // Simula o movimento da Torre - 5 casas para a Direita usando FOR
    int movimentoTorre = 5;
    printf("Movimento da Torre (5 casas para a Direita):\n");
    for (int i = 1; i <= movimentoTorre; i++) {
        printf("Passo %d: Direita\n", i);
    }

    // Simula o movimento do Bispo - 5 casas na diagonal Cima Direita usando WHILE
    int movimentoBispo = 5;
    int i = 1;
    printf("\nMovimento do Bispo (5 casas para Cima Direita):\n");
    while (i <= movimentoBispo) {
        printf("Passo %d: Cima Direita\n", i);
        i++;
    }

    // Simula o movimento da Rainha - 8 casas para a Esquerda usando DO-WHILE
    int movimentoRainha = 8;
    int j = 1;
    printf("\nMovimento da Rainha (8 casas para a Esquerda):\n");
    do {
        printf("Passo %d: Esquerda\n", j);
        j++;
    } while (j <= movimentoRainha);

    return 0;
}
