#include <stdio.h>

// Calculate the f(x) of {1,2,3...10} where f(x)= x * 2. 
// Note that f(x)∈ N and x ∈ N 

int main()
{
    int x;
    fx;
    int xn, x0, step;
    x0 = 1;   /* lower limit of x */
    xn = 10; /* upper limit */
    step = 1;   /* step */
    x = x0;
    while (x <= xn)
    {
        fx = x * 2;
        printf("x= %d, f(x)= %d\n", x, fx);
        x = x + step;
    }
}