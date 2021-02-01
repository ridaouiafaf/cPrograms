#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/*  URL = http://codeforces.com/problemset/problem/71/A */
int main()
{
    int n, lenght; // n for how many words we want to enter, lenght is for each entered word's length(its letters number)
    char *word;    // we will be using it to stock each word we're dealing with while making it's abreviation.

    scanf("%d", &n); // stocking how many words we want

    char words[n][110]; // creating a char 2D table with n words and max 110 letters each.

    for (int i = 0; i < n; i++)
    {
        scanf("%s", words[i]); // stocking words one by one untill we've done n words
    }

    printf("\n\n"); // space to see the before & after clearly

    for (int i = 0; i < n; i++) // browsing the words
    {
        word = words[i];       // assigning the current word to the variable we mentionned before
        lenght = strlen(word); // definig its length
        if (lenght <= 10)      // if it has 10 letter or less we don't do anything
        {
            printf("%s\n", word);
        }
        else
        {
            printf("%c%d%c\n", word[0], lenght - 2, word[lenght - 1]);
            // when it's not the case above we write the 1st letter which is word[0]
            // followed by how many letters are between the 1st and the last letter => lenght - 2
            // and then we conlure by the last letter which is word[lenght-1].
        }
    }

    return 0;
}