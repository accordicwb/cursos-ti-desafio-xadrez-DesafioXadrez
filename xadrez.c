#include <stdio.h>

// Desafio de Xadrez
// Objetivo: utilizar estruturas de repetição para simular
// o movimento de três peças: Bispo, Torre e Rainha.

// Cada peça usa uma estrutura de repetição diferente:
// - Bispo  → while
// - Torre  → for
// - Rainha → do-while

int main() {

    // =====================================================
    //               MOVIMENTO DO BISPO (WHILE)
    // =====================================================
    // O bispo se move sempre na diagonal.
    // Neste exemplo, ele vai andar 5 casas na diagonal
    // para cima e para a direita.

    int movimentoBispo = 5;   // número total de casas
    int contador = 1;         // controle do while

    printf("\n=== Movimento do BISPO ===\n");

    // Estrutura WHILE: executa enquanto a condição for verdadeira
    while (contador <= movimentoBispo) {
        printf("Cima, Direita\n");   // movimento diagonal
        contador++;                  // incrementa para evitar loop infinito
    }


    // =====================================================
    //               MOVIMENTO DA TORRE (FOR)
    // =====================================================
    // A torre anda em linha reta, horizontal ou vertical.
    // Aqui ela vai andar 5 casas para a direita.

    int movimentoTorre = 5;   // número de casas para mover

    printf("\n=== Movimento da TORRE ===\n");

    // Estrutura FOR: ideal quando sabemos exatamente
    // quantas vezes queremos repetir a ação
    for (int i = 1; i <= movimentoTorre; i++) {
        printf("Direita\n");
    }


    // =====================================================
    //              MOVIMENTO DA RAINHA (DO-WHILE)
    // =====================================================
    // A rainha pode andar em qualquer direção.
    // Neste caso, ela andará 8 casas para a esquerda.

    int movimentoRainha = 8;  // número total de casas
    int passo = 1;            // controle do loop

    printf("\n=== Movimento da RAINHA ===\n");

    // Estrutura DO-WHILE: executa o bloco ao menos uma vez
    do {
        printf("Esquerda\n");
        passo++;              // incrementa o contador
    } while (passo <= movimentoRainha);


    // =====================================================
    //                      FIM DO PROGRAMA
    // =====================================================
    return 0;
}
