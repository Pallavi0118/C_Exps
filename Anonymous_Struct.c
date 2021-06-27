#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdint.h>

#if p==1
typedef struct struct_s{
	union {
		int a;
		int b;
	};
	struct details{
		int c;
	};
}struct_t;

int main(void)
{
	struct_t exp;
	exp.b = 10;
	exp.c = 20;
	printf("%d\t%d\n", exp.a, exp.c);
	return 0;
}
#elif p==2
//Anonymous Structure real-time use-case example
typedef struct {
	union{
		struct {uint8_t a, b, g, r;};
		uint32_t val;
	};
}Color;
int main(void)
{
	Color x;
	x.r = 1;
	x.g = 1;
	x.b = 1;
	x.a = 1;
	printf("%d\n",x.r);
	printf("%d\n", x.val);

	return 0;
}
#elif p==3

typedef struct s_1
{
	int *val1;
	struct in_s
	{
		int val2;	
	}*IN_S;

}S_1;

int main(void)
{
	int a = 10, b = 20;
	S_1 ins1;
	ins1.IN_S = malloc(sizeof(int)); 
	S_1 *ins2;
	ins2 = &ins1;
	ins1.val1 = &a;
	(ins1.IN_S->val2) = b;
	printf("%d\t%d\n",*(ins1.val1),(ins1.IN_S->val2));
	*(ins2->val1) = 30;
	(ins2->IN_S->val2) = 40;
	printf("%d\t%d\n",*(ins2->val1),(ins2->IN_S->val2));
	return 0;
}
#elif p==4
//flexible array(new case)
typedef struct struct_s{
	int a;
	int b;
	struct {
		int k;
		int arr[];
	};
	int j;
	struct d2{
		int h;
	}d3;
}struct_t;

int main(void){
	struct_t exp;
	exp.arr[0] = 1;
	exp.arr[1] = 2;
	exp.j = 10;
	printf("a= %x\tb= %x\tk= %x\tj= %x\nh= %x\tarr= %x\n",&(exp.a),&(exp.b),&(exp.k),&(exp.j),&(exp.d3.h),exp.arr);
	printf("arr[1]= %x\n",exp.arr+1);
}
#endif
