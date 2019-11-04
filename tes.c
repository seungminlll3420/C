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
        if(cells[x][y] == 0) return 0;
        if(cells[x][y] == 2) return 0;
        if(x<0 || 8<x || y<0 || 8<y) return 0;
        cells[x][y]++;


}
int main(){
        cols[h] != 1
        h - i == cols[h] - cols[i]
}
