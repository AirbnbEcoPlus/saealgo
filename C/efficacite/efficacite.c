#include <stdio.h>
#include <string.h>

char *RLE(char *in)
{
    static char rslt[200000];
    char precedent = in[0];
    int compteur = 1;
    int j = 0;
    int len = strlen(in);
    for (int i = 1; i <= len; i++)
    {
        if (in[i] != precedent || compteur == 9)
        {
            rslt[j++] = '0' + compteur;
            rslt[j++] = precedent;
            compteur = 1;
            precedent = in[i];
        }
        compteur++;
    }
    return rslt;
}

int main(void)
{

    printf("%s\n", RLE("AABBBBDDDDD"));
}