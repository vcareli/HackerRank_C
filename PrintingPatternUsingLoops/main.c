#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#define MAIOR(x,y)((x>y)?x:y)

int main(){
    int n;
    scanf("%d", &n);
    for(int i = -n+1; i < n; i++){       //linhas
        for(int j = -n+1; j < n; j++){   //colunas
            printf("%d ", 1+MAIOR(abs(i), abs(j)));
        }
        printf("\n");
    }
    return 0;
}
