#include <ctype.h>
#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(int argc, string argv[])
{

    // Checks if a user has entered a key
    if (argc != 2)
    {
        printf("Usage: ./vigenere k\n");
        return 1;
    }
    else
    {
        for (int i = 0; i < strlen(argv[1]); i++)
        {

            // Make sure only letters are passed as key
            if (!isalpha(argv[1][i]))
            {
                printf("Please give only the letters\n");
                return 1;
            }
        }
    }

    string key = argv[1];

    // Get the text from user to encrypt
    string plaintext = get_string("plaintext: ");
    int length = strlen(key);

    // Print the result
    printf("ciphertext: ");

    for (int i = 0, j = 0; i < strlen(plaintext); i++)
    {
        // Reset after hitting the end of a key string
        if (j == strlen(key))
        {
            j = 0;
        }

        int k = tolower(key[j % length]) - 'a';

        // Check if it's uppercase, lowercase or special character to preserve its format
        if (isupper(plaintext[i]))
        {
            printf("%c", (((plaintext[i] + k - 65) % 26) + 65));
            j++;
        }
        else if (islower(plaintext[i]))
        {
            printf("%c", (((plaintext[i] + k - 97) % 26) + 97));
            j++;
        }
        else
        {
            printf("%c", plaintext[i]);
        }
    }
    printf("\n");
    return 0;

}