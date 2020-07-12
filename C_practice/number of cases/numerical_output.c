#include <stdio.h>

#define N 7
#define K 4

int m =0;
int result[K+1];

int combi(int h, int index){
        if(h == K+1) {
                printf("\n %d \n",m++);
                for(int i =1; i<=K; i++) printf("%d ", result[i]);

                printf("\n");
                return;
        }
        for(int j = index; j<= N; j++) {
                result[h] = j;
                combi(h+1, j+1);
        }

}

int main(){
        combi(1,1);
}
