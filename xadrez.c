#include <stdio.h>

// Criando o procedimento para o movimento da Torre;

// Cima;
void torre1(int casas){
    if (casas > 0){
        printf("Cima...\n");
        torre1(casas - 1);
    }
}

// Baixo;
void torre2(int casas){
    if (casas > 0){
        printf("Baixo...\n");
        torre2(casas - 1);
    }
}

// Direita;
void torre3(int casas){
    if (casas > 0){
        printf("Direita...\n");
        torre3(casas - 1);
    }
}

// Esquerda
void torre4(int casas){
    if (casas > 0){
        printf("Esquerda...\n");
        torre4(casas - 1);
    }
}

// Criando o procedimento para o movimento do Bispo;

// Cima, Direita;
void bispo1(int casas){
    if (casas > 0){
        printf("Cima, Direita...\n");
        bispo1(casas - 1);
    }
}

// Cima, Esquerda;
void bispo2(int casas){
    if (casas > 0){
        printf("Cima, Esquerda...\n");
        bispo2(casas - 1);
    }
}

// Baixo, Direita;
void bispo3(int casas){
    if (casas > 0){
        printf("Baixo, Direita...\n");
        bispo3(casas - 1);
    }
}

// Baixo, Esquerda;
void bispo4(int casas){
    if (casas > 0){
        printf("Baixo, Esquerda...\n");
        bispo4(casas - 1);
    }
}

// Criando o procedimento para o movimento da Rainha;

// Cima;
void rainha1(int casas){
    if (casas > 0){
        printf("Cima...\n");
        rainha1(casas - 1);
    }
}

// Baixo;
void rainha2(int casas){
    if (casas > 0){
        printf("Baixo...\n");
        rainha2(casas - 1);
    }
}

// Cima, Direita;
void rainha3(int casas){
    if (casas > 0){
        printf("Cima, Direita...\n");
        rainha3(casas - 1);
    }
}

// Cima, Esquerda
void rainha4(int casas){
    if (casas > 0){
        printf("Cima, Esquerda...\n");
        rainha4(casas - 1);
    }
}

// Baixo, Direita
void rainha5(int casas){
    if (casas > 0){
        printf("Baixo, Direita...\n");
        rainha5(casas - 1);
    }
}

// Baixo, Esquerda
void rainha6(int casas){
    if (casas > 0){
        printf("Baixo, Esquerda...\n");
        rainha6(casas - 1);
    }
}

// Criando o procedimento para o movimento do Cavalo;

// Cima, Direita;
void cavalo1(int casas){
    int cavalo2 = 0;
    if (casas > 0){
        for(int cavalo = 0; cavalo < 1; cavalo++){
            while (cavalo2 < 2)
            {
                printf("Cima..\n");
                cavalo2++;
            }
            printf("Direita...");
            
        }
    }
}

// Cima, Esquerda;
void cavalo2(int casas){
    int cavalo2 = 0;
    if (casas > 0){
        for(int cavalo = 0; cavalo < 1; cavalo++){
            while (cavalo2 < 2)
            {
                printf("Cima..\n");
                cavalo2++;
            }
            printf("Esquerda...");
            
        }
    }
}

// Baixo, Direita;
void cavalo3(int casas){
    int cavalo2 = 0;
    if (casas > 0){
        for(int cavalo = 0; cavalo < 1; cavalo++){
            while (cavalo2 < 2)
            {
                printf("Baixo..\n");
                cavalo2++;
            }
            printf("Direita...");
            
        }
    }
}

// Baixo, Esquerda
void cavalo4(int casas){
    int cavalo2 = 0;
    if (casas > 0){
        for(int cavalo = 0; cavalo < 1; cavalo++){
            while (cavalo2 < 2)
            {
                printf("Baixo..\n");
                cavalo2++;
            }
            printf("Esquerda...");
            
        }
    }
}


