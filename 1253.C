#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (){
    
    int C, P, i, j;
    char S[51];
    
    scanf ("%d", &C);
    getchar ();
    
    for (i = 0; i < C; i++){
        
        fgets (S, 51, stdin);
        
        scanf ("%d", &P);
        getchar();
        
        for (j = 0; S[j] != '\0'; j++){
            if (S[j] == '\n'){
                continue;
            }
            if (S[j] >= 'A' && S[j] <= 'Z' && S[j] - P < 'A'){
                printf ("%c", S[j] - P + 26);
            } else {
                if (S[j] >= 'A' && S[j] <= 'Z'){
                    printf ("%c", S[j] - P);
                }
            }
        }
        printf ("\n");
    }
}
