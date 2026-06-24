/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Kauan Nascimento Souza Rosa
Linguagem   : C++
Problema    : https://judge.beecrowd.com/pt/problems/view/1031
Data        : 24/06/2026
Objetivo    : Ler quantas regiões contém e revelar o número de saltos para a região 13 ser a única sem desligamento de energia.
Aprendizado : Recursão para caso de erro até achar um valor conveniente.
-------------------------------------------------------------------------- */

#include <iostream>
using namespace std;

int região(int R, int S){
    int V[100], l = 1, C = R, i, P = 0;
    
    for (i = 0; i < C; i++){
        V[i] = i + 1;
    }
    
    for (i = 0; i < C - 1; i++){
        V[i] = V[i + 1];
    }
    C--;
    
    while (C > 1){
        
        P = (P + S - 1) % C;
        
        for (i = P; i < C - 1; i++){
            V[i] = V[i + 1];
        }
        
        C--;
        
        if (P == C){
            P = 0;
        }
    }
    
    if (V[0] == 13){
        return S;
    } else {
        return região (R, S + 1);
    }
}


int main (){
    
    int R;
    while (cin >> R && R != 0){
        cout << região(R, 1) << endl;
    }
}
