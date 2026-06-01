int mdc(int F1, int F2){
    if (F2 == 0){
        return F1;
    }
    mdc (F2, F1 % F2);
}

#include <stdio.h>

int main()
{
    int F1, F2, N, i;
    
    scanf ("%d", &N);
    
    for (i = 0; i < N; i++){
        scanf ("%d %d", &F1, &F2);
        printf ("%d\n", mdc(F1, F2));
    }

    return 0;
}
