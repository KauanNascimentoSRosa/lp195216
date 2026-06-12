/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Kauan Nascimento Souza Rosa
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1441
Data        : 11/06/2026
Objetivo    : Representar o maior número da sequência de granizo.
Aprendizado : Repetir chamada dentro de função fora do int main.
-------------------------------------------------------------------------- */

#include <stdio.h>

int maior (int n){
    int M;
    M = n;
    while (n != 1){
        if (n % 2 == 0){
            n /= 2;
        } else {
            n = (3*n) + 1;
        }
        if (n > M){
            M = n;
        }
    }
    return M;
}

int main()
{
    int N;
    scanf ("%d", &N);
    while (N != 0){
        printf("%d\n", maior(N));
        scanf ("%d", &N);
    }

    return 0;
}
