#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

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

void movtorre(int num){
    if (num > 0){
        printf(" - Direita \n");
        movtorre(num - 1);
    }
}
void movbispo(int num){
    if (num > 0) {
        for (int i = 0; i < 1; i++) {
            printf(" - Cima, ");
            for ( int j = 0; j < 1; j++){
                printf("Direita\n");
            }
            movbispo (num - 1);
        }
    }
}
void movrainha(int num){
    if (num > 0){
        printf(" - Esquerda\n");
        movrainha(num - 1);
    }
}

void movcavalo(int num){
    for (int i = 0; i < num; i++) {
        for (int j = 1; j <= 3; j++){
            if (j <= 2){
                printf(" - Cima\n");
                continue;
            }
        printf(" - Direita\n");
        break;
        }
    }
}

int main () {
    int casastorre = 5;
    int casasbispo = 5;
    int casasrainha = 8;
    int contadorcavalo = 1;

    printf("===== MOVIMENTO DA TORRE ======\n");
    // MOVENDO PARA DIREITA USANDO A RECURSIVIDADE
    movtorre(casastorre);

    printf("====== MOVIMENTO DO BISPO ======\n");
    //MOVENDO NA DIAGONAL (CIMA E DIREITA) USANDO RECURSIVIDADE E FOR ANINHADO
    movbispo(casasbispo);

    printf("====== MOVIMENTO DA RAINHA ======\n");
    //MOVENDO A RAINHA PARA A ESQUERDA USANDO RECURSIVIDADE
    movrainha(casasrainha);

    printf("====== MOVIMENTO DO CAVALO ======\n");
    //MOVENDO O CAVALO EM FORMATO DE "L", USANDO RECURSIVIDADE, FOR E CONTINUE E BREAK
    movcavalo(contadorcavalo);


    return 0;
}
