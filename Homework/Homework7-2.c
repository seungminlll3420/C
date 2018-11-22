/*
 * Homework7-2.c
 *
 *  Created on: 2018. 11. 19.
 *      Author: seung
 */
#include<Stdio.h>
#define N 3

int main(void){
	char *s[N] = {"IOT, ", "MLs, ", "SCH "};
	char str[100];
	int i, k = 0;
	char *p;
	for(i=0;i<N;i++){
		p = s[i];
		while(*p != '\0'){
		str[k++] = *(p++);
		}
	}
	str[k] = '\0';

	printf(str);

	return 0;
}

