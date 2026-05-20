#include <stdio.h>

int calcularDuracao(int inicio, int fim){
    if (inicio >= fim){
        return fim - inicio + 24;
    } else {
        return fim - inicio;
    }
}

int main()
{
    int i, f;
    
    scanf ("%d %d", &i, &f);
    printf ("O JOGO DUROU %d HORA(S)\n", calcularDuracao(i, f));

    return 0;
}
