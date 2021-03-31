#include <stdio.h>

/* Write a program to print a histogram of the frequencies of different characters in its input.
frequencies of a,b,c,d  and others*/

int main()
{
    int c,nother=0;
    int nchar[4];
    

    for (int i = 0; i < 4; i++)
    {
        nchar[i] = 0;
    }

    while ((c = getchar()) != EOF)
        if (c >= 'a' && c <= 'd')
            ++nchar[c - 'a'];
        else
          ++nother; //counting

    for (int i = 0; i < 4; i++)
    {
        if(i==0)
        printf("a |");
        else if (i==1)
        printf("b |");
        else if (i==2)
        printf("c |");
        else if (i==3)
        printf("d |");
        for (int k = 0; k < nchar[i]; k++)
        {
            printf("*");
        }
        printf("\n");
    }
        printf("o |");
        for (int k = 0; k < nother; k++)
        {
            printf("*");
        }
        printf("\n");

}