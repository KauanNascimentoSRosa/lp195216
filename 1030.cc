/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Kauan Nascimento Souza Rosa
Linguagem   : C++
Problema    : https://judge.beecrowd.com/pt/problems/view/1030
Data        : 24/06/2026
Objetivo    : Ler quantas pessoas têm, quantas pulam a cada salto e descobrir a última viva.
Aprendizado : Expressão para eliminar uma pessoa do vetor de acordo com a posição.
-------------------------------------------------------------------------- */

#include <iostream>
using namespace std;
int josephus (int P, int S){
    int V[10000], C = P, i, j, p = 0;

    for (i = 0; i < P; i++){
        V[i] = i + 1;
    }

    while (C > 1){

        p = (p + S - 1) % C;

        for (j = p; j < C - 1; j++){
            V[j] = V[j + 1];
        }
        
        C--;
    }
    return V[0];
}

int main()
{   
    int N, P, S, i;

    cin >> N;

    for (i = 0; i < N; i++){
        cin >> P >> S;
        cout << "Case " << i + 1 << ": " << josephus(P, S) << "\n";
    }
    return 0;
}
