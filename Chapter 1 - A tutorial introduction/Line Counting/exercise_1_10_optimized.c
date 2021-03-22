#include <stdio.h>

/*Write a program to copy its input to its output, replacing each tab by \t, each
backspace by \b, and each backslash by \\. This makes tabs and backspaces visible in an
unambiguous way.*/

int main()
{

    int c;

    while ((c = getchar()) != EOF)
    {
        switch (c)
        {
        case '\t'://testing if the current character is a TAB
            putchar('\\');
            putchar('t');// writing "\t" as an output instead
            break;

        case '\b'://testing if the current character is a backspace
            putchar('\\');
            putchar('b');// writing "\b" as an output instead
            break;

        case '\\'://testing if the current character is a backslash
            putchar('\\');
            putchar('\\');// writing "\\" as an output instead
            break;

        default:
            putchar(c);// if no case is valid from above we put the current character as it is
            break;
        }
    }

    return 0;
}