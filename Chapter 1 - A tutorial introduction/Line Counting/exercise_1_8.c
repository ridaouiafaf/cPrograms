#include <stdio.h>

/*Write a program to count blanks, tabs, and newlines.*/

int main()
{

	int nt, nb, nl;
	int c;

	nb = 0;
	nt = 0;
	nl = 0;
	//initiallizing
	while ((c = getchar()) != EOF) // Press CTRL-D to see the results since we have no file to be ended!!
	{
		if (c == '\t')//testing if the current character is a TAB
			++nt;
		if (c == '\n')//testing if the current character is a newline
			++nl;
		if (c == ' ')//testing if the current character is a blank
			++nb;
	}
	printf("Blanks:%d, Tabs:%d, Lines:%d\n", nb, nt, nl);//show output
	
	return 0;
}
