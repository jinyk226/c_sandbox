#include <stdio.h>
#include "../util.h"
#define MAXLINE 1000

int readline(char line[], int maxline);
void copy(char to[], char from[]);

int main()
{
  int len;
  int max;
  char line[MAXLINE];
  char longest[MAXLINE];

  max = 0;
  while ((len = readline(line, MAXLINE)) > 0)
  {
    if (len > max)
    {
      max = len;
      copy(longest, line);
    }
  }
  if (max > 0)
    printf("%d CHARACTERS:\n%s", max, longest);
  return 0;
}

int readline(char s[], int lim)
{
  int c, i;

  for (i = 0; i < lim - 1 && c_next(&c) && c != '\n'; i++)
    s[i] = c;
  if (c == '\n')
  {
    s[i] = c;
    i++;
  }
  s[i] = '\0';
  return i;
}

void copy(char to[], char from[])
{
  int i = 0;
  while ((to[i] = from[i]) != '\0')
    i++;
}