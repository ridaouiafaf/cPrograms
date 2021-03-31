#include <stdio.h>
/*Write a program to print a histogram of the frequencies of different characters
in its input. */
int main()
{
    int c, nother;
    /*
       c(to read character), 
       i(iteration variable), 
       nother(other)
    */
    int nchar[26]; //to store characters

    nother = 0; //initialisation

    for (int i = 0; i < 26; ++i)
        nchar[i] = 0; //initialisation

    while ((c = getchar()) != EOF)
        if (c >= 'a' && c <= 'z')
            ++nchar[c - 'a'];
        else
            ++nother; //counting that we found another character other than chars and white spaces

    //printf("chars =");

    for (int i = 0; i < 26; ++i)
    {
        if (nchar[i] != 0 && nchar[i] != NULL)
        {
            printf("char[%d]= %d\n", i, nchar[i]);
        }
    }
    printf("nother = %d\n", nother);

    return 0;
}