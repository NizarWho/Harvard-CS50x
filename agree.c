#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // promt user to agree
    char c = get_char("Do you agree? (y/n) ");

    //check agreed
    if (c == 'y' || c == 'Y')
    {
        printf("Agreed. \n");
    }
    else if (c == 'n' || c == 'N')
    {
        printf("Not Agreed. \n");
    }







}