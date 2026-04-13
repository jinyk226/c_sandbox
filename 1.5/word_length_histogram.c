#include <stdio.h>
#include "../util.h"

#define IN 1
#define OUT 0

int main()
{
  int c, i, bar, current, count;
  int hist[10];

  current = count = 0;
  bar = '=';

  for (i = 0; i < 10; i++)
  {
    hist[i] = 0;
  }

  while (c_next(&c))
  {

    if (c_blank(&c))
    {
      current = OUT;
      hist[count]++;
      count = 0;
    }
    else if (current == OUT)
    {
      current = IN;
      count++;
    }
    else
    {
      count++;
    }
  }
  putchar('\n');
  for (i = 0; i < 10; i++)
  {
    if (i == 9)
      printf(" 9+|");
    else
      printf("%3d|", i);
    for (int j = 0; j < hist[i]; j++)
      putchar(bar);
    printf("| %d\n", hist[i]);
  }
}