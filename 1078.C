#include <stdio.h>
#include <stdlib.h>
 
int main() {
 
    int R[10], i, N;
    
    scanf ("%d", &N);
    
    if (N > 2 && N < 1000){
        for (i = 0; i < 10; i++){
            R[i] = (i + 1) * N;
            printf ("%d", i + 1);
            printf (" x %d", N);
            printf (" = %d\n", R[i]);
        }
    }
    return 0;
}
