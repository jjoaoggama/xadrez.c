#include <stdio.h>

int main() {
    // Movimento da Torre - 5 casas para a Direita usando FOR
    int movimentoTorre = 5;
    printf("Movimento da Torre (5 casas para a Direita):\n");
    for (int i = 1; i <= movimentoTorre; i++) {
        printf("Passo %d: Direita\n", i);
    }

    // Movimento do Bispo - 5 casas na diagonal Cima Direita usando WHILE
    int movimentoBispo = 5;
    int i = 1;
    printf("\nMovimento do Bispo (5 casas para Cima Direita):\n");
    while (i <= movimentoBispo) {
        printf("Passo %d: Cima Direita\n", i);
        i++;
    }

    // Movimento da Rainha - 8 casas para a Esquerda usando DO-WHILE
    int movimentoRainha = 8;
    int j = 1;
    printf("\nMovimento da Rainha (8 casas para a Esquerda):\n");
    do {
        printf("Passo %d: Esquerda\n", j);
        j++;
    } while (j <= movimentoRainha);

    // Movimento do Cavalo - 2 casas para Baixo e 1 casa para Esquerda usando loops aninhados
    // O loop externo será o for, o interno será o while (pode inverter se quiser)
    int passosParaBaixo = 2;
    int passosParaEsquerda = 1;

    printf("\nMovimento do Cavalo (2 casas para Baixo e 1 para Esquerda):\n");

    // Loop externo para passos para baixo
    for (int passoBaixo = 1; passoBaixo <= passosParaBaixo; passoBaixo++) {
        printf("Passo %d: Baixo\n", passoBaixo);
    }

    // Loop interno para passos para esquerda usando while
    int passoEsquerda = 1;
    while (passoEsquerda <= passosParaEsquerda) {
        printf("Passo %d: Esquerda\n", passoEsquerda);
        passoEsquerda++;
    }

    return 0;
}
