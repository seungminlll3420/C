#include <stdio.h>
#define MAX_N 20000
int product[MAX_N];
int N = 0;
int partition(int A[],int p,int r){
        int i = p;
        int j = r;
        int l =p-1;
        while(i != r) {
                if(A[r] > A[i]) {
                        l++;
                        int temp = A[i];
                        A[i] = A[l];
                        A[l] = temp;

                }
                i++;
        }
        int temp = A[l+1];
        A[l+1] = A[r];
        A[r] = temp;
        return l+1;
}
void quickSort(int A[],int p,int r){
        int q;
        if(p<r) {
                q=partition(A,p,r);
                quickSort(A,p,q-1);
                quickSort(A,q+1,r);
        }
}
int main() {
        int T;
        int sum=0, q,w;
        freopen("input.txt", "r", stdin);
        scanf("%d", &T);
        for (int i = 0; i < T; i++) {
                scanf("%d", &N);
                for (int j = 0; j < N; j++) scanf("%d", &product[j]);
                quickSort(product,0,N-1);
                w =3;
                for(int j = N-1; 0<=j; j--) {
                        if(w == 1) {
                                w=3;
                                continue;
                        }
                        sum += product[j];
                        w--;
                }
                printf("%d\n", sum);
                sum=0;
        }

}
