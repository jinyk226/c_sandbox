#include <stdio.h>
#include <ctype.h>
#include "../util.h"

int main()
{
  int c;
  int hist[27];

  for (int i = 0; i < 27; i++)
    hist[i] = 0;

  while (c_next(&c))
  {
    if (c >= 'a' && c <= 'z')
      hist[tolower(c) - 'a']++;
    else
      hist[26]++;
  }

  putchar('\n');
  for (int i = 0; i < 27; i++)
  {
    if (i == 26)
      printf("other|");
    else
      printf("%5d|", i);
    for (int j = 0; j < hist[i]; j++)
      putchar('=');
    printf("| %d\n", hist[i]);
  }
}