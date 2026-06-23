/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Kauan Nascimento Souza Rosa
Linguagem   : C++
Problema    : https://judge.beecrowd.com/pt/problems/view/2552
Data        : 22/06/2026
Objetivo    : Fazer uma matriz representando se tem pão de queijo no local ou se não tiver falar quantos lugares ao redor possuem.
Aprendizado : Acesso a regiões específicas da matriz e resolução por partes.
-------------------------------------------------------------------------- */

#include <iostream>
using namespace std;

int main(){

    int L, C, i, j, S, M[100][100];

    while (cin >> L >> C){
        for (i = 0; i < L; i++){
            for (j = 0; j < C; j++){
                cin >> M[i][j];
            }
        }

        for (i = 0; i < L; i++){
            for (j = 0; j < C; j++){

                if (M[i][j] == 1){
                    M[i][j] = 9;
                }
            }
        }

        for (i = 0; i < L; i++){
            for (j = 0; j < C; j++){
                if (M[i][j] == 0 && L != 1 && C != 1){
                    S = 0;
                    if (i == 0 && j == 0){
                        if (M[i + 1][j] == 9){
                            S++;
                        }
                        if (M[i][j + 1] == 9){
                            S++;
                        }
                        M[i][j] = S;
                    }

                    if (i == L - 1 && j == 0){
                        if (M[i - 1][j] == 9){
                            S++;
                        }
                        if (M[i][j + 1] == 9){
                            S++;
                        }
                        M[i][j] = S;
                    }

                    if (i == 0 && j == C - 1){
                        if (M[i][j - 1] == 9){
                            S++;
                        }
                        if (M[i + 1][j] == 9){
                            S++;
                        }
                        M[i][j] = S;
                    }

                    if (i == L - 1 && j == C - 1){
                        if (M[i - 1][j] == 9){
                            S++;
                        }
                        if (M[i][j - 1] == 9){
                            S++;
                        }
                        M[i][j] = S;
                    } //cantos

                    if (i == 0 && j != 0 && j != C - 1){
                        if (M[i + 1][j] == 9){
                            S++;
                        }
                        if (M[i][j - 1] == 9){
                            S++;
                        }
                        if (M[i][j + 1] == 9){
                            S++;
                        }
                        M[i][j] = S;
                    }

                    if (i == L - 1 && j != 0 && j != C - 1){
                        if (M[i - 1][j] == 9){
                            S++;
                        }
                        if (M[i][j - 1] == 9){
                            S++;
                        }
                        if (M[i][j + 1] == 9){
                            S++;
                        }
                        M[i][j] = S;
                    }

                    if (i != 0 && i != L - 1 && j == 0){
                        if (M[i - 1][j] == 9){
                            S++;
                        }
                        if (M[i + 1][j] == 9){
                            S++;
                        }
                        if (M[i][j + 1] == 9){
                            S++;
                        }
                        M[i][j] = S;
                    }

                    if (i != 0 && i != L - 1 && j == C - 1){
                        if (M[i - 1][j] == 9){
                            S++;
                        }
                        if (M[i + 1][j] == 9){
                            S++;
                        }
                        if (M[i][j - 1] == 9){
                            S++;
                        }
                        M[i][j] = S;
                    } //laterais



                    if (M[i][j] == 0 && i != 0 && j != 0 && i != L - 1 && j != C - 1){
                        if (M[i - 1][j] == 9){
                            S++;
                        }
                        if (M[i + 1][j] == 9){
                            S++;
                        }
                        if (M[i][j - 1] == 9){
                            S++;
                        }
                        if (M[i][j + 1] == 9){
                            S++;
                        }
                        M[i][j] = S;
                    } // meio
                }
                
                if (L == 1 && C != 1){
                    S = 0;
                    if (M[i][j] == 0 && j == 0){
                        if (M[i][j + 1] == 9){
                            S++;
                        }
                        M[i][j] = S;
                    }

                    if (M[i][j] == 0 && j == C - 1){
                        if (M[i][j - 1] == 9){
                            S++;
                        }
                        M[i][j] = S;
                    }

                    if (M[i][j] == 0 && j != 0 && j != C - 1){
                        if (M[i][j - 1] == 9){
                            S++;
                        }
                        if (M[i][j + 1] == 9){
                            S++;
                        }
                        M[i][j] = S;
                    }
                } //caso especial 1

                if (L != 1 && C == 1){
                    S = 0;
                    if (M[i][j] == 0 && i == 0){
                        if (M[i + 1][j] == 9){
                            S++;
                        }
                        M[i][j] = S;
                    }

                    if (M[i][j] == 0 && i == L - 1){
                        if (M[i - 1][j] == 9){
                            S++;
                        }
                        M[i][j] = S;
                    }

                    if (M[i][j] == 0 && i != 0 && i != L - 1){
                        if (M[i - 1][j] == 9){
                            S++;
                        }
                        if (M[i + 1][j] == 9){
                            S++;
                        }
                        M[i][j] = S;
                    }
                } //caso especial 2
            }
        }
        for (i = 0; i < L; i++){
            for (j = 0; j < C; j++){
                cout << M[i][j];
            }
            cout << "\n";
        }
    }
}
