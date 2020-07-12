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
