#include <stdlib.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>
#include <stdio.h>

int main(int argc, string argv[])
{

    // Get key from a user (has to have 2 arguments)
    if (argc != 2)
    {
        printf("Usage: ./caesar k\n");
        return 1;
    }

    int k = atoi(argv[1]);

    // Get string input from the user
    string p = get_string("plaintext: ");
    int n = strlen(p);

    // Cipher the text and print the result
    printf("ciphertext: ");
    for (int i = 0; i < n; i++)
    {

        // Check if it's uppercase, lowercase or special character to preserve its format
        if (isupper(p[i]))
        {
            printf("%c", (((p[i] + k) - 65) % 26) + 65);
        }
        else if (islower(p[i]))
        {
            printf("%c", (((p[i] + k) - 97) % 26) + 97);
        }
        else
        {
            printf("%c", p[i]);
        }
    }
    printf("\n");
    return 0;
}