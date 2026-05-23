/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Kauan Nascimento Souza Rosa
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1168
Data        : 23/05/2026
Objetivo    : Indicar quantos leds serão necessários para gerar o número digitado.
Aprendizado : Como usar switch com a mesma função do if. 
-------------------------------------------------------------------------- */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int N, i, j, S;
    char Q[101];
    
    scanf ("%d\n", &N);
    
    for (i = 0; i < N; i++){
        scanf ("%s", Q);
        S = 0;
        
        for (j = 0; j <= strlen (Q); j++){
            switch (Q[j]){
                case '0':
                    S += 6;
                    break;
                
                case '1':
                    S += 2;
                    break;
                    
                case '2':
                    S += 5;
                    break;
                
                case '3':
                    S += 5;
                    break;
                
                case '4':
                    S += 4;
                    break;
                    
                case '5':
                    S += 5;
                    break;
                    
                case '6':
                    S += 6;
                    break;    
                    
                case '7':
                    S += 3;
                    break;
                    
                case '8':
                    S += 7;
                    break;
                    
                case '9':
                    S += 6;
                    break;
            }
        }
        printf ("%d leds\n", S);
    }
    return 0;
}
