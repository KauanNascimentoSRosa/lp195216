/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Kauan Nascimento Souza Rosa
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1015
Data        : 18/05/2026
Objetivo    : Calcular a distância entre dois pontos no plano.
Aprendizado : Utilização de função para realizar uma conta e de sqrt para obter a raiz quadrada de um número.
-------------------------------------------------------------------------- */

#include <stdio.h>
#include <math.h>

float quadrado (float n){
    return n * n;
}

int main()
{
    float X1, X2, Y1, Y2, d, A, B;
    
    scanf ("%f %f", &X1, &Y1);
    scanf ("%f %f", &X2, &Y2);
    
    A = X2 - X1;
    B = Y2 - Y1;
    
    float C = quadrado (A);
    float D = quadrado (B);
    d = C + D;
    
    printf ("%.4f\n", sqrt (d));
    
    return 0;
}
