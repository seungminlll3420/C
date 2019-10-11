#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int B[100000];

void merge(int A[],int p, int q, int r){
        int i = p;
        int j = q+1;
        int k = p;

        while(i <= q && j <= r) {
                if(A[i] <= A[j]) {
                        B[k++] = A[i++];
                }else{
                        B[k++] = A[j++];
                }
        }
        if(i > q) {
                for(int l = j; l<=r; l++) {
                        B[k++] = A[l];
                }
        }else{
                for(int l = i; l<=q; l++) {
                        B[k++] = A[l];
                }
        }
        for(int l =p; l<= r; l++) {
                A[l] = B[l];
        }
}
void mergeSort(int A[], int p, int r){
        if(p<r) {
                int q = (p+r)/2;
                mergeSort(A,p,q);
                mergeSort(A,q+1,r);
                merge(A,p,q,r);
        }
}
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
                q= partition(A,p,r);
                quickSort(A,p,q-1);
                quickSort(A,q+1,r);
        }
}

int main(){
        srand((unsigned)time(0));
        int A[10];
        int B[10];
        int C[100000],D[100000];
        for(int i =0; i<10; i++) {
                A[i] = rand();
                B[i] = A[i];
        }

        mergeSort(A,0,9);
        quickSort(B,0,9);
        printf("merge Sort :");
        for(int i =0; i<10; i++) {
                printf("%d, ",A[i]);
        }
        printf("\nquick Sort:");
        for(int i =0; i<10; i++) {
                printf("%d, ",B[i]);
        }
        for(int i =0; i<5; i++) {
                for(int i =0; i<100000; i++) {
                        C[i] = rand();
                        D[i] = C[i];
                }
                float n1 = clock();
                mergeSort(C,0,99999);
                float n2 = clock();

                float n3 = clock();
                quickSort(D,0,99999);
                float n4 = clock();
                printf("\nmerge Sort: %fsec, quick Sort: %fsec\n",(n2-n1)/ CLOCKS_PER_SEC,(n4-n3)/ CLOCKS_PER_SEC);

        }

}
