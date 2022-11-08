#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(){
    char *s;
    int um = 0, dois = 0, tres = 0, quatro = 0, cinco = 0;
    int seis = 0, sete = 0, oito = 0, nove = 0, zero = 0;
    s = malloc(1024 * sizeof(char));
    scanf("%[^\n]", s);
    for (int i = 0; i < strlen(s); i++){
        if(s[i] == 48){zero++;}
        else if(s[i] == 49){um++;}
        else if(s[i] == 50){dois++;}
        else if(s[i] == 51){tres++;}
        else if(s[i] == 52){quatro++;}
        else if(s[i] == 53){cinco++;}
        else if(s[i] == 54){seis++;}
        else if(s[i] == 55){sete++;}
        else if(s[i] == 56){oito++;}
        else if(s[i] == 57){nove++;}
    }
    
    printf("%d %d %d %d %d %d %d %d %d %d", zero, um, dois, tres, quatro, cinco, seis, sete, oito, nove);
    
    return 0;
}
