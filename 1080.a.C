#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int t, valor, posicao, maior;
    maior = 0;
    posicao = 0;
    
    for (t = 0; t < 100; t++){
        scanf ("%d", &valor);
        
        if (valor > maior){
            maior = valor;
            posicao = t;
        }
    }
    
    printf ("%d\n", maior);
    printf ("%d\n", posicao + 1);
    
    return 0;
}
