#include <stdio.h>

/* Write a program to print a histogram of the lengths of words in its input.*/
int main()
{
    int c, nw[10], nc, j;

    nc = 0;
    j = 0;
    while ((c = getchar()) != EOF)
    {
        if (c == ' ' || c == '\n' || c == '\t')
        {
            nw[j] = nc;
            ++j;
            nc = 0;
        }
        else
            ++nc;
    }
    for (int i = 0; i < j; i++)
    {
        printf("%d |",i+1);
        for (int k = 0; k < nw[i]; k++)
        {
            printf("*");
        }
        printf("\n");
    }
}