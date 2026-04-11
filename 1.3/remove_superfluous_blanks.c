#include <stdio.h>

int main()
{
  int c;
  int skip_count = 0;

  while ((c = getchar()) != EOF)
  {
    putchar(c);
    if (c == ' ')
    {
      while ((c = getchar()) == ' ')
      {
        skip_count++;
      }
      putchar(c);
    }
  }
  printf("\nSkip count:%d\n", skip_count);
}