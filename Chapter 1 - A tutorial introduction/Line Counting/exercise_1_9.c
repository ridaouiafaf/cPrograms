#include <stdio.h>

/*Write a program to copy its input to its output, replacing each string of one or
more blanks by a single blank.*/

int main()
{

	int c[50], ch;
	// table to store characters & a variable to read character by character.

	for (int i = 0; ch != EOF; i++)
	{
		ch = getchar();

		if (i==0)
		{
			c[i]= ch;// when we are at the first element, which is c[0], 
			//we can't do the upcoming steps so we just assign directly ch value.
		}
		else
		{
			if (c[i - 1] != ' ')
			{
				c[i] = ch; 
				/*We test if the previous element is not a blank, if so, we add the current element no matter what it is*/
			}
			else
			{
				continue;
				// if not, which means the previous element is a blank, we don't add it and we continue.
			}
		}
		putchar(c[i]);// we write each character in time!
	}

	return 0;
}