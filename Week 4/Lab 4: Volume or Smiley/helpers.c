#include "helpers.h"

void colorize(int height, int width, RGBTRIPLE image[height][width])
{
    // loop for height and width
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            // if pixels for the photo are black
            if (image[i][j].rgbtRed == 0x00 && image[i][j].rgbtGreen == 0x00 && image[i][j].rgbtBlue == 0x00)
            {
                // Make black pixels turn red
                image[i][j].rgbtRed = 0xff;
            }
        }
    }
}

