#include <stdio.h>

/*Write a program to copy its input to its output, replacing each string of one or
more blanks by a single blank.*/

int main()
{

	int c[50], ch;

	for (int i = 1; ch != EOF; i++)
	{
		ch = getchar();

		if (i==0)
		{
			c[i]= ch;
		}
		else
		{
			if (c[i - 1] != ' ')
			{
				c[i] = ch;
			}
			else
			{
				i++;
			}
		}
		putchar(c[i]);
	}

	return 0;
}