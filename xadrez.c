#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.
    // ENTRADA DOS DADOS
    int casastorre = 5;
    int casabispo = 5;
    int casarainha = 8;

    printf("===== MOVIMENTO DA TORRE ======\n");
    // MOVENDO PARA DIREITA USANDO O LOOP FOR
    for (int i = 0; i < casastorre; i++) {
        printf("Direita\n");
    }

    printf("====== MOVIMENTO DO BISPO ======\n");
    //MOVENDO NA DIAGONAL (CIMA E DIREITA) USANDO LOOP WHILE
    int contadorbispo = 0;
    while (contadorbispo < casabispo){
        printf("Cima, Direita\n");
        contadorbispo++;
    }
    //MOVENDO A RAINHA PARA A ESQUERDA USANDO O LOOP DO-WHILE
    printf("====== MOVIMENTO DA RAINHA ======\n");
    int contadorrainha = 0;
    do {
        printf("Esquerda\n");
        contadorrainha++;
    }while (contadorrainha < casarainha);

    //MOVENDO O CAVALO DUAS VEZES PARA BAIXO E UMA PRA ESQUERDA FOR / WHILE
    printf("====== MOVIMENTO DO CAVALO ======\n");
    int contadorcavalo = 0;
    for (int i = 1; i <= 2; i++) {
        printf("Baixo\n");
    }
    while (contadorcavalo < 1){
        printf("Esquerda\n");
        contadorcavalo++;
    }
    
    return 0;
}
