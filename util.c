#include "util.h"

int c_next(int *c)
{
  *c = getchar();
  return *c != EOF;
}