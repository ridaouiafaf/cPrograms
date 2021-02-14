#include <stdio.h>

// URL = http://codeforces.com/problemset/problem/1/A

int main()
{

    long long int n, m, a, fy=1,fx=1;
    
    
    scanf("%lld %lld %lld", &n, &m, &a);

    int x=a, y=a;
    
    for (int i = 1; x < n; i++)
    {
        x+=a;
        fx++;

    }
    for (int i = 1; y < m; i++)
    {
        y+=a;
        fy++;
    }
    printf("%lld\n",fy*fx);
    

    return 0;
}