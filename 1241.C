/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Kauan Nascimento Souza Rosa
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1241
Data        : 05/05/2026
Objetivo    : Analisar se o número B se encaixa no final do número A.
Aprendizado : Utilização de strlen para auxiliar o início da comparação. 
-------------------------------------------------------------------------- */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (){
    
    char A[1001], B[1001];
    int N, i, j, encaixa;

    scanf ("%d", &N);
    
    for (i = 0; i < N; i++){
        scanf ("%s %s", A, B);
        
        int lenA = strlen (A);
        int lenB = strlen (B);
        
        if (lenB > lenA){
            printf ("nao encaixa\n");
        } else {
           
           encaixa = 1;
           
            for (j = 0; j < lenB; j++){
                if (A[lenA - lenB + j] != B [j]){
                    encaixa = 0;
                }
            }
            
            if (encaixa == 1){
                printf ("encaixa\n");
            } else {
                printf ("nao encaixa\n");
            }
        }
    }
    return 0;
}
