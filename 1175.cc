/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Kauan Nascimento Souza Rosa
Linguagem   : C++
Problema    : https://judge.beecrowd.com/pt/problems/view/1175
Data        : 22/06/2026
Objetivo    : Ler 20 números de um vetor e inverter a posição deles.
Aprendizado : Utilização de auxiliar e outra variável para inverter a ordem.
-------------------------------------------------------------------------- */

#include <iostream>
using namespace std;

int main (){

    int N[20], i, j = 1, aux;

    for (i = 0; i < 20; i++){
        cin >> N[i];
    }

    for (i = 0; i < 10; i++){
        aux = N[i];
        N[i] = N[20 - j];
        N[20 - j] = aux;
        j++;
    }

    for (i = 0; i < 20; i++){
        cout << "N[" << i << "] = " << N[i] << endl;
    }
}
