#include "util.h"

int c_next(int *c)
{
  *c = getchar();
  return *c != EOF;
}

int c_blank(int c)
{
  if (c == ' ' || c == '\n' || c == '\t')
    return 1;
  return 0;
}