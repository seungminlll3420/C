CountingSort(int A[], int B[], int n){
  int C[n];
  for(int i=1;i<k;i++) C[i] = 0;
  for(int i = 1 ; i< n i++) C[A[j]]++;
  for(int i=1; i<k;i++) C[i] += C[i-1];
  for(int j = n; j>0;j-- ){
    B[C[A[j]]] = A[j];
    C[A[j]]--;
  }
}
