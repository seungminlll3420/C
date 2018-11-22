#include<stdio.h>

int main(void){
  int ndigit[10];
  int n = 10;

  int i;
  for (i=0;i<10;i++){
    ndgit[i] = 0;
  }
  for (i=0;i<=9;i++){
    ndigit[i] = 0;
  }

  for (i=0;i<n;i++)
  {ndigit[i] = i
  }
  for (i = 0; i<n; i++){
    printf("%d, ", ndigit);
  }
  return 0;
}
