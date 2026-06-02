#include <iostream>

int main()
{
    using namespace std;
    int V[15], P[5], I[5], i, j = 0, k = 0, m, n;
    
    for (i = 0; i < 15; i++){
        cin >> V[i];
        if (V[i] % 2 == 0){
            P[j] = V[i];
            j++;
            
            if (j == 5){
                for (m = 0; m < 5; m++){
                    cout << "par[" << m << "] = " << P[m] << "\n";
                }
                
                j = 0;
            }
        }
        
        if (V[i] % 2 != 0){
            I[k] = V[i];
            k++;
            
            if (k == 5){
                for (n = 0; n < 5; n++){
                    cout << "impar[" << n << "] = " << I[n] << "\n";
                }
                
                k = 0;
            }
        }
    }
    for (n = 0; n < k; n++){
        cout << "impar[" << n << "] = " << I[n] << "\n";
    }
    
    for (m = 0; m < j; m++){
        cout << "par[" << m << "] = " << P[m] << "\n";
    }
        
    return 0;
}
