/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Kauan Nascimento Souza Rosa
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1046
Data        : 19/05/2026
Objetivo    : Calcular a duração de um jogo com base na hora inicial e final.
Aprendizado : Utilização de função para calcular o tempo e uso de printf para escrever uma frase.
-------------------------------------------------------------------------- */

#include <stdio.h>

int calcularDuracao(int inicio, int fim){
    if (inicio >= fim){
        return fim - inicio + 24;
    } else {
        return fim - inicio;
    }
}

int main()
{
    int i, f;
    
    scanf ("%d %d", &i, &f);
    printf ("O JOGO DUROU %d HORA(S)\n", calcularDuracao(i, f));

    return 0;
}
