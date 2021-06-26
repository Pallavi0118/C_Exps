#include<stdio.h>
#include<stdlib.h>

int main(void){
	char chr[2] = "24";
	char arr[2];
	arr[0] = chr[0];
	arr[1] = chr[1];
	printf("%d\n", atoi(arr));
}
