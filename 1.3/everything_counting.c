#include <stdio.h>

int main()
{
  int c = 0, blank_count = 0, tab_count = 0, newline_count = 0;

  while ((c = getchar()) != EOF)
  {
    if (c == ' ')
      blank_count++;
    if (c == '\t')
      tab_count++;
    if (c == '\n')
      newline_count++;
  }
  printf("\nblank_count:    %d\n", blank_count);
  printf("tab_count:      %d\n", tab_count);
  printf("newline_count:  %d\n", newline_count);
}