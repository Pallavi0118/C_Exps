#include<stdio.h>

int res(int , int);
int fun();
int fun1();

int main(void){
	res(fun(), fun1());	
	return 0;
}
int res(int a, int b) {
	printf("%d\n",(a+b));
	return 0;
}

int fun()
{
	return 5;
}

int fun1()
{
	return 3;
}
