#include <stdio.h>

/* Rewrite the temperature conversion program of Section 1.2 to use a function for conversion */

int cel_to_fahr(int f);

int main()
{
    int fahr, celsius;
    int lower, upper, step;
    lower = 0;   /* lower limit of temperature scale */
    upper = 300; /* upper limit */
    step = 20;   /* step size */
    fahr = lower;
    while (fahr <= upper)
    {
        celsius = cel_to_fahr(fahr);
        /*calling the function and giving it the fahr value will return to as the celsius value 
        and will get assigned to the celsius variable*/
        printf("%d\t%d\n", fahr, celsius);
        fahr = fahr + step;
    }
}

/*A function to calculate converte a fahrenheit value into a celsius value*/

int cel_to_fahr(int f)

{
    int c; // a variable to store the calculated celsius value
    c = 5 * (f - 32) / 9;// conversion formula
    return c;// returning the calculated value
}