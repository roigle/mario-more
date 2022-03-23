#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // declare the variable for the height of the pyramid
    int height;

    // ask the user for a height (between 1 and 8, both included)
    do
    {
        height = get_int("Height: ");
    }
    while (height < 1 || height > 8);

    // iterate as many times as the height
    for (int i = 1; i <= height; i++)
    {
        // iterate to print the # and the spaces
        for (int space = (height - 1); space >= i; space--)
        {
            printf(" ");
        }
        for (int hash = 0; hash < i; hash++)
        {
            printf("#");
        }
        printf("  ");
        for (int newhash = 0; newhash < i; newhash++)
        {
            printf("#");
        }
        printf("\n");
    }
}