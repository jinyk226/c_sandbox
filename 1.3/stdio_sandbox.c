#include <stdio.h>

int main()
{
  int c;

  while (1)
  {
    c = getchar();
    if (c == EOF)
    {
      printf("EOF Reached! EOF value: %d\n", c);
      break;
    }
    putchar(c);
  }
}
