/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Kauan Nascimento Souza Rosa
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1013
Data        : 11/04/2026
Objetivo    : Imprimir "MAIOR eh o maior".
Aprendizado : Fórmula para descobrir o maior número e declaração de inteiros.
-------------------------------------------------------------------------- */

#include <stdio.h>

int main()
{
    int A, B, C, AB, MAIOR;
    scanf ("%d %d %d", &A, &B, &C);
    AB = (A + B + abs (A-B))/2;
    MAIOR = (AB + C + abs (AB-C))/2;

    printf ("%d eh o maior\n", MAIOR);
    return 0;
}
