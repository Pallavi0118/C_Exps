#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct bf{
	unsigned int date : 5;
	unsigned int day : 3;
	unsigned int year : 11;
}BF;

//Mistake - address of bitfields is not accessible
int func_date(int *ptr)
{
	void *p = (void *)ptr-2;
	printf("%c.%c.%c\n",*(char *)p,*(char *)(p+1),*(char *)ptr);
}

int main(void)
{
	BF *ins, i;
	ins = &i;
	(ins->date) = 21;
	(ins->day) = 2;
	(ins->year) = 2021;
	func_date(&(ins->year));
	printf("%d\t %d\t %d\n",(ins->date),(ins->day),(ins->year));
	return 0;
}
