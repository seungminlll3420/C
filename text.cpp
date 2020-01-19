#include <iostream>
using namespace std;

template <class T1>

bool biggest(T1 x, T1 y[], int a){
  for(int i = 0 ; i < a; i++){
    if(y[i] == x) return true;
  }
  return false;
}

int main(){
  int x[] = {1,10,100,5,4};
  cout << biggest(100,x,5);;
}
