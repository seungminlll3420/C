#include<stdio.h>
void selectionSort(int data[],int n){
    //선택정렬구현
    int max, a=0;
    for(int i = 0; i < n; i++){
      max =0;
      for(int j =0; j <n-i; j++){
        if(max < data[j]){
          max = data[j];
          a = j;
        }
      }
      data[a] = data[n-i-1];
      data[n-i-1] = max;
    }
  }
void bubbleSort(int data[],int n){
  int temp;
    for(int i = 0; i<n;i++){
      for(int j =0; j<n;j++){
        if(data[j] > data [j+1]){
           temp=data[j];
           data[j] = data[j+1];
           data[j+1] = temp;
        }
      }
    }
  }
void insertionSort(int data[],int n){
    int num;
    for(int i=0; i<n;i++){
      if(data[i] > data[i+1]){
        num = data[i+1];
        data[i+1] = data[i];
        for(int j = i-1; j >= 0;j--){
          if(j==0){
            if(data[j] < num){
              data[j+1] = num;
            }else{
              data[j+1] = data[j];
              data[j] = num;
            }
            break;
          }
          if(data[j] < num){
            data[j+1] = num;
            break;
          }
          data[j+1] = data[j];
        }
      }
    }
  }
int main(){
     //입력데이터를이용해서각함수호출
     //함수호출후정렬된배열을화면에출력
     int data[] ={8,31,48,73,3,65,20,29,11,15};
     // selectionSort(data,10);
     // bubbleSort(data,10);
    insertionSort(data,10);
     for(int i = 0; i<10 ; i++) printf("%d, ", data[i]);

}
