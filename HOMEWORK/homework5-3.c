/*
 * homework5-3.c
 *
 *  Created on: 2018. 11. 8.
 *      Author: seung
 */
#include<stdio.h>//text
int main(void){
	char str1[100], str2[100], str[200];
	int i,j;
	printf("Input 1st string: "); fflush(stdout);
	gets(str1);
	printf("Input 2nd string: "); fflush(stdout);
	gets(str2);
	i=0;
	while(str1[i]!='\0'){
		str[i] = str1[i];
		i++;
	}
	j=0;
	while(str1[j] != '\0'){
		str[i+j] = str2[j];
		j++;
	}
	printf("%s",str);
	return 0;
}
