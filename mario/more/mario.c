#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int height;
    // Prompts user for height
    do
    {
        height = get_int("Height: ");
    }
    while (height < 0 || height > 23);

    // Prints line by line
    for (int i = 0; i < height; i++)
    {
        // Prints spaces for left pyramid
        for (int j = height - (i + 1); j > 0; j--)
        {
            printf(" ");
        }

        // Prints hashes for left pyramid
        for (int k = 0; k < (i + 1); k++)
        {
            printf("#");
        }

        // Prints gap space
        for (int l = 0; l < 2; l++)
        {
            printf(" ");
        }

        // Prints hashes for right pyramid
        for (int m = 0; m < (i + 1); m++)
        {
            printf("#");
        }

        // Prints new line
        printf("\n");
    }
}