#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void selectionSort(int A[], int n){
  if(n == 0){
    return ;
  }
  int max =0;
  int j =0;
  for(int i=0 ;i<n;i++){
    if(max < A[i]){
      max = A[i];
      j = i;
    }
  }
  A[j] = A[n-1];
  A[n-1] = max;
  selectionSort(A,n-1);
}

int main(){
  srand((unsigned)time(0));
  int A[1000];
  for(int i =0; i<1000; i++)  A[i] = rand();
  float n1 = clock();
  selectionSort(A,1000);
  float n2 = clock();
  for(int i =0;i<1000;i++) printf("%d, ",A[i]);
  printf("time : %f", n2-n1);
}
