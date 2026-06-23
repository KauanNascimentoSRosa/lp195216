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
