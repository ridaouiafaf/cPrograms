#include <stdio.h>

// URL = http://codeforces.com/problemset/problem/1/A

int main()
{

    long long int i,n, m, a, fy=1ll,fx=1ll;
    
    
    scanf("%d %d %d", &n, &m, &a);

    int x=a, y=a;
    
    for (i = 1ll; x < n; i++)
    {
        x+=a;
        fx++;

    }
    for (i = 1ll; y < m; i++)
    {
        y+=a;
        fy++;
    }
    printf("%lld\n",fy*fx);

    return 0;
}
