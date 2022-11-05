#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(){
    int n;
    int sum = 0;
    scanf("%d", &n);
    int resto = n;
    for(int i = 1; i < 6; i++){
        sum += (resto % 10);
        resto = resto / 10;
    }
    printf("%d", sum);
    return 0;
}
