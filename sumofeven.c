#include <stdio.h>
#include <cs50.h>

int main()
{
    int r = 0;
    int p = 0;
    int s = 0;
    int n = get_int("Number = ");
    while (n > 0)
    {
        r = n % 10;
        n = n / 10;
        if (p % 2 != 0)
        {
            s = s + r;
        }
        p = p + 1;
    }
    printf("sum of even numbers = %d\n" , s );
    return 0;
}