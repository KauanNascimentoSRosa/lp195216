/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Kauan Nascimento Souza Rosa
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1383
Data        : 17/06/2026
Objetivo    : Verificar se um jogo de sudoku é permitido ou não
Aprendizado : Verificação das linhas, colunas e blocos com for, soma e multiplicação. 
-------------------------------------------------------------------------- */

#include <iostream>

int R = 0;
int verificação (int S, long long P){
    if (S != 45 || P != 362880){
        R++;
    }
    return 0;
}

int main()
{
    using namespace std;
    
    int N, i, j, k, V[9][9], S = 0;
    long long P = 1;
    
    cin >> N;
    
    for (i = 0; i < N; i++){
        // área de funcionamento
        for (j = 0; j < 9; j++){
            for (k = 0; k < 9; k++){
                cin >> V[j][k]; //números lidos
            }
        }
        
        for (j = 0; j < 9; j++){
            for (k = 0; k < 9; k++){
                S += V[j][k];
                P *= V[j][k];
            }
            
            verificação (S, P);
            S = 0;
            P = 1;
        } // contagem linha
        
        for (k = 0; k < 9; k++){
            for (j = 0; j < 9; j++){
                S += V[j][k];
                P *= V[j][k];
            }
            
            verificação (S, P);
            S = 0;
            P = 1;
        } // contagem coluna
        
        for (j = 0; j < 3; j++){
            for (k = 0; k < 3; k++){
                S += V[j][k];
                P *= V[j][k];
            }
        }
        
        verificação (S, P);
        S = 0;
        P = 1;
        
        for (j = 3; j < 6; j++){
            for (k = 0; k < 3; k++){
                S += V[j][k];
                P *= V[j][k];
            }
        }
        
        verificação (S, P);
        S = 0;
        P = 1;
        
        for (j = 6; j < 9; j++){
            for (k = 0; k < 3; k++){
                S += V[j][k];
                P *= V[j][k];
            }
        }
        
        verificação (S, P);
        S = 0;
        P = 1;
        
        for (j = 0; j < 3; j++){
            for (k = 3; k < 6; k++){
                S += V[j][k];
                P *= V[j][k];
            }
        }
        
        verificação (S, P);
        S = 0;
        P = 1;
        
        for (j = 3; j < 6; j++){
            for (k = 3; k < 6; k++){
                S += V[j][k];
                P *= V[j][k];
            }
        }
        
        verificação (S, P);
        S = 0;
        P = 1;
        
        for (j = 6; j < 9; j++){
            for (k = 3; k < 6; k++){
                S += V[j][k];
                P *= V[j][k];
            }
        }
        
        verificação (S, P);
        S = 0;
        P = 1;
        
        for (j = 0; j < 3; j++){
            for (k = 6; k < 9; k++){
                S += V[j][k];
                P *= V[j][k];
            }
        }
        
        verificação (S, P);
        S = 0;
        P = 1;
        
        for (j = 3; j < 6; j++){
            for (k = 6; k < 9; k++){
                S += V[j][k];
                P *= V[j][k];
            }
        }
        
        verificação (S, P);
        S = 0;
        P = 1;
        
        for (j = 6; j < 9; j++){
            for (k = 6; k < 9; k++){
                S += V[j][k];
                P *= V[j][k];
            }
        } // contagem blocos
        
        verificação (S, P);
        
        S = 0;
        P = 1;
        
        cout << "Instancia " << i + 1 << endl;
        
        if (R == 0){
            cout << "SIM" << endl;
        } else {
            cout << "NAO" << endl;
        }
        
        cout << endl;
        R = 0;
    }
}
