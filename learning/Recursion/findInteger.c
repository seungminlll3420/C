#include <stdio.h>

int findInteger(int a[],int f,int l,int n){
  int m = (f+l)/2;

  if(a[m] == n){
    return a[m];
  }else if(a[m] < n){
    return findInteger(a,f,m,n);
  }else
    return findInteger(a,m,l,n);
}



int main(){
  int a[100];
  for(int i=0;i<100;i++){
    a[i] = i+1;
  }
  int i =findInteger(a,0,99,10);
  printf("%d", i);
  return 0;
}
