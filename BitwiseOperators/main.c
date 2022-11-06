#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.


void calculate_the_maximum(int n, int k) {
    int maxE = 0, maxOu = 0, maxXou = 0;
    for(int i = 1; i <= n; i++){
        for(int j = i+1; j <= n; j++){
            int and = i & j;
            int or = i | j;
            int xor = i ^ j;
            if(and > maxE && and < k){
                maxE = and;
            }
            if(or > maxOu && or < k){
                maxOu = or;
            }
            if(xor > maxXou && xor < k){
                maxXou = xor;
            }            
        }
    }
    printf("%d\n%d\n%d", maxE, maxOu, maxXou);
}

int main() {
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
 
    return 0;
}
