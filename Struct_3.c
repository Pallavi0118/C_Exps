#include<stdio.h>

void fun(int*);

struct details{
	int a;
	char b;
	int c;
};

typedef struct struct_s{
	int a;
	int b;
	int r;
	struct details d;
	int c;
	struct details_s{
		int a;
		int b;	
	}details_t;
	struct details *det;
}struct_t;

int main(void){
	struct_t exp;
	exp.a = 10;
	exp.b = 33333;
	exp.d.a = 20;
	printf("%d\n", exp.d.a);
	exp.details_t.a = 100;
	printf("%d\n", exp.details_t.a);
	struct_t *ptr = &exp;
	ptr->a = 1000;
	ptr->c = 2000;
	//ptr->b = &(ptr->c);
	struct details d;
	exp.r = 44444;
	d.a = 111;
	d.c = 222;
	ptr->det = &d;
	printf("%d\t%d\t%d\n", ptr->a, ptr->b, ptr->det->a);
	printf("%x\t%x\t%x\t", &exp.a, &exp.b, &exp.r);
	fun(&(exp.a));
}

void fun(int *exp){
	printf("%d\t0x%X\n", *exp, exp);
	//void *ptr = (void*)exp;
	//printf("%d\n", *((int*)ptr+));
	exp++;
	exp++;
	printf("%d\n", *exp);
}
