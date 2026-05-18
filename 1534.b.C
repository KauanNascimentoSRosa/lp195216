/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Kauan Nascimento Souza Rosa
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1534
Data        : 18/05/2026
Objetivo    : Criar uma matriz, de tamanho NxN, em que a diagonal da esquerda para a direita possui o número 1, a outra diagonal possui o número 2, e os demais lugares o número 3.
Aprendizado : Utilização de ponteiros ao invés de matriz. 
-------------------------------------------------------------------------- */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    
    int N, i, j, M[70][70];
    
    while (scanf ("%d", &N) != EOF) {
        for (i = 0; i < N; i++){
            for (j = 0; j < N; j++){
                
                int *p = &M[i][j];
                
                if (i == j){
                    *p = 1;
                }
                
                if (i + j == N - 1){
                    *p = 2;
                }
                
                if (i != j && i + j != N - 1){
                    *p = 3;
                }
                
                printf ("%d", *p);
            }
            
            printf ("\n");
        }
    }

    return 0;
}
