#include <stdio.h>

int main()
{
    int V[15], P[5], I[5], i, j = 0, k = 0, m, n;
    
    for (i = 0; i < 15; i++){
        scanf ("%d", &V[i]);;
        if (V[i] % 2 == 0){
            P[j] = V[i];
            j++;
            
            if (j == 5){
                for (m = 0; m < 5; m++){
                    printf ("par[%d] = %d\n", m, P[m]);
                }
                
                j = 0;
            }
        }
        
        if (V[i] % 2 != 0){
            I[k] = V[i];
            k++;
            
            if (k == 5){
                for (n = 0; n < 5; n++){
                    printf ("impar[%d] = %d\n", n, I[n]);
                }
                
                k = 0;
            }
        }
    }
    for (n = 0; n < k; n++){
        printf ("impar[%d] = %d\n", n, I[n]);
    }
    
    for (m = 0; m < j; m++){
        printf ("par[%d] = %d\n", m, P[m]);
    }
        
    return 0;
}
