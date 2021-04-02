#include <stdio.h>
int power(int m, int n); //function prototype
/* test power function */
int main()
{
    int i;
    for (i = 0; i < 10; ++i)
        printf("%d ^2=%d, ^(-3)=%d\n", i, power(2, i), power(-3, i));
    return 0;
}
/*definition of power function that raises a "base" to "n"-th power; where n is >= 0 */
int power(int base, int n)
{
    int i, p;// p is a variable to store the calculated result
    p = 1;
    for (i = 1; i <= n; ++i)// we stop at n because it's the power value
        p = p * base;// each time we re-multiple the result with the base
    return p;
}
/*
for e.g.: base = 2, n=3. we know that 2^3=8
with the function it will be calculated this way
we start with 1 (i=1 <=> 2^1, and p=1)
p=p*base is basically p=1*2=2 , which is true! 2^1=2!
we go back and do i+1 so we have (i=2 <=> 2^2, and p=2)
p=p*base <=> p=2*2=4 which is true! 2^2=4!
we go back and do i+1 so we have (i=3 <=> 2^3, and p=4)
p=p*base <=> p=2*4=8 which is true! 2^3=8!
we go back and do i+1 so we have (i=3 <=> 2^3, and p=4)
but wait i = 4 > 3 so the loop stops there and return the p value!
*/