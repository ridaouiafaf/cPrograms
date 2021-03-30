#include <stdio.h>
#define IN 1  /* inside a word */
#define OUT 0 /* outside a word */
/* count lines, words, and characters in input */
int main()
{
    int c, nw[10],nc,j;

    nc = j = 0;
    while ((c = getchar()) != EOF)
    {
        ++nc;
        if (c == ' ' || c == '\n' || c == '\t')
        {
            nw[j]=nc;
            j++;
            nc=0;
        }
    }
    for (int i = 0; nw[i]!=NULL ; i++)
    {
        for (int k = 0; k < nw[i]; k++)
        {
            printf("*");
        }
        printf("\n");
    }
}