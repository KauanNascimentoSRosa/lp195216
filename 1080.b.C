#include <stdio.h>
#include <stdlib.h>

int main()
{
    int V[100];
    int t, maior, posicao;
    maior = 0;
    posicao = 0;
    
    for (t = 0; t < 100; t++){
        scanf ("%d", &V[t]);
    }
    
   for (t = 0; t < 100; t++){
        if (V[t] > maior){
            maior = V[t];
            posicao = t;
        }
    }
    
    printf ("%d\n", maior);
    printf ("%d\n", posicao);
    
    return 0;
}
