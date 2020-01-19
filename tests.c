#include <stdio.h>
int binom[6][6];
int binomial(int n, int k){
  if(n == k|| k == 0) return 1;
  else if(binom[n][k] > -1) return binom[n][k];
  else {
    binom[n][k] = binomial(n-1,k) + binomial(n-1,k-1);
    return binom[n][k];
  }
}
int main(){
  for(int i = 0; i< 6; i++){
    for(int j = 0; j< 6; j++){
      binom[i][j] = -1;
    }
    printf("\n");
  }
  int o = binomial(4,5);
  for(int i = 0; i< 6; i++){
    for(int j = 0; j< 6; j++){
      printf("%d, ", binom[i][j]);
    }
    printf("\n");
  }
}

int mat(int i,int j){
  if(i == 1 && j== 1)
    return m[i][j]
    else if(i == 1){

    }
}
