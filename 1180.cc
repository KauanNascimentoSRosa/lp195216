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
