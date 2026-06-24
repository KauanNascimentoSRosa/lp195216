#include <iostream>
int V[10000];
using namespace std;
int josephus (int P, int S){
    int C = P, i, j, p = 0;

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
