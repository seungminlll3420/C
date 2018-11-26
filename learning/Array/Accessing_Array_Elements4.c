#include<stdio.h>

int main(void){
  int i, sum =0, n = 3;
  int iAr[n];

  for (i=0;i<n;i++)
    iAr[i] = 0;

  printf("Input three numbers:");
  fflush(stdout);
  scanf("%d%d%d",
    &iAr[0], &iAr[1], &iAr[2]);

  for (i=0;i<n;i++)
    printf("%d\n", iAr[i]);

  for (i = 0;i<n;i++)
    sum += iAr[i];
  printf("Sum is %d.", sum);

  return 0;
}
