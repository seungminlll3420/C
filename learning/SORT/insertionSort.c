void insertionSort(int data[],int n){
        int num;
        for(int i=0; i<n; i++) {
                if(data[i] > data[i+1]) {
                        num = data[i+1];
                        data[i+1] = data[i];
                        for(int j = i-1; j >= 0; j--) {
                                if(j==0) {
                                        if(data[j] < num) {
                                                data[j+1] = num;
                                        }else{
                                                data[j+1] = data[j];
                                                data[j] = num;
                                        }
                                        break;
                                }
                                if(data[j] < num) {
                                        data[j+1] = num;
                                        break;
                                }
                                data[j+1] = data[j];
                        }
                }
        }
}
