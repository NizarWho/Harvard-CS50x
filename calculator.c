#include <cs50.h>
#include <stdio.h>

int main (void)
{
    
    long x = get_int("x: ");

    long y = get_int("y: ");

    long z = x + y;

    printf ("%li\n", z);
}