#include <stdio.h>

// Desafio de Xadrez 
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
    // Implementação de Movimentação do Bispo utilizando While
    // O bispo anda na diagonal
    // Ele vai andar 5 casas na diagonal para cima e para a direita

    int movimentoBispo = 5;  // número de casas que o bispo vai andar
    int contador = 1;        // contador para o while

    printf("\n=== Movimento do BISPO ===\n");  

    // Estrutura WHILE: repete enquanto a condição for verdadeira
    while (contador <= movimentoBispo) {
        printf("Cima, Direita\n");  // movimento do bispo (diagonal)
        contador++;                 // incrementa o contador (senão o loop seria infinito)
    }
    
    // Implementação de Movimentação da Torre utilizando For
    // A torre anda em linha reta, na horizontal ou vertical
    // Ela vai andar 5 casas para a direita

    int movimentoTorre = 5;  // variável que armazena o número de casas da torre

    printf("=== Movimento da TORRE ===\n");  

    // Estrutura de repetição FOR: usada quando sabemos quantas vezes repetir
    for (int i = 1; i <= movimentoTorre; i++) {
        printf("Direita\n");  // imprime a direção do movimento
    }

    // Implementação de Movimentação da Rainha utilizando Do-While
    // A rainha pode andar em qualquer direção
    // Ela vai andar 8 casas para a esquerda

    int movimentoRainha = 8;  // número de casas que a rainha vai andar
    int passo = 1;            // variável de controle do loop

    printf("\n=== Movimento da RAINHA ===\n"); 

    // Estrutura DO-WHILE: executa pelo menos uma vez antes de verificar a condição
    do {
        printf("Esquerda\n");  // imprime a direção do movimento
        passo++;               // incrementa o contador
    } while (passo <= movimentoRainha);  // condição de repetição


    return 0;
}
