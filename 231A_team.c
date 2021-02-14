#include <stdio.h>

// URL = http://codeforces.com/problemset/problem/231/A

int main()
{
    int petya, vasya, tonya, n, sum=0;
    // petya, vasya & tonya are variables for the 3 friends which will be filled by 0 or 1
    // n is for how much problems do we have
    // sum is for how much problems we have 2 of the friends or more whom sure they can solve a problem

    scanf("%d", &n); // reading how much problems we will have

    for (int i = 0; i < n; i++)
    {
        scanf("%d%d%d", &petya, &vasya, &tonya);
        if (petya + vasya + tonya >= 2)
            sum += 1;
    }
    /* We ask each time about who is sure about solving problem number i 
    giving 1 when sure and 0 when not to each one. 
    And everytime time, when we get the 3 answers, we check if the sum is 2 or more.
    Because if it is, then that means we have 2 or the 3 of them are sure about the solution. 
    Therefore we add 1 to sum to count how much problems they are sure about solving it.
    */ 

    printf("%d\n",sum);
    // we write the number of problems, that they ca solve, we got at the end
}