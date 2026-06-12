#include <stdio.h>
int c = 0;

int fib (int n){
    c++;
    
    if (n == 1){
        return 1;
    }
    if (n == 0){
        return 0;
    }
    
    return fib (n - 1) + fib (n - 2);
}



int main()
{
    int C, N, R, i;
    
    scanf ("%d", &N);
    for (i = 0; i < N; i++){
        scanf ("%d", &C);
        
        R = fib(C);
        printf ("fib(%d) = %d calls = %d\n", C, c - 1, R);
        c = 0;
    }
    return 0;

}