// Inicio da estrutura do código;
int main(){
    int numeroCavalo = 3;
    int numero;
    int opcao;
    int direcao;


// Inicio da estrutura de repetição;   
do
{
    // Criação do menu interativo;
    printf("\n");
    printf("** MENU XADREZ **\n");
    printf("Escolha uma peça para mover\n");
    printf("[1] - Torre\n");
    printf("[2] - Bispo\n");
    printf("[3] - Rainha\n");
    printf("[4] - Cavalo\n");
    printf("Escolha uma das opções acima: ");
    scanf("%d", &opcao);
    printf("\n");

    switch(opcao){
        case 1:
            printf("Escolha a direção e a quantidade de casas para andar\n");
            printf("[1] - Cima\n");
            printf("[2] - Baixo\n");
            printf("[3] - Direita\n");
            printf("[4] - Esquerda\n");
            printf("Escolha a direção: ");
            scanf("%d", &direcao);
            printf("Escolha a quantidade de casas para andar: ");
            scanf("%d", &numero);
            printf("\n");

            switch(direcao){
                case 1:
                    torre1(numero);
                    break;
                case 2:
                    torre2(numero);
                    break;
                case 3:
                    torre3(numero);
                    break;
                case 4:
                    torre4(numero);
                    break;
                default:
                printf("Opção invalida...\n");
                
            }
            break;
        case 2:
            printf("Escolha a direção e a quantidade de casas para andar\n");
            printf("[1] - Cima, Direita\n");
            printf("[2] - Cima, Esquerda\n");
            printf("[3] - Baixo, Direita\n");
            printf("[4] - Baixo, Esquerda\n");
            printf("Escolha a direção: ");
            scanf("%d", &direcao);
            printf("Escolha a quantidade de casas para andar: ");
            scanf("%d", &numero);
            printf("\n");

            switch(direcao){
                case 1: 
                    bispo1(numero);
                    break;
                case 2:
                    bispo2(numero);
                    break;
                case 3:
                    bispo3(numero);
                    break;
                case 4:
                    bispo4(numero);
                    break;
                default:
                printf("Opção invalida...\n");  
            }
            break;
        case 3: 
            printf("Escolha a direção e a quantidade de casas para andar\n");
            printf("[1] - Cima\n");
            printf("[2] - Baixo\n");
            printf("[3] - Cima, Direita\n");
            printf("[4] - Cima, Esquerda\n");
            printf("[5] - Baixo, Direita\n");
            printf("[6] - Baixo, Esquerda\n");
            printf("Escolha a direção: ");
            scanf("%d", &direcao);
            printf("Escolha a quantidade de casas para andar: ");
            scanf("%d", &numero);
            printf("\n");

            switch(direcao){
                case 1:
                    rainha1(numero);
                    break;
                case 2:
                    rainha2(numero);
                    break;
                case 3:
                    rainha3(numero);
                    break;
                case 4:
                    rainha4(numero);
                    break;
                case 5:
                    rainha5(numero);
                    break;
                case 6:
                    rainha6(numero);
                    break;
                default:
                printf("Opção invalida...\n");
            }
            break;
        case 4:
            printf("Escolha a direção para andar\n");
            printf("[1] - Cima, Direita\n");
            printf("[2] - Cima, Esquerda\n");
            printf("[3] - Baixo, Direita\n");
            printf("[4] - Baixo, Esquerda\n");
            printf("Escolha a direção: ");
            scanf("%d", &direcao);
            printf("\n");

            switch(direcao){
                case 1:
                    cavalo1(numeroCavalo);
                    printf("\n");
                    break;
                case 2:
                    cavalo2(numeroCavalo);
                    printf("\n");
                    break;
                case 3:
                    cavalo3(numeroCavalo);
                    printf("\n");
                    break;
                case 4:
                    cavalo4(numeroCavalo);
                    printf("\n");
                    break;
                default:
                printf("Opção invalida...\n");


            }
            break;
            

    }
} while (opcao != 6);


}
