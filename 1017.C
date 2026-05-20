#include <stdio.h>

float calcularLitros(int tempo, int velocidade){
    return (tempo * velocidade) / 12.0;
}

int main()
{
    int t, v;
    scanf ("%d", &t);
    scanf ("%d", &v);
    
    printf ("%.3f\n", calcularLitros(t, v));

    return 0;
}
