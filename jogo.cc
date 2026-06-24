/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Kauan Nascimento Souza Rosa
Linguagem   : C++
Problema    : Não está no beecrowd (jogo.cc).
Data        : 24/06/2026
Objetivo    : Ler um arquivo com uma matriz 9x9 e iniciar um jogo de sudoku com ela.
Aprendizado : Como ler arquivos, seus controles e validação a partir da jogada do usuário.
-------------------------------------------------------------------------- */

#include <iostream>
using namespace std;

int V[9][9];

int verificacao (int L, int C, int N){

    int l, c, i, j;

    for (j = 0; j < 9; j++){
        if (j != C && V[L][j] == N){
            return 0;
        }
    }

    for (i = 0; i < 9; i++){
        if (i != L && V[i][C] == N){
            return 0;
        }
    }

    l = L - (L % 3);
    c = C - (C % 3);

    for (i = l; i < l + 3; i++){
        for (j = c; j < c + 3; j++){
            if ((i != L || j != C) && V[i][j] == N){
                return 0;
            }
        }
    }

    return 1;

}

int main()
{

    int L, C, N, i, j, v = 0; 
    FILE *arquivo = fopen("input2.txt", "r+");

    if (arquivo == NULL){
        cout << "Erro ao abrir o arquivo.";
        return 1;
    }

    for (i = 0; i < 9; i++){
        for (j = 0; j < 9; j++){
            fscanf(arquivo, "%d", &V[i][j]);
        }
    }
    fclose (arquivo);

    for (i = 0; i < 9; i++){
        for (j = 0; j < 9; j++){
            if (V[i][j] == 0){
                v++;
            }
        }
    }

    cout << "---SUDOKU---\n";

    while (v != 0){
        
        for (i = 0; i < 9; i++){
            for (j = 0; j < 9; j++){
                if (V[i][j] == 0){
                    cout << "_ ";
                } else {
                    cout << V[i][j] << " ";
                }
                
                if ((j + 1) % 3 == 0 && j != 8){
                    cout << "| ";
                }
            }
            cout << "\n";

            if ((i + 1) % 3 == 0 && i != 8){
                cout << "------|-------|------\n";
            }
        }

        cout << "Digite a jogada:\n";
        cout << "Linha (0-8): ";
        cin >> L;

        cout << "Coluna (0-8): ";
        cin >> C;

        cout << "Número (1-9): ";
        cin >> N;

        if (L < 0 || L > 8 || C < 0 || C > 8){
            cout << "Posição inválida. Tente novamente.\n";
            continue;
        }

        if (verificacao(L, C, N) == 1 && N >= 1 && N <= 9 && V[L][C] == 0){
            cout << "Essa é uma jogada válida!" << endl;
            V[L][C] = N;
            v--;
        } else {
            cout << "Essa é uma jogada inválida. Tente novamente." << endl;
        }
    }

    if (v == 0){
        cout << "Você concluiu o Sudoku!" << endl;
    }
}
