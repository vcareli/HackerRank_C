#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MIN_ELEMENT 1
#define MAX_ELEMENT 1000000
int  sum (int count,...) {
    int soma = 0;
    va_list args;
    va_start(args, count);
    
    for(int i = 0; i < count; i++){
        soma += va_arg(args, int);
    }
    va_end(args);
    return soma;
}

int min(int count,...) {
    int minimo = 0;
    va_list args;
    va_start(args, count);
    
    for(int i = 0; i < count; i++){
        int x = va_arg(args, int);
        if(i == 0){
            minimo = x;
        }else if(x < minimo){
            minimo = x;
        }
    }
    
    va_end(args);
    return minimo;
}

int max(int count,...) {
    int maximo = 0;
    va_list args;
    va_start(args, count);
    
    for(int i = 0; i < count; i++){
        int x = va_arg(args, int);
        if(i == 0){
            maximo = x;
        }else if(x > maximo){
            maximo = x;
        }
    }
    
    va_end(args);
    return maximo;
}

int test_implementations_by_sending_three_elements() {
