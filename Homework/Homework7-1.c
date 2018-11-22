/*
 * Homework7-1.c
 *
 *  Created on: 2018. 11. 19.
 *      Author: seung
 */
#include<Stdio.h>

int main(void){
	char arr[] = "Hello, World!";
	char str[100];
	int len, i;
	char *p;

	len = sizeof(arr);
	p = arr + len - 2;

	for(i=0;i<len;i++){
		str[i] = *(p--);
	}
	str[i-1]= '\0';


	printf("%s\n",arr);
	printf("%s", str);

	return 0;
}

