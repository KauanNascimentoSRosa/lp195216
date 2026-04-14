#include <stdio.h>

int main()
{
    int A, B, C, AB, MAIOR;
    scanf ("%d %d %d", &A, &B, &C);
    AB = (A + B + abs (A-B))/2;
    MAIOR = (AB + C + abs (AB-C))/2;

    printf ("%d eh o maior\n", MAIOR);
    return 0;
}
