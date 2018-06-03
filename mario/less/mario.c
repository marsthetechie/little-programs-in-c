#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int height;
    // Prompts the user for height
    do
    {
        height = get_int("Height: ");
    }
    while (height < 0 || height > 23);

    // Prints half-pyramid
    for (int i = 0; i < height; i++)
    {
        // Prints spaces
        for (int j = (height + 1) - (i + 2); j > 0; j--)
        {
            printf(" ");
        }

        // Prints hashes
        for (int k = 0; k < i + 2; k++)
        {
            printf("#");
        }

        // Prints new line
        printf("\n");
    }
}