#include <stdio.h>
#include <stdlib.h>

int main()
{
    
    int N, i, j, M[70][70];
    
    while (scanf ("%d", &N) != EOF) {
        for (i = 0; i < N; i++){
            for (j = 0; j < N; j++){
                
                int *p = &M[i][j];
                
                if (i == j){
                    *p = 1;
                }
                
                if (i + j == N - 1){
                    *p = 2;
                }
                
                if (i != j && i + j != N - 1){
                    *p = 3;
                }
                
                printf ("%d", *p);
            }
            
            printf ("\n");
        }
    }

    return 0;
}
