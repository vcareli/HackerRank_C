#include <stdio.h>
/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/
int max_of_four(int a, int b, int c, int d){
    int maior = 0, aux = 0;
    
    if(a > aux){
        aux = a;
    }
    if(b > aux){
            aux = b;
    }
    if(c > aux){
        aux = c;
    }
    if(d > aux){
        aux = d;
    }
    maior = aux;
    
    return maior;
}

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}
