#include <stdio.h>

/*
When you type a tab, the terminal intercepts it for autocomplete and never sends it to your program. When you type a backspace, the terminal deletes
the previous character in the buffer before sending the line.

To actually test this, pipe in a file that contains those characters
*/
int main()
{
  int c;

  while ((c = getchar()) != EOF)
  {
    if (c == '\t')
      printf("\\t");
    else if (c == '\b')
      printf("\\b");
    else if (c == '\\')
      printf("\\\\");
    else
      putchar(c);
  }
}