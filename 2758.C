/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Kauan Nascimento Souza Rosa
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/2758
Data        : 14/04/2026
Objetivo    : Escrever dois números de precisão simples e dois de dupla com 6, 1, 2 e 3 algarismos após a vírgula, indicação de quantas multiplicações por 10 são necessárias após o primeiro algarismo e sem os números após a vírgula.
Aprendizado : Modificações para o float e double para a impressão de número.
-------------------------------------------------------------------------- */

#include <stdio.h>

int main()
{
    float A, B;
    double C, D;
    scanf ("%f %f", &A, &B);
    scanf ("%lf %lf", &C, &D);
    printf ("A = %f, B = %f\n", A, B);
    printf ("C = %lf, D = %lf\n", C, D);
    
    printf ("A = %.1f, B = %.1f\n", A, B);
    printf ("C = %.1lf, D = %.1lf\n", C, D); 
    
    printf ("A = %.2f, B = %.2f\n", A, B);
    printf ("C = %.2lf, D = %.2lf\n", C, D);
    
    printf ("A = %.3f, B = %.3f\n", A, B);
    printf ("C = %.3lf, D = %.3lf\n", C, D);  
    
    printf ("A = %.3E, B = %.3E\n", A, B);
    printf ("C = %.3E, D = %.3E\n", C, D);   
    
    printf ("A = %.0f, B = %.0f\n", A, B);
    printf ("C = %.0lf, D = %.0lf\n", C, D);
    

    return 0;
}
