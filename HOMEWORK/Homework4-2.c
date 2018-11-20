/*
 * Homework4-2.c
 *
 *  Created on: 2018. 10. 18.
 *      Author: ÀÌ½Â¹Î
 */
#include<stdio.h>
int main(){
	int cr;
	while(1){
		printf("Input color value:");
		fflush(stdout);
		scanf("%d",&cr);

		if(0 <= cr && cr < 25)
			printf("Black!\n");
		else if(25 <= cr && cr < 50)
			printf("Dark gray!\n");
		else if(50 <= cr && cr < 75)
			printf("Light gray!\n");
		else if(75 <= cr && cr < 100)
			printf("White!\n");
		else
			printf("Wrong value!\n");
	}
	return 0;
}




