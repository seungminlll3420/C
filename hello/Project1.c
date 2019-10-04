#include <stdio.h>
#define MAX_N 15
int weight[MAX_N+1];
int result = 0;
int N = 0;
void countTeams(int h, int wA, int wB, int wC) {
  if(h == N){
    if((wA == wB)&(wB == wC)) result++;
    return ;
  }else{
    h++;
    countTeams(h,wA,wB,wC);
    countTeams(h,wA+weight[h],wB,wC);
    countTeams(h,wA,wB+weight[h],wC);
    countTeams(h,wA,wB,wC+weight[h]);
  }
}
int main() {
  int T;
  int wA = 0, wB = 0, wC = 0;
  freopen("input.txt", "r", stdin);
  scanf("%d", &T);
  for (int i = 0; i < T; i++) {
    scanf("%d", &N);
    for (int j = 1; j <= N; j++)
      scanf("%d", &weight[j]);
    wA =0; wB = 0; wC =0;
    countTeams(0,wA,wB,wC);
    printf("%d \n", result);
    result = 0;
  }
}
