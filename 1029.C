/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Kauan Nascimento Souza Rosa
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1029
Data        : 11/06/2026
Objetivo    : Calcular quantas vezes foi chamada a recursão e a soma dos 0 e 1 iniciais da sequência de Fibonacci.
Aprendizado : Recursão para calcular quantas vezes a recursão foi chamada, utilização de um inteiro para não conflitar o contador e variável comum a todas as funções.
-------------------------------------------------------------------------- */

#include <stdio.h>
int c = 0;

int fib (int n){
    c++;
    
    if (n == 1){
        return 1;
    }
    if (n == 0){
        return 0;
    }
    
    return fib (n - 1) + fib (n - 2);
}



int main()
{
    int C, N, R, i;
    
    scanf ("%d", &N);
    for (i = 0; i < N; i++){
        scanf ("%d", &C);
        
        R = fib(C);
        printf ("fib(%d) = %d calls = %d\n", C, c - 1, R);
        c = 0;
    }
    return 0;

}
