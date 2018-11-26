#include<stdio.h>

int main(void){
  int x = 1, y; double d = 3.14, e;
  int *pi = NULL;
  double *pd = NULL;

  pi = &x;
  y = *pi;
  *pi = *pi + 1;
  printf("x, *pi, y is %d %d %d.\n", x, *pi, y);

  pd = &d;
  e = *pd;
  *pd += 3.14;
  printf("d, *pd, e is %.2f.\n", d , *pd, e);

  return 0;
}
