#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Asking user for height and check if the height is between 0 and 8
    int height;
    do
    {
        height = get_int("Height: ");
    }
    while (height < 1 || height > 8);
    // print the shape of mario
    for (int i = 0 ; i < height ; i++)
    {
        for (int j = 0 ; j < height ; j++)
        {
            if (i + j >= height - 1)
            {
                printf("#");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}