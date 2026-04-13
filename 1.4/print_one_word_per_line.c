#include <stdio.h>

#define IN 1
#define OUT 0

int main()
{
  int c, current;

  c = current = 0;

  while ((c = getchar()) != EOF)
  {
    if (c == ' ' || c == '\n' || c == '\t')
    {
      putchar('\n');
      current = OUT;
    }
    else if (current == OUT)
    {
      putchar(c);
      current = IN;
    }
    else
    {
      putchar(c);
    }
  }
}