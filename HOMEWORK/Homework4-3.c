/*
 * Homework4-3.c
 *
 *  Created on: 2018. 10. 18.
 *      Author: ÀÌ½Â¹Î
 */
#include <stdio.h>
void printx(void);
void printo(void);
void printn(void);

int main(void) {
	int row, column, x, y, i, j;
	while (1) {
		printf("Input row, column,x,y:");
		fflush(stdout);
		scanf("%d %d %d %d", &row, &column, &x, &y);

		j = row * column;
		i = column;
		for (row = 1, column = 1; 1 ; column++) {
			if (row == x || column == y) {
				printx();
			}
			else
				printo();
			if (j == (column*row)){
				printn();
				break;
			}
			if (column == i) {
				printn();
				column = 0;
				row++;
			}

		}
	}

	return 0;
}

void printo(void) {
	printf("O");
}

void printx(void) {
	printf("X");
}
void printn(void) {
	printf("\n");
}




