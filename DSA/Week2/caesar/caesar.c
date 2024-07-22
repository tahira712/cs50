#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(int argc, string argv[])
{
    // Check if exactly one command-line argument (besides ./caesar) is provided
    if (argc != 2)
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }

    // Validate the key (argv[1]) to ensure it consists only of digits
    string key_string = argv[1];
    for (int i = 0, n = strlen(key_string); i < n; i++)
    {
        if (!isdigit(key_string[i]))
        {
            printf("Usage: ./caesar key\n");
            return 1;
        }
    }

    // Convert the key to an integer
    int k = atoi(key_string);

    // Get plaintext input from user
    string plaintext = get_string("plaintext: ");

    // Encrypt and print ciphertext
    printf("ciphertext: ");
    for (int i = 0, n = strlen(plaintext); i < n; i++)
    {
        if (islower(plaintext[i]))
        {
            printf("%c", 'a' + (plaintext[i] - 'a' + k) % 26);
        }
        else if (isupper(plaintext[i]))
        {
            printf("%c", 'A' + (plaintext[i] - 'A' + k) % 26);
        }
        else
        {
            printf("%c", plaintext[i]);
        }
    }
    printf("\n");

    return 0;
}
