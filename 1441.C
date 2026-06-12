#include <stdio.h>

int maior (int n){
    int M;
    M = n;
    while (n != 1){
        if (n % 2 == 0){
            n /= 2;
        } else {
            n = (3*n) + 1;
        }
        if (n > M){
            M = n;
        }
    }
    return M;
}

int main()
{
    int N;
    scanf ("%d", &N);
    while (N != 0){
        printf("%d\n", maior(N));
        scanf ("%d", &N);
    }

    return 0;
}
