#include <stdio.h>
#include <cs50.h>

int main(void)
{
    // asking user for his name
    string name = get_string("What's your name? ");
    // print hello user's name
    printf("Hello,%s\n", name);
}