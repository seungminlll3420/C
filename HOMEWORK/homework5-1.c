/*
 * homework5-1.c
 *
 *  Created on: 2018. 11. 8.
 *      Author: seung
 */
#include<stdio.h>//test
#include<math.h>
#define N 10
double fun(double);

int main(void){
	int i; double avg, std;
	double point[N] = {0.0, 1.1, 2.2,
			3.3, 4.4, 5.5, 6.6, 7.7, 8.8, 9.9};
	for(i=0, avg =0, std=0; i<=N-1; i++){
		avg += point[i];
	}
	avg = avg/N;
	for(i=0;i<=N-1;i++){
		std += (point[i]-avg)*(point[i]-avg);
	}
	std = std/N;
	std = fun(std);
	printf("Avg is %.2f\n", avg);
	printf("Std is %.2f.", std);

	return 0;
}
double fun(double a){
	return sqrt(a);
}
