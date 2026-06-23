/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Kauan Nascimento Souza Rosa
Linguagem   : C++
Problema    : https://judge.beecrowd.com/pt/problems/view/1180
Data        : 22/06/2026
Objetivo    : Ler os números de um vetor, mostrar ele e sua posição.
Aprendizado : Utilização de variável para localizar a posição do menor.
-------------------------------------------------------------------------- */

#include <iostream>
using namespace std;

int main (){

    int N, i, menor, P = 0;
    cin >> N;
    int V[N];

    for (i = 0; i < N; i++){
        cin >> V[i];
    }

    menor = V[0];
    
    for (i = 0; i < N; i++){
        if (V[i] < menor){
            menor = V[i];
            P = i;
        }
    }

    cout << "Menor valor: " << menor << "\n";
    cout << "Posicao: " << P << "\n";
}
