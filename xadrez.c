#include <stdio.h>

int main() {
    // Número de casas que cada peça vai se mover
    int casasTorre = 5;   // Torre move 5 casas para a direita
    int casasBispo = 5;   // Bispo move 5 casas na diagonal Cima-Direita
    int casasRainha = 8;  // Rainha move 8 casas para a esquerda

    int i; // Variável de controle para os loops

    // =========================
    // Movimento da Torre
    // =========================
    printf("Movimento da Torre:\n");
    // Usando o loop FOR
    for(i = 1; i <= casasTorre; i++) {
        printf("Direita\n");
    }

    printf("\n"); // Espaço entre os movimentos

    // =========================
    // Movimento do Bispo
    // =========================
    printf("Movimento do Bispo:\n");
    // Usando o loop WHILE
    i = 1;
    while(i <= casasBispo) {
        printf("Cima, Direita\n");
        i++;
    }

    printf("\n"); // Espaço entre os movimentos

    // =========================
    // Movimento da Rainha
    // =========================
    printf("Movimento da Rainha:\n");
    // Usando o loop DO-WHILE
    i = 1;
    do {
        printf("Esquerda\n");
        i++;
    } while(i <= casasRainha);

    return 0;
}