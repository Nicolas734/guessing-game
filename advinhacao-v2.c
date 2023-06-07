#include <stdio.h>


int main(){
    printf("-------------------------------\n");
    printf("Bem vindo ao jogo de advinhacao\n");
    printf("-------------------------------\n");

    int numerosecreto = 42;
    int chute;
    int tentativa = 1;
    int pontos = 1000;

    while(1){
        printf("Tentativa %d\n", tentativa);
        printf("Qual eh o seu chute? ");
        scanf("%d", &chute);
        printf("seu chute foi %d\n", chute);

        if(chute < 0){
            printf("\nValor invalido, Por favor forneca um numero positivo\n");
            continue;
        }

        int acertou = (chute == numerosecreto);
        int maior = (chute > numerosecreto);

        if(acertou){
            printf("\nParabens! Voce acertou! \n");
            break;
        }

        else if(maior){
            printf("\nSeu chute foi maior do que o numero secreto\n");
        } 
        else{
            printf("\nSeu chute foi menor do que o numero secreto\n");
        }

        tentativa ++;
        int pontosperdidos = (chute - numerosecreto) / 2;
        pontos = pontos - pontosperdidos;

    }

    printf("\nFim de jogo!\n");
    printf("Voce acertou em %d tentaivas", tentativa);
    printf("Total de pontos: %d\n", pontos);
}