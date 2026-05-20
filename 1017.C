/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Kauan Nascimento Souza Rosa
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1017
Data        : 19/05/2026
Objetivo    : Calcular a quantidade de litros que serão gastos em uma viagem em função da velocidade e do tempo.
Aprendizado : Utilização de função para expressar uma conta.
-------------------------------------------------------------------------- */

#include <stdio.h>

float calcularLitros(int tempo, int velocidade){
    return (tempo * velocidade) / 12.0;
}

int main()
{
    int t, v;
    scanf ("%d", &t);
    scanf ("%d", &v);
    
    printf ("%.3f\n", calcularLitros(t, v));

    return 0;
}
