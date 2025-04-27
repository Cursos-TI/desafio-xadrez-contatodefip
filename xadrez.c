#include <stdio.h>

void moverTorre(int t){ // Recursividade para o movimento da torre
    if (t > 0){
        moverTorre(t - 1);
        printf("Torre para a direita\n");
    }
}

void moverBispo(int bispoCima, int bispoDireita) { // Recursividade para mover o bispo
    if (bispoCima > 0 && bispoDireita > 0) {
        moverBispo(bispoCima - 1, bispoDireita - 1);
        printf("Bispo na diagonal: cima, linha %d, direita, coluna %d\n", bispoCima + 1, bispoDireita + 1);
    }
}

void moverRainha(int r){ // Recursividade para mover a rainha
    if (r > 0){
        printf("Rainha para a esquerda\n");
        moverRainha(r - 1);
    }
}

int main() {
    /*
    -> Movimento de Peças de Xadrez - Nível Mestre
    -> Codado por Anderson Ferreira Fontes.
    */

    printf("***MOVIMENTO DE PEÇAS DO XADREZ***\n\n"); // Título.
    
    // I. Mover a torre 5 casas para a direita com recursividade.
    int t = 5; // Declarando variável de posição da torre.
    printf("******* MOVIMENTO DA TORRE *******\n\n");
    printf("Posição inicial da torre: Linha 2, coluna 1:\n\n"); // Definindo a posição inicial da torre.
    moverTorre(5); // Invocando a recursividade para mover a torre.
    printf("\n"); // Espaço para separar as peças.
    
    
    // II. Mover bispo 5 casas para cima e para a direita (comentário de direção corrigido) - Estrutura "For".
    printf("******* MOVIMENTO DO BISPO *******\n\n");
    int bispoCima = 5, bispoDireita = 5; // Declarando as variáveis de posição do bispo.
    printf("Posição inicial do bispo: Linha 1, Coluna 1\n\n"); // Dfinindo a posição inicial do bispo
    moverBispo(5, 5); //  Invocando a recursividade para o bispo e passando as variáveis
    printf("\n"); // Espaço para separar as peças


    // III. Mover rainha 8 casas para a esquerda - Estrutura "Do-While".
    printf("******* MOVIMENTO DA RAINHA *******\n\n");
    int r = 8; // Declarando variável de posição da Rainha.
    printf("Posição inicial da rainha: Linha 4, coluna 1 \n\n"); // Posição inicial da rainha
    moverRainha(8); // Invocando a recursividade para mover a rainha
    printf("\n"); // Espaço para separar as peças

    // IV. Mover O cavalo Duas casas para baixo e uma para a esquerda - Estrutura "For e While" aninhadas.
    
    printf("******* MOVIMENTO DO CAVALO *******\n\n");
    printf("Posição inicial do cavalo -> Coluna 5, Linha 3:\n\n");
    
    // Variáveis para indicar a posição do cavalo
    int cavaloBaixo;
    int cavaloEsquerda;

    // Loop avançado (complexo) para representar os movimentos do cavalo
    for (cavaloBaixo = 3, cavaloEsquerda = 1; cavaloBaixo > 1 && cavaloEsquerda >= 0; cavaloBaixo--, cavaloEsquerda--){
	    printf("Cavalo para baixo \n");
    }
    printf("Cavalo para a esquerda \n\n");
    printf("Posição final do cavalo -> Coluna 4, Linha 1");
    printf("\n\n"); // Espaço para separar as peças

    printf("FIM DO JOGO!"); 
    return 0;
}
