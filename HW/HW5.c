#include <stdio.h>
void selectionSort(int data[], int n){
  int max=0;
  int a;
  int j;
  for(int i =0; i<n;i++){
    max =0;
    for(j = 0; j<n-i; j++){
      if(data[j] > max){
        max = data[j];
        a = j;
      }
    }
    data[a]= data[n-i];
    data[n-i] = max;
  }
}
void bubbleSort(int data[], int n){

}
void insertionSort(int data[], int n){

}
int main(){
  int data[] ={3,31,48,73,8,11,20,29,65,15};
  selectionSort(data, 10);
  for(int i =0;i<10;i++){
    printf("%d, ",data[i]);
  }
}
