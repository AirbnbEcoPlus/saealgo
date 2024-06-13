#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char RLE(char *in){
    char rslt[100];

    char precedent;

    int compteur;
    precedent = in[0];

    for(int i = 0 ; i < strlen(in) ; i++){
        if (in[i] == precedent){
            if( compteur != 9){
                compteur++;
                continue;
            }
        }
        strncat(rslt, &compteur, 1);
        strncat(rslt, &precedent, 1);
        compteur = 1;
        precedent = in[i];
    }
    strncat(rslt, &compteur, 1);
    strncat(rslt, &precedent, 1);
    return rslt;
}

int main(void){
    
    printf("%s\n", RLE("AAAAABBBBDDDDD"));
}