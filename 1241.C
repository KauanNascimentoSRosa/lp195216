#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (){
    
    char A[1001], B[1001];
    int N, i, j, encaixa;

    scanf ("%d", &N);
    
    for (i = 0; i < N; i++){
        scanf ("%s %s", A, B);
        
        int lenA = strlen (A);
        int lenB = strlen (B);
        
        if (lenB > lenA){
            printf ("nao encaixa\n");
        } else {
           
           encaixa = 1;
           
            for (j = 0; j < lenB; j++){
                if (A[lenA - lenB + j] != B [j]){
                    encaixa = 0;
                }
            }
            
            if (encaixa == 1){
                printf ("encaixa\n");
            } else {
                printf ("nao encaixa\n");
            }
        }
    }
    return 0;
}
