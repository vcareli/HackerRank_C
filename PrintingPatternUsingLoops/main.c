#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    int n, lin = 1, col = 1;
    scanf("%d", &n);
    if(n == 1){
        printf("1");
    }else{
        for(int i = 0; i < n+(n-1); i++){       //linhas
            for(int j = 0; j < n+(n-1); j++){   //colunas
                if(lin == 1 || lin == (n + (n - 1))){
                    printf("%d ", n);
                }else{
                    printf("%d ", n-1);
                }
            }
            lin++;
            printf("\n");
        }   
    }
    return 0;
}
