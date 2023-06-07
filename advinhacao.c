#include <stdio.h>


int main(){
    // cabeçalho do jogo
    printf("-------------------------------\n");
    printf("Bem vindo ao jogo de advinhacao\n");
    printf("-------------------------------\n");

    int numero_secreto = 42;
    int chute;
    int count = 3;
    for (int i = 1; i <= count; i++)
    {

        printf("\nTentativa %d de %d\n", i, count);
        printf("Qual eh o seu chute? ");
        scanf("%d", &chute);
        printf("seu chute foi %d", chute);
        int acertou = (chute == numero_secreto);
        if(acertou){
            printf("\nParabens! Voce acertou!\n");
        }else{
            int maior = (chute > numero_secreto);
            if(maior){
                printf("\nSeu chute foi maior do que o numero secreto\n");
            } else{
                printf("\nSeu chute foi menor do que o numero secreto\n");
            }
        }
    }

    printf("\nFim de jogo!\n");

}

