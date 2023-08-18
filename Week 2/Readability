#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
int count_letters(string text);
int count_words(string text);
int count_sentences(string text);
int main(void)
{
    // decleration for text, letters,wordsand sentences
    string text;
    int letters, words, sentences;
    // get text from user
    text = get_string("Text: ");
    // calling function for knowing the number of letters
    letters = count_letters(text);
    // calling function for knowing the number of words
    words = count_words(text);
    // calling function for knowing the number of sentences
    sentences = count_sentences(text);
    // decleration for L
    double L = (letters/(float)words) * 100;
    // decleration for S
    double S = (sentences/(float)words) * 100;
     // decleration for index
    int index = round(0.0588 * L - 0.296 * S - 15.8);
    // print the grade
    if (index >= 16)
    {
        printf("Grade 16+\n");
    }
    else if (index < 1)
    {
        printf("Before Grade 1\n");
    }
    else
    {
        printf("Grade %i\n", index);
    }

}
int count_letters(string text)
{
    int letters = 0;
    for (int i = 0 ; i < strlen(text) ; i++)
    {
        if (isalpha(text[i]) != 0)
        {
            letters++;
        }
    }
    return letters;
}
int count_words(string text){
    int words = 1;
    for(int i = 0 ; i < strlen(text) ; i++)
    {
        if (text[i] == ' ')
        {
            words++;
        }
    }
    return words;
}
int count_sentences(string text){
    int sentences = 0;
    for(int i = 0 ; i < strlen(text) ; i++)
    {
        if (text[i] == '!' || text[i] == '?' || text[i] == '.' )
        {
            sentences++;
        }
    }
    return sentences;
}

