#include <stdio.h>
#include <stdlib.h>

int main()
{
    
    int N, i, j, M[70][70];
    
    while (scanf ("%d", &N) != EOF) {
        for (i = 0; i < N; i++){
            for (j = 0; j < N; j++){
                if (i == j){
                    M[i][j] = 1;
                }
                
                if (i + j == N - 1){
                    M[i][j] = 2;
                }
                
                if (i != j && i + j != N - 1){
                    M[i][j] = 3;
                }
                
                printf ("%d", M[i][j]);
            }
            
            printf ("\n");
        }
    }

    return 0;
}
