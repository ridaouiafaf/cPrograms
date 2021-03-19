#include <stdio.h>

/*Write a program to count blanks, tabs, and newlines.*/

int main()
{

	int nt, nb, nl;
	int c;

	nb = 0;
	nt = 0;
	nl = 0;
	while ((c = getchar()) != EOF) // Press CTRL-D to see the results since we have no file to be ended!!
	{
		if (c == '\t')
			++nt;
		if (c == '\n')
			++nl;
		if (c == ' ')
			++nb;
	}
	printf("Blanks:%d, Tabs:%d, Lines:%d\n", nb, nt, nl);
	
	return 0;
}
