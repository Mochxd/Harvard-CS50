#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, string argv[])
{
    // check if the user input more than 2 argc
    if (argc != 2)
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }
    string key = argv[1];
    // check if rthe user input a character
    for (int i = 0 ; i < strlen(key) ; i++)
    {
        if (isalpha(key[i]))
        {
            printf("Usage: ./caesar key\n");
            return 1;
        }
    }
    // convert string to integer
    int k = atoi(key);
    // get text from the user
    string plaintext = get_string("plaintext: ");
    // printf(ciphertext)
    printf("ciphertext: ");
    for (int i = 0 ; i < strlen(plaintext) ; i++)
    {
        if (isupper(plaintext[i]))
        {
            printf("%c", (((plaintext[i] - 65) + k) % 26) + 65);
        }
        else if (islower(plaintext[i]))
        {
            printf("%c", (((plaintext[i] - 97) + k) % 26) + 97);
        }
        else
        {
            printf("%c", plaintext[i]);
        }
    }
    printf("\n");

}