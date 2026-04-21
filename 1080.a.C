/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Kauan Nascimento Souza Rosa
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1080
Data        : 21/04/2026
Objetivo    : Ler 100 números, indicar o maior e sua posição.
Aprendizado : Como ler 100 números, indicar o maior e a posição uitlizando "for" para repetir a avaliação até quando necessário. 
-------------------------------------------------------------------------- */

#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int t, valor, posicao, maior;
    maior = 0;
    posicao = 0;
    
    for (t = 0; t < 100; t++){
        scanf ("%d", &valor);
        
        if (valor > maior){
            maior = valor;
            posicao = t;
        }
    }
    
    printf ("%d\n", maior);
    printf ("%d\n", posicao + 1);
    
    return 0;
}
