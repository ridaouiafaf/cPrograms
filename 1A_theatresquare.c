#include <stdio.h>

// URL = http://codeforces.com/problemset/problem/1/A

int main()
{

    int n, m, a, i = 1;
    int surface, flagstone, x, exit;
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
            exit = 1;
        }
        else
        {
            if (x < surface)
            {
                x = flagstone * i;
                i++;
                exit = 0;
            }
            else
            {
                if (x % surface == 0)
                {
                    printf("%d", i);
                    exit = 1;
                }
                else
                {
                    x = flagstone * i;
                    i++;
                    exit = 0;
                }
            }
        }

    } while (exit == 0);

    return 0;
}