#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int ordem(char t){
    if (t == 'P'){
        return 1;
    }
    if (t == 'M'){
        return 2;
    }
    if (t == 'G'){
        return 3;
    }
    return 0;
}

int ordnome(char a[], char b[]){
    return strcmp (a, b) > 0;
}

typedef struct{
    char nome [25];
    char cor[9];
    char tamanho;
} camiseta;

int main (){
   
    int N, i, j, k, u = 1;
    
    while (scanf ("%d", &N) != EOF && N != 0){
        getchar();
        
        if (!u){
            printf ("\n");
        }
        u = 0;        
        camiseta P[N], aux;
        
        for (i = 0; i < N; i++){
            fgets (P[i].nome, 25, stdin);
            
            k = 0;
            while (P[i].nome[k] != '\0'){
                if (P[i].nome[k] == '\n'){
                    P[i].nome[k] = '\0';
                    break;
                }
                k++;
            }
            
            scanf ("%s %c", P[i].cor, &P[i].tamanho);
            getchar ();
        }
        
        for (i = 0; i < N - 1; i++){
            for (j = 0; j < N - i - 1; j++){
                
                if (strcmp(P[j].cor, P[j+1].cor) > 0){
                    aux = P[j];
                    P[j] = P[j + 1];
                    P[j + 1] = aux;
                }
                
                if (strcmp(P[j].cor, P[j+1].cor) == 0 && ordem(P[j].tamanho) > ordem (P[j+1].tamanho)){
                    aux = P[j];
                    P[j] = P[j + 1];
                    P[j + 1] = aux;
                }
                if (strcmp(P[j].cor, P[j+1].cor) == 0 && ordem(P[j].tamanho) == ordem (P[j + 1].tamanho) && ordnome(P[j].nome, P[j+1].nome) == 1){
                    aux = P[j];
                    P[j] = P[j+1];
                    P[j+1] = aux;
                }
            }
        }
        
        for (i = 0; i < N; i++){
            printf ("%s %c %s\n", P[i].cor, P[i].tamanho, P[i].nome);
        }        
    }
}
