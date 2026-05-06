/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Kauan Nascimento Souza Rosa
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1234
Data        : 03/05/2026
Objetivo    : Fazer uma sequência alterando, em sequência, as letras maiúsculas e minúsculas.
Aprendizado : Uso de tabela ASCII para alternar entre maiúsculo e minúsculo. 
-------------------------------------------------------------------------- */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (){
    
    int i, d;
    char L[51];
    
    d = 0;
    
    fgets (L, 51, stdin);
    
    for (i = 0; L[i] != '\0'; i++){
        if (d % 2 == 0){
            d++;
            if (L[i] >= 'A' && L[i] <= 'Z'){
                printf ("%c", L[i]);
            } else {
                if (L[i] >= 'a' && L[i] <= 'z'){
                    printf ("%c", L[i] - 32);
                } else {
                    printf ("%c", L[i]);
                    d--;
                }
            }
        } else {
            d++;
            if (L[i] >= 'A' && L[i] <= 'Z'){
                printf ("%c", L[i] + 32);
            } else {
                if (L[i] >= 'a' && L[i] <= 'z'){
                    printf ("%c", L[i]);
                } else {
                    printf ("%c", L[i]);
                    d--;
                }
            }
        }
    }
    
    return 0;
    
}
