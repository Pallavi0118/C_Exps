#include <stdio.h>

int func(int, int);
int func2(int, int);
typedef int (*func_ptr)(int, int);
int callback_func(func_ptr, func_ptr, int );

int main(void)
{
	func_ptr f1, f2;
	f1 = func;
	f2 = func2;
	callback_func(f1,f2,7);
	return 0;
}

int func(int a, int b)
{
	printf("%d\n",(a+b));
	return 0;
}

int callback_func(func_ptr f2, func_ptr f3, int a)
{
	if(a == 1)
		f2(3,4);
	else 
		f3(3,4);
	return 0;
}

int func2(int a, int b)
{
	printf("In Func2 : %d",a*b);
	return 0;
}
