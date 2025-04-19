#include <stdio.h>

int main() {
    /*
    -> Movimento de Peças de Xadrez - Nível Novato
    -> Codado por Anderson Ferreira Fontes.
    */

    printf("***MOVIMENTO DE PEÇAS DO XADREZ***\n\n"); // Título.
    
    // I. Mover a torre 5 casas para a direita - Estrutura "While".
    int t = 0; // Declarando variável de posição da torre.
    while (t <= 5) {
        printf("Torre para a direita, da linha 0 até %d\n", t); // Imprime a posição final da torre.
        t++; // Incremento em uma casa.
    }
    printf("\n"); // Espaço para separar as peças
    
    
    // II. Mover bispo 5 casas para cima e para a esquerda - Estrutura "For".
    for (int cima = 0, direita = 0; cima <= 5 && direita <= 5; cima++, direita++) { // Variáveis "cima" e "direita" declaradas internamente.
        printf("Bispo na diagonal: linha %d, coluna %d\n", cima, direita);
    }
    printf("\n"); // Espaço para separar as peças


    // III. Mover rainha 8 casas para a esquerda - Estrutura "Do-While".
    int r = 8; // Declarando variável de posição da Rainha.
    do {
        printf("Rainha para a esquerda: %d\n", r); // Imprime a posição final da torre.
        r--;
    } while (r >= 0);
    printf("\n"); // Espaço para separar as peças

    printf("FIM DO JOGO!");
    return 0;
}