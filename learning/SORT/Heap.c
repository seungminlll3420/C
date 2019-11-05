#include <stdio.h>
void heapify(int A[],int k, int n){
        int Lt;
        int Rt;
        int smaller;
        int temp;
        Lt = 2*k;
        Rt = 2*k+1;
        if(Rt<=n) {
                if(A[Lt] < A[Rt]) smaller = Lt;
                else smaller = Rt;
        }else if(Lt <= n) smaller =Lt;
        else return;

        if(A[smaller] < A[k]) {
                temp = A[k];
                A[k] =A[smaller];
                A[smaller] = temp;
                heapify(A, smaller, n);
        }
}
void buildHeap(int A[], int n){
        for(int i = n/2; i > 0; i--) heapify(A,i,n);
}

void heapSort(int A[],int n){
        int temp;
        buildHeap(A,n);
        for(int i = n; i >= 2; i--) {
                temp = A[1];
                A[1] =A[i];
                A[i] = temp;
                heapify(A,1,i-1);
        }
}
int main(){
        int A[10] = {47,4,23,41,568,1,436,234,5678,684};
        heapSort(A,10);
        for(int i =0; i<10; i++) {
                printf("%d, ", A[i]);
        }

}
