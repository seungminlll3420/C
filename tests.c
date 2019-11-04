#include <stdio.h>
#define PATH 0
#define WALL 1
#define VISITED 2
#define UNAVAILABLE 3
#define N 8

int cells[][8] = {{0,0,0,0,0,0,0,1},
  {0,1,1,1,0,1,0,1},
    {0,0,0,0,1,0,0,1},
     {0,1,0,0,1,1,0,1},
       {0,1,1,1,0,0,1,1},
         {0,0,0,0,0,1,0,1},
           {1,0,1,0,1,1,0,1},
           {1,1,1,0,0,0,0,0}
         };

int findPath(int x, int y){

  if(x == 7 && y ==7) {
    cells[x][y] = VISITED;
    return 1;
  }
  if(cells[x][y] == WALL || cells[x][y] == VISITED ) return 0;
  if( (x < 0) || (8 <= x) || (y < 0) || (8 <= y) ) return 0;

  cells[x][y] = VISITED;

  if(findPath(x+1,y) | findPath(x,y-1) | findPath(x-1,y) | findPath(x,y+1))
    return 1;
  cells[x][y] = UNAVAILABLE;
  return 0;
}

void printMaze(){
  for(int i =0; i<N ; i++){
    for(int j =0;j<N;j++) printf("%d",cells[i][j]);
    printf("\n");
    }
}
int main(){
  printMaze();
  printf("%d\n",findPath(0,0));
  printMaze();
}
