#include <stdio.h>

void f_to_c(void)
{
  float fahr, celsius;
  int lower, upper, step;

  lower = 0;
  upper = 300;
  step = 20;

  fahr = lower;
  printf("%3s %6s\n", "f", "c");
  while (fahr <= upper)
  {
    celsius = (fahr - 32.0) * 5.0 / 9.0;
    printf("%3.0f %6.1f\n", fahr, celsius);
    fahr = fahr + step;
  }
}

void c_to_f(void)
{
  float f, celsius;
  int lower, upper, step;

  lower = -50;
  upper = 50;
  step = 10;

  celsius = lower;
  printf("%6s %6s\n", "c", "f");
  while (celsius <= upper)
  {
    f = (celsius * 9 / 5) + 32;
    printf("%6.1f %6.0f\n", celsius, f);
    celsius = celsius + step;
  }
}

int main(void)
{
  f_to_c();
  c_to_f();
}