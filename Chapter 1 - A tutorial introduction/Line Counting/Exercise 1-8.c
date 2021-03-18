#include <stdio.h>

/*Write a program to count blanks, tabs, and newlines.*/

int main() {
	
	int nb, nt, nl;
	int c;
	
	nb=0; nt=0; nl=0;
	while((c = getchar())!=EOF){
		if(c=='\t')
		++nb;
		if(c=='\n')
		++nl;
		
	}
	printf("Blanks: %d, Tabs:%d, Lines:%d\n",nb,nt,nl);
	return 0;
}
