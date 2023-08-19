#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
int main(int argc, string argv[])
{
    // chexk if the user input more than 2 argc
    if (argc != 2)
    {
        printf("Usage: ./substitution key\n");
        return 1;
    }
    string key = argv[1];
    // check if there is an input is not alphapitic
    for (int i = 0 ; i < strlen(key) ; i++)
    {
        if (!isalpha(key[i]))
        {
            printf("Usage: ./substitution key\n");
            return 1;
        }
    }
    // check if argv1 is not equal 26 character
    if (strlen(key) != 26)
    {
        printf("Key must contain 26 characters.\n");
        return 1;
    }
    // check if there are 2 character in argv1 similar
    for (int i = 0 ; i < strlen(key) ; i++)
    {
        for (int j = i + 1 ; j  < strlen(key) ; j++)
        {
            if (key[i] == key[j])
            {
                printf("Key must contain 26 characters.\n");
                return 1;
            }
        }
    }
    for (int i = 0 ; i < strlen(key) ; i++)
    {
        if (islower(key[i]))
        {
            key[i] = key[i] - 32;
        }
    }
    string plaintext = get_string("plaintext: ");
    printf("ciphertext: ");
    for (int i = 0 ; i < strlen(plaintext) ; i++)
    {
        if (islower(plaintext[i]))
        {
            int x = plaintext[i] - 97;
            printf("%c", key[x] + 32);
        }
        else if (isupper(plaintext[i]))
        {
            int x = plaintext[i] - 65;
            printf("%c", key[x]);
        }
        else
        {
            printf("%c", plaintext[i]);
        }
    }
    printf("\n");
}