#include<stdio.h>

typedef struct data_s{
	short a;
	char b;
	short c;
}data_t;

int main(void){
	data_t d; 
	int *ptr;
	d.a = 10;
	d.b = 'A';
	d.c = 20;
	ptr = (int*)&d.a;
	printf("%d\n", *ptr);
}
