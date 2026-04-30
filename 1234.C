#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (){
    
    int i, d;
    char L[50];
    
    d = 0;
    
    fgets (L, 50, stdin);
    
    for (i = 0; L[i] != '\0'; i++){
        if (d % 2 == 0){
            d++;
            if (L[i] >= 'A' && L[i] <= 'Z'){
                printf ("%c", L[i]);
            } else {
                if (L[i] >= 'a' && L[i] <= 'z'){
                    printf ("%c", L[i] - 32);
                } else {
                    printf ("%c", L[i]);
                    d--;
                }
            }
        } else {
            d++;
            if (L[i] >= 'A' && L[i] <= 'Z'){
                printf ("%c", L[i] + 32);
            } else {
                if (L[i] >= 'a' && L[i] <= 'z'){
                    printf ("%c", L[i]);
                } else {
                    printf ("%c", L[i]);
                    d--;
                }
            }
        }
    }
    
    return 0;
    
}
