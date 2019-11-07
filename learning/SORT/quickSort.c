int partition(int A[],int p,int r){
        int i = p;
        int j = r;
        int l =p;
        while(i != r) {
                if(A[r] > A[i]) {

                        int temp = A[i];
                        A[i] = A[l];
                        A[l] = temp;
                        l++;

                }
                i++;
        }
        int temp = A[l];
        A[l] = A[r];
        A[r] = temp;
        return l;
}
void quickSort(int A[],int p,int r){
        int q;
        if(p<r) {
                q= partition(A,p,r);
                quickSort(A,p,q-1);
                quickSort(A,q+1,r);
        }
}
