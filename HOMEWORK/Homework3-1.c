/*
 * Homework3-1.c
 *
 *  Created on: 2018. 10. 11.
 *      Author: �̽¹�
 */
#include<stdio.h>

int power(int,int);

int main(void){
	int base = 5,exp = 3;

	printf("The %dth power of %d is %d.\n",
			exp, base , power(base,exp));

	return 0;
}
int power(int base, int exp){
	int j, i;
	for(j=1,i=1;j<=exp;j++){
		i*=base;
	}
	return i;
}
