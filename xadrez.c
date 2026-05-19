#include <stdio.h>
#include <stdbool.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

// Função recursiva para movimento da torre

void movimentoTorre(int movimento) {
    if (movimento >= 1) {
        printf("\nDireita");

        movimentoTorre(movimento - 1);
    }
}

// Função recursiva para movimento do bispo

void movimentoBispo(int movimento) {
    int movimentoHorizontal = 1;

    if (movimento >= 1) {
        for (int movimentoVertical = 1; movimentoVertical >= 1; movimentoVertical--) {
        while (movimentoHorizontal == 1) {
            printf("\nDireita");
            movimentoHorizontal --;
        }
        printf(", Cima");
        }

        movimentoBispo(movimento - 1);  
    }
    
}

// Função recursiva para movimento da rainha

void movimentoRainha(int movimento) {
    if (movimento >= 1) {
        do {

        printf("\nEsquerda");
        movimento --;
        
    } while (movimento >= 1);

    movimentoRainha(movimento - 1);
    }
}

int main() {                                         // Jogo de Xadrez e C

    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.              

    // Variáveis para as peças do jogo
    char peao[50] = "Move-se somente para a frente, uma casa por vez.";
    char torre[100] = "Move-se em linha reta (horizontal e vertical), quantas casas quiser.";
    char cavalo[150] = "Move-se em 'L' (duas casas em uma direção e uma casa em outra diracao), pode pular sobre outras peças";
    char bispo[50] = "Move-se em diagonal, quantas casas quiser.";
    char rainha[100] = "Move-se em qualquer direcao, quantas casas quiser, e a peca mais poderosa do jogo.";
    char rei[50] = "Move-se uma casa por vez em qualquer direcao.";

    // While para manter o sistema funcionando até que o usuário escolha finalizar o jogo
    bool play = true;
    int opcaoMenu;

    while (play == true) {
        
        // Menu do jogo
        printf("\n==================================== Bem-vindo(a) ao jogo de xadrez online! ====================================\n");
        printf("\n1. Regras do jogo\n2. Jogar\n3. Creditos\n4. Sair do jogo\nPara começar, digite o que deseja fazer: ");
        scanf("%d", &opcaoMenu);

        switch (opcaoMenu)
        {
        case 1:
            // Como jogar xadrez
            printf("\nO xadrez é um jogo de estratégia entre dois jogadores (peças brancas e pretas) em um tabuleiro, com 16 peças para cada lado. O objetivo principal é o xeque-mate, ou seja, ameaçar o rei adversário de captura inevitável. As brancas começam e os jogadores alternam turnos, movendo uma peça por vez.\n");
            printf("\nAqui estão os movimentos de cada peça: \n");
            printf("\nPEÃO: %s", peao);
            printf("\nTORRE: %s", torre);
            printf("\nCAVALO: %s", cavalo);
            printf("\nBISPO: %s", bispo);
            printf("\nRAINHA: %s", rainha);
            printf("\nREI: %s", rei);
            break;

        case 2: 
            // Jogo 
            printf("\n==================================== Jogo iniciado! ====================================\n");

            // Movimento da torre utilizando for
            printf("\nTorre preta está se movendo!\n");
            movimentoTorre(5);
            printf("\n");
            printf("\nTorre preta avançou 5 casas à direita!\n");

            // Movimento do bispo utilizando while
            printf("\nBispo branco está se movendo!\n");
            movimentoBispo(5);
            printf("\n");
            printf("\nBispo branco avançou 5 casas na diagonal para cima à direita!\n");
    
            // Movimento da rainha utilizando do-while
            printf("\nRainha preta está se movendo!\n");
            movimentoRainha(8);
            printf("\n");
            printf("\nRainha preta avançou 8 casas à esquerda!\n");

            // Movimento do cavalo utilizando loops alinhados
            printf("\nCavalo branco está se movendo!\n");

            // Loops alinhados com múltiplas variáveis para movimento do cavalo

            for (int i = 1, j = 1; j == 1; j++) {
                do {
                    printf("\nCima");
                    i ++;
                } while (i <= 2);

                printf("\nDireita");
                printf("\n");
            }
            printf("\nCavalo brando avançou 2 casas para cima e uma casa à direita!");

            printf("\n");
            printf("\nJogo finalizado!\n");
            printf("\n");
            play = false;
            break;

        case 3: 
            // Créditos
            printf("\n==================================== Créditos ====================================\n");
            printf("\nBem-vindo à aba dos créditos!\nO intuito dessa aba é dar créditos ao criador desse sistema, Wesley Amaral de Carvalho. Esse sistema foi feito durante sua primeira graduação, bacharelado em Ciências da Computação, na instituição Newton Paiva Wyden, Alípio de Melo polo EAD.");
            break;

        case 4: 
            // Encerrar o jogo
            printf("\nSaindo...");
            printf("\nJogo encerrado!");
            play = false;
            break;

        default:
            printf("\nOpcao invalida! Favor escolher uma opcao de 1 a 4!");
            break;
        }
    }

    return 0;
}
