/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Kauan Nascimento Souza Rosa
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1078
Data        : 28/04/2026
Objetivo    : Escrever a tabuada de um número entre 2 e 1000.
Aprendizado : Utilização de vetores para guardar os resultados.
-------------------------------------------------------------------------- */

#include <stdio.h>
#include <stdlib.h>
 
int main() {
 
    int R[10], i, N;
    
    scanf ("%d", &N);
    
    if (N > 2 && N < 1000){
        for (i = 0; i < 10; i++){
            R[i] = (i + 1) * N;
            printf ("%d x %d = %d\n", i + 1, N, R[i]);
        }
    }
    return 0;
}
