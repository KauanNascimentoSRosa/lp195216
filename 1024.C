#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main () {
    
    int N, i, j;
    char M[1001], aux;
    
    scanf ("%d", &N);
    getchar();
    
    for (i = 0; i < N; i++){
        fgets (M, 1001, stdin);
        
        int lenM = strlen (M);
        
        if (M[lenM - 1] == '\n'){
            M[lenM - 1] = '\0';
            lenM--;
        }
        
        for (j = 0; j < lenM; j++){
            if (M[j] >= 'A' && M[j] <= 'Z' || M[j] >= 'a' && M[j] <= 'z'){
                M[j] += 3;
            }
        }
        for (j = 0; j < lenM / 2; j++){
                aux = M[j];
                M[j] = M[lenM - 1 - j];
                M[lenM - 1 - j] = aux;
        }
        for (j = lenM / 2; j < lenM; j++){
            M[j]++;
        }
        printf ("%s\n", M);
    }
    return 0;
}
