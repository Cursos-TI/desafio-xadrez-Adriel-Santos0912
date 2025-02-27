#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

    /*----Variaveis----*/
    //bispo anda 5 casas na diagonal (cima, direita)
    int bispo = 1;
    //torre anda 5 casas para a Direita
    int torre = 1;

    

    /*----Loops----*/
    
    //bispo move 5 casas para cima e para direita em do while
    printf("\n\nBispo Move:\n");
    do
    {
        printf("cima\n");
        printf("direita\n");
        bispo++;
    } while (bispo <= 5);//repete 5 vezes

    //Torre move 5 casas para a direita em while
    printf("\n\nTorre Move:\n");
    while (torre <= 5)
    {
        printf("direita\n");
        torre++;
    }
    
    //rainha move 8 casas para a esquerda em for
    printf("\n\nRainha Move:\n");
    for (int rainha = 0; rainha < 8; rainha++)
    {
        printf("Esquerda\n");
    }
    

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}