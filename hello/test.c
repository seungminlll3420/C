#include <stdio.h>
#define BACKGROUND_PIXEL 0
#define IMAGE_PIXEL 1
#define COUNTED 2

int cells[][8]={
  {0,0,1,0,0,0,0,1},
  {1,1,0,0,0,1,0,0},
  {0,0,1,0,1,0,1,0},
  {0,0,0,0,0,1,0,0},
  {0,1,0,1,0,1,0,0},
  {0,1,0,1,0,1,0,0},
  {1,0,0,0,1,1,0,0},
  {0,1,1,0,0,0,1,1}
};
int countCells(int x,int y){
  int count = 0;
  if((cells[x][y] == BACKGROUND_PIXEL) || (cells[x][y] == COUNTED)){
    return 0;
  }else if((0>x || x>7) || (0>y || y>7) ){
    return 0;
  }else{
    cells[x][y]++;

    return count +1+ countCells(x+1,y) + countCells(x-1,y) +
    countCells(x,y+1) + countCells(x,y-1)+ countCells(x+1,y+1)+
    countCells(x+1,y-1)+ countCells(x-1,y+1)+ countCells(x-1,y-1);

  }
}
int main(){
  printf("%d\n",countCells(5,3));
}
