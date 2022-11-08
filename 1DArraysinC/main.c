#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n, a;
    int soma = 0;
    
    scanf("%d", &n);
    int *arr = malloc(n * sizeof(int));
    
    for(int i = 0; i < n; i++){
        scanf("%d", &a);
        arr[i] = a;
        soma += a;
    }
    
    printf("%d", soma);
    return 0;
}
