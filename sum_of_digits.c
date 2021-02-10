/**
 * This program prints the sum of the digits
 * 08-02-2021
 * 
 * Author: Bhuvana I
 */
#include <stdio.h>
#include <cs50.h>
int main ()
{   
    int s = 0;
    int r = 0;
    int n = get_int ("Number? ");
    while (n > 0)
    {
        r = n % 10;
        n = n / 10;
        s = s + r;
    }
    printf("sum of the digits = %d\n" , s);
    return 0;
}
