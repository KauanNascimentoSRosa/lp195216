/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Kauan Nascimento Souza Rosa
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1169
Data        : 28/05/2026
Objetivo    : Descobrir quantos kg de grão de trigo a rainha terá que dar para o monge de acordo com o número de casas to tabuleiro.
Aprendizado : Usar recursividade para saber quantos trigos possui a última casa.
-------------------------------------------------------------------------- */

#include <stdio.h>

unsigned long long cont(int n){
    if (n == 1){
        return 1;
    }
    return 2 * cont (n - 1);
}


int main()
{
    int n, j;
    unsigned long long k;
    scanf ("%d", &n);
    for (j = 0; j < n; j++){
        scanf ("%d", &k);
        printf ("%llu kg\n", (2 * cont(k) - 1) / 12000);
    }
    return 0;
}
