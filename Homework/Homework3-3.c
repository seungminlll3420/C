/*
 * Homework3-3.c
 *
 *  Created on: 2018. 10. 11.
 *      Author: ÀÌ½Â¹Î
 */

#include<stdio.h>

void getmax(void);
void getmin(void);

float a, b, c, max, min;
int main(void) {
	a = 3.5, b = -4.5, c = 2.3e-1, max = min = 0;
	getmax(); getmin();
	printf("Max number is %f.\n", max);
	printf("Min number is %f.\n", min);

	return 0;
}
void getmax(void) {
	if(a>=b && a>=c){
	max=a;
	}
	else if(b>=a && b>=c){
	max=b;
	}
	else max=c;
}
void getmin(void) {
	if(a<=b && a<=c){
	min=a;
	}
	else if(b<=a && b<=c){
	min=b;
	}
	else min=c;
}


