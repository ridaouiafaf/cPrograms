#include <stdio.h>

int main(int argc, char const *argv[])
{
    int w;// weight variable reservation

    scanf("%d",&w); // reading w's value giving by the user
    
    if(w>2 && w%2==0)
        printf("YES");
        /*
        - w>2  condition:
        we are testing if it's bigger than 2 because if it's the case they will have 1 kilo/person
        which isn't an even number. Also if someone will gets 2 kilos 
        and the other one 0 kilo that would be also wrong. Same case for 1, beside the chance
        to get a negative value & it is an odd number and both aren't acceptable.
        - w%2==0 condition:
        because any even number bigger than 2 can be divided into two even numbers or more
        e.g: 6 -> one can have 4 and the other can have 2
        8-> 6,2 or 4,4
        etc...*/
    else
    {
        printf("NO");
        /* And then obviously if it is not the case as in if conditional instruction
        it will not be divided as it is required in the problemset.*/
    }
}
//  Its url = http://codeforces.com/problemset/problem/4/A