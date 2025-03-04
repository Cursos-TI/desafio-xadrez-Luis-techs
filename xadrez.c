#include <stdio.h>

// Codigo feito para o desafio do Xadrez, onde faremos o movimento das seguintes peças: Torre, Bispo, Rainha e Cavalo; - 04/03/2025
// Implementamos um menu interativo para ficar mais divertido para o usuário; - 04/03/2025
// Utilizamos a estrutura Do-While para fazer o menu interavivo, dando as o chance do jogador escolher a peça ou se deseja sair do jogo; - 04/03/2025
// Utilizamos a estrutura de repetição While para simular a quantidade de casas que foi andada de acordo com a escolha do jogador; - 04/03/2025
// Tentativa de fazer um jogo de xadrez de forma interativa; - 04/03/2025




int main(){

    int opcao;
    int casas;
    int j;
    int num = 1;

    do{

        printf("*** MOVIMENTO DO XADREZ ***\n");
        printf("[1] - Mover a Torre...\n");
        printf("[2] - Mover o Bispo...\n");
        printf("[3] - Mover a Rainha...\n");
        printf("[4] - Mover o Cavalo...\n");
        printf("[5] - Sair do jogo...\n");
        printf("Digite uma das opções acima: ");
        scanf("%d", &opcao);
        printf("\n");

        switch(opcao){
            case 1:

                printf("Digite a quantidade de casas que deseja andar: ");
                scanf("%d", &casas);

                while(casas > 0){
                    printf("Frente...\n");
                    casas--;
                }

                printf("\n");
                break;
                

            case 2: 
                printf("Digite a quantidade de casas que deseja andar: ");
                scanf("%d", &casas);

                while(casas > 0){
                    printf("Cima, Direita...\n");
                    casas--;
                }

                printf("\n");
                break;
                

            case 3:
                printf("Digite a quantidade de casas que deseja andar: ");
                scanf("%d", &casas);
                    
                while(casas > 0){
                    printf("Esquerda...\n");
                    casas--;
                }

                printf("\n");
                break;

            case 4: 
                while(num--){
                    for (j = 0; j < 2; j++){
                        printf("Cima...\n");
                    }
                printf("Direita...\n");
            }

            printf("\n");
            break;
        
        }

    }while(opcao != 5);

    printf("Saindo do jogo...");

}

