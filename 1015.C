#include <stdio.h>
#include <math.h>

float quadrado (float n){
    return n * n;
}

int main()
{
    float X1, X2, Y1, Y2, d, A, B;
    
    scanf ("%f %f", &X1, &Y1);
    scanf ("%f %f", &X2, &Y2);
    
    A = X2 - X1;
    B = Y2 - Y1;
    
    float C = quadrado (A);
    float D = quadrado (B);
    d = C + D;
    
    printf ("%.4f\n", sqrt (d));
    
    return 0;
}
