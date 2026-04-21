/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Kauan Nascimento Souza Rosa
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1080
Data        : 21/04/2026
Objetivo    : Ler 100 números, indicar o maior e sua posição utilizando vetor.
Aprendizado : Como usar vetor para ler números, indicar o maior e a posição dele em conjunto com o "for". 
-------------------------------------------------------------------------- */

include <stdio.h>
#include <stdlib.h>

int main()
{
    int V[100];
    int t, maior, posicao;

    
    for (t = 0; t < 100; t++){
        scanf ("%d", &V[t]);
    }
    
    maior = V[0];
    posicao = 0;
    
    for (t = 0;t < 100; t++){
        if (V[t] > maior){
            maior = V[t];
            posicao = t;
        }
    }
    
    printf ("%d\n", maior);
    printf ("%d\n", posicao + 1);
    
    return 0;
}
