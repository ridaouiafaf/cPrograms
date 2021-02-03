#include <stdio.h>

// URL = http://codeforces.com/problemset/problem/1/A

int main()
{

    int n, m, a, i = 1;
    int surface, flagstone, x, exit = 0;
    scanf("%d %d %d", &n, &m, &a);
    //printf("n= %d, m= %d, a= %d\n",n,m,a);
    surface = n * m;
    flagstone = a * a;
    x = flagstone;


    
    do
    {
        if (x == surface)
        {
            printf("%d", i);
            break;
        }

        if (x < surface)
        {
            x = flagstone * i++;
        }

        if (x > surface)
        {
            int s = 1;
            for (int j = 1; x < surface; j++)
            {
                s = surface * j;
            }
            printf("%d", i);
            exit = 1;
        }

    } while (exit == 0);

    return 0;
}