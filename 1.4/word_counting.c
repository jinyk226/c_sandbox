#include <stdio.h>

#define IN 1  /* inside a word */
#define OUT 0 /* outside a word */

// count lines, words, and characters in input

int main()
{
  int c, new_line, new_word, new_char, state;

  state = OUT;
  new_line = new_word = new_char = 0;

  while ((c = getchar()) != EOF)
  {
    new_char++;
    if (c == '\n')
      new_line++;
    if (c == ' ' || c == '\n' || c == '\t')
      state = OUT;
    else if (state == OUT)
    {
      state = IN;
      new_word++;
    }
  }
  printf("%5d %5d %5d\n", new_line, new_word, new_char);
}
