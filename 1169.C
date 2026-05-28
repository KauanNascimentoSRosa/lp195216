#include <stdio.h>

unsigned long long cont(int n){
    if (n == 1){
        return 1;
    }
    return 2 * cont (n - 1);
}


int main()
{
    int n, j;
    unsigned long long k;
    scanf ("%d", &n);
    for (j = 0; j < n; j++){
        scanf ("%d", &k);
        printf ("%llu kg\n", (2 * cont(k) - 1) / 12000);
    }
    return 0;
}
