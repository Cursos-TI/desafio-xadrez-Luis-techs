#include <stdio.h>

// Criando procedimento para a torre

void torre(int casas){
    if (casas > 0){
        printf("Direita...\n");
        torre(casas - 1);
    }
}

// Criando procedimento para o bispo

void bispo(int casas2){
    if (casas2 > 0){
        printf("Cima, Direita...\n");
        bispo(casas2 - 1);
    }
}

// Criando procedimento para rainha

void rainha(int casas3){
    if(casas3 > 0){
        printf("Esquerda...\n");
        rainha(casas3 - 1);
    }
}

// Criando procedimento para o cavalo

void cavalo(int casas4){
    int cavalo2 = 0;
    if (casas4 > 0){
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

int main(){

        int numero = 5;
        torre(numero);  // Chamando o procedimento da torre

        printf("\n"); // Espaçamento entre a impressão da torre e do bispo
        
        int numero2 = 5;
        bispo(numero2);  // Chamando o procedimento do bispo

        printf("\n"); // Espaçamento entre a impressão do bispo e da rainha

        int numero3 = 8;
        rainha(numero3); // Chamando o procedimento da rainha

        printf("\n"); // Espaçamento entre a impressão do rainha e do cavalo

        int numero4 = 3;
        cavalo(numero4); // Chamando o procedimento do cavalo

}

