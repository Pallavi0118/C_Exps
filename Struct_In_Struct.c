#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#if h==0
typedef struct s_1
{
	int val1;
	struct in_s
	{
		int val2;	
	}IN_S;

}S_1;

int main(void)
{
	S_1 ins1;
	S_1 *ins2;
	ins2 = &ins1;
	ins1.val1 = 10;
	ins1.IN_S.val2 = 20;
	printf("%d\t%d\n",ins1.val1,ins1.IN_S.val2);
	ins2->val1 = 30;
	ins2->IN_S.val2 = 40;
	printf("%d\t%d\n",(ins2->val1),(ins2->IN_S.val2));
	return 0;
}
#elif h==1

typedef struct s_1
{
	int *val1;
	struct in_s
	{
		int *val2;	
	}IN_S;

}S_1;

int main(void)
{
	int a = 10, b = 20;
	S_1 ins1;
	S_1 *ins2;
	ins2 = &ins1;
	ins1.val1 = &a;
	ins1.IN_S.val2 = &b;
	printf("%d\t%d\n",*(ins1.val1),*(ins1.IN_S.val2));
	*(ins2->val1) = 30;
	*(ins2->IN_S.val2) = 40;
	printf("%d\t%d\n",*(ins2->val1),*(ins2->IN_S.val2));
	return 0;
}
#elif h==2

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
#elif h==3
typedef struct s_1
{
	int *val1;
	struct in_s
	{
		int *val2;	
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
	(ins1.IN_S->val2) = &b;
	printf("%d\t%d\n",*(ins1.val1),*(ins1.IN_S->val2));
	*(ins2->val1) = 30;
	*(ins2->IN_S->val2) = 40;
	printf("%d\t%d\n",*(ins2->val1),*(ins2->IN_S->val2));
	return 0;
}

#endif
