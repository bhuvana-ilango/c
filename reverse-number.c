/**
 * This program takes n, a number as input
 * and it in reverse.
 * 
 * Eg: 123 -> 321
 * 
 * 06-02-2021
 * 
 * Author: Bhuvana I
 */

#include <stdio.h>
#include <cs50.h>
int main ()
{
    int n = get_int ("Number? ");
    while (n > 0)
    {
        int r = n % 10;
        printf("%d", r);
        n = n/10;
    }
    return 0;
}
