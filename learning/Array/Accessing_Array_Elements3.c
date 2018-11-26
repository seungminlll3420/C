#include<stdoi.h>

int main(void){
  int i, n = 5;
  int iArr[n];

  for (i = 0; i < n; i++)
    iArr[i] = 0;

  printf("Input five numbers:");
  fflush(stdout);

  scanf("%d%d%d%d%d",
  &iArr[0],
  &iArr[1],
  &iArr[2],
  &iArr[3],
  &iArr[4]);

  for(i=0;i<n;i++)
    printf("%d\n", iArr[i]);

  return 0;
}
