/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Kauan Nascimento Souza Rosa
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1028
Data        : 01/06/2026
Objetivo    : Calcular o mínimo divisor comum dos números de figurinhas.
Aprendizado : Recursão para calcular o mdc.
-------------------------------------------------------------------------- */

int mdc(int F1, int F2){
    if (F2 == 0){
        return F1;
    }
    mdc (F2, F1 % F2);
}

#include <stdio.h>

int main()
{
    int F1, F2, N, i;
    
    scanf ("%d", &N);
    
    for (i = 0; i < N; i++){
        scanf ("%d %d", &F1, &F2);
        printf ("%d\n", mdc(F1, F2));
    }

    return 0;
}
