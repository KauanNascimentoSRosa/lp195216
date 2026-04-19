/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Kauan Nascimento Souza Rosa
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1071
Data        : 19/04/2026
Objetivo    : Somar os números ímpares entre dois valores inteiros.
Aprendizado : Utilização do comando "while".
-------------------------------------------------------------------------- */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int X, Y, S;
    S = 0;
    scanf ("%d %d", &X, &Y);
    while (X > Y + 1){
        Y++;
        if (Y % 2 != 0){
            S = S + Y;
        }
    }
    while (Y > X + 1){
        X++;
        if (X % 2 != 0){
            S = S + X;
        }
    }    
    
    printf ("%d\n", S);

    return 0;
}
