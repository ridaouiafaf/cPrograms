#include <stdio.h>
/* count digits, white space, others */
int main()
{
    int c, i, nwhite, nother;
    /*
       c(to read character), 
       i(iteration variable), 
       nwhite(blanks/tabs/newline), 
       nother(other characters)
    */
    int ndigit[10];//to store digits
    
    nwhite = nother = 0;//initialisation
    
    for (i = 0; i < 10; ++i)
        ndigit[i] = 0;//initialisation
    
    while ((c = getchar()) != EOF)
        if (c >= '0' && c <= '9')
            ++ndigit[c - '0'];
        else if (c == ' ' || c == '\n' || c == '\t')
            ++nwhite;//counting that we found a white space
        else
            ++nother;//counting that we found another character other than digits and white spaces
    
    //printf("digits =");

    for (i = 0; i < 10; ++i)
        printf("digit[%d]= %d\n", i, ndigit[i]);
    
    printf("white space = %d\nother = %d\n",nwhite, nother);

    return 0;
}