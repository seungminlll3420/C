/*
 * Homework3-2.c
 *
 *  Created on: 2018. 10. 11.
 *      Author: ÀÌ½Â¹Î
 */
#include<stdio.h>

void printm(int, int);

int main(void) {
	int row = 5, column = 5;
	printm(row, column);
	return 0;
}
void printm(int c, int r){/*c = ¿­,r = Çà*/
	int i, j;
	j = r * c;
	i = c;
	for (r = 1, c = 1; 1; c++){
		if ((r + c) % 2 == 0){
			printf("X");
		}
		else if ((r + c) % 2 == 1) {
			printf("O");
		}
		if (j == (c*r)) {
			printf("\n");
			break;
		}
		if (c == i) {
			printf("\n");
			c = 0;
			r++;
		}

	}
}






