void bubbleSort(int data[],int n){
        int temp;
        for(int i = 0; i<n; i++) {
                for(int j =0; j<n; j++) {
                        if(data[j] > data [j+1]) {
                                temp=data[j];
                                data[j] = data[j+1];
                                data[j+1] = temp;
                        }
                }
        }
}
