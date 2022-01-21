#include <stdio.h>

#define IN 0  /* inside a word */
#define OUT 1 /* outside a word */

int main()
{
    int num_char = 0;  /* total characters */
    int num_lines = 0; /* total lines */
    int num_words = 0; /* total words */
    int c;             /* current character using command getchar */
    int state = OUT;   /* state of current character */

    while ((c = getchar()) != EOF) /* loop through text until end-of-file/text is reached */
    {
        num_char++; /* add to num of characters */
        if ((c == ' ') || (c == '\n') || (c == '\t') || (c == '.') || (c == ';') || (c == ':')) /* check for specified delimiters */
        {
            state = OUT;   /* state is outside of word */
            if (c == '\n') /* case if c is a newline character */
            {
                num_lines++; /* add to num of lines */
            }
        }
        else
        {
            num_words += state;
            state = IN; /* state is inside of word */
        }
    }

    printf("\nLines, Words, Characters:\n"); /* output lines, words, and characters */
    printf("%d     %d     %d\n", num_lines, num_words, num_char);
    return 0;
}