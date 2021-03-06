#include <stdio.h>
#include <math.h>
#define N 8
int cols[N+1];
int promising(int h){
        for(int i = 1; i< h; i++) {
                if(cols[i] == cols[h]) return 0;
                if(h-i == fabs(cols[h] - cols[i])) return 0;
        }
        return 1;
}

int queens(int h){
        if(!promising(h)) return 0;
        if (h == N) {
                for(int i =1; i<=N; i++) {
                        printf("(%d, %d)\n", i, cols[i]);
                }
                return 1;
        }
        for(int i =1; i<= N; i++) {
                cols[h+1] = i;
                if(queens(h+1)) return 1;
        }
        return 0;
}
int main(){
        if(queens(0) == 1) {
                printf("Success\n");
        }
}
