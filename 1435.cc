/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Kauan Nascimento Souza Rosa
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1435
Data        : 24/06/2026
Objetivo    : Fazer uma matriz quadrada em que os números aumentam de acordo com a distância deles com as extremidades.
Aprendizado : Utilização de void para calcular a matriz. 
-------------------------------------------------------------------------- */

#include <iostream>
using namespace std;

void matriz(int M[100][100], int N){

    int k = 0, i, j, n;

    if (N % 2 == 0){
        while (k != (N/2) + 1){
            for (i = 0; i < N/2; i++){
                for (j = 0; j < N/2; j++){
                    if (i == k && j >= k|| j == k && i >= k){ 
                        M[i][j] = k + 1;
                    }
                }
            }
            k++;
        }

        for (i = N/2; i < N; i++){
            for (j = 0; j < N/2; j++){
                M[i][j] = M[N-i-1][j];
            }
        }

        for (i = 0; i < N/2; i++){
            for (j = N/2; j < N; j++){
                M[i][j] = M[i][N-j-1];
            }
        }

        for (i = N/2; i < N; i++){
            for (j = N/2; j < N; j++){
                M[i][j] = M[N-i-1][N-j-1];
            }
        }
        k = 0;
    }


    if (N % 2 != 0 && N != 1){
        for (k = 0; k <= (N/2) + 1; k++){
            for (i = 0; i < N/2; i++){
                for (j = 0; j < N/2; j++){
                    if (i == k && j >= k || j == k && i >= k){
                        M[i][j] = k + 1;
                    }
                }
            }
        }

        for (i = N/2; i < N; i++){
            for (j = 0; j < N/2; j++){
                M[i][j] = M[N-i-1][j];
            }
        }

        for (i = 0; i < N/2; i++){
            for (j = N/2; j < N; j++){
                M[i][j] = M[i][N-j-1];
            }
        }

        for (i = N/2; i < N; i++){
            for (j = N/2; j < N; j++){
                M[i][j] = M[N-i-1][N-j-1];
            }
        }


        for (i = 0; i < N; i++){
            for (j = 0; j < N; j++){
                if (i == N/2 || j == N/2){
                    if (i < j){
                        if (i < N/2){
                            M[i][j] = i + 1;
                        }
                        if (i > N/2){
                            M[i][j] = M[N-i-1][j];
                        }
                    }

                    if (i == j){
                        M[i][j] = i + 1;
                    }

                    if (j > i){
                        if (j < N/2){
                            M[i][j] = j + 1;
                        } if (j > N/2) {
                            M[i][j] = M[i][N-j-1];
                        }
                    }
                }
            }
        }
        k = 0;
    }


    if (N == 1){
        M[0][0] = 1;
    }
}


int main (){
    int N, i, j;

    while (cin >> N && N != 0){
        int M[100][100];

        matriz(M, N);
        for (i = 0; i < N; i++){
            for (j = 0; j < N; j++){
                if (M[i][j] < 10){
                    cout << "  " << M[i][j];
                } else {
                    cout << " " << M[i][j];
                }
                if (j != N - 1){
                    cout << " ";
                }
            }
            cout << endl;
        }
        cout << endl;
    }
}
