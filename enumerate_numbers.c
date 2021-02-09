/**
 * This program prints the first n natural numbers
 * 06-02-2021
 * 
 * Author: Bhuvana I
 */
#include <stdio.h>
#include <cs50.h>

int main()
{
    int n = get_int("Print all numbers till? ");
    for (int i=1; i<=n; i++)
    {
        printf("%d\n", i);
    }
    return 0;
}