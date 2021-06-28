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

#elif z==10
typedef struct struct_s{
	int a;
	int *b;
	struct in_st_s{
		int c;
		int *d;
		struct in_in_str_s1{
			int e;
			int *f;
		}in_in_str_t1;
		struct in_in_str_s2{
			int g;
			int *h;
		}*in_in_str_t2;
	}in_st_t;
}struct_t;

int main(void){
	struct_t exp;
	exp.a = 10;
	exp.b = &(exp.a);
	exp.in_st_t.c = 20;
	exp.in_st_t.d = &(exp.in_st_t.c);
	exp.in_st_t.in_in_str_t1.e = 30;
	exp.in_st_t.in_in_str_t1.f = &(exp.in_st_t.in_in_str_t1.e);
	exp.in_st_t.in_in_str_t2 = &(exp.in_st_t.in_in_str_t1);
	exp.in_st_t.in_in_str_t2->g = 40;
	exp.in_st_t.in_in_str_t2->h = &(exp.in_st_t.in_in_str_t2->g);
	printf("%d\t%d\t%d\t%d\n", *(exp.b), *(exp.in_st_t.d), *(exp.in_st_t.in_in_str_t1.f), *(exp.in_st_t.in_in_str_t2->h));
	
	struct_t *ex = &exp;
	ex->a = 100;
	ex->in_st_t.c = 200;
	ex->in_st_t.in_in_str_t1.e = 300;
	ex->in_st_t->in_in_str_t2.g = 400;
	ex->b = &(ex->a);
	ex->in_st_t.d = &(ex->in_st_t.c);
	ex->in_st_t.in_in_str_t1.f = &(ex->in_st_t.in_in_str_t1.e);
	ex->in_st_t.in_in_str_t2 = &(ex->in_st_t.in_in_str_t1);
	exp->in_st_t.in_in_str_t2->h = &(ex->in_st_t->in_in_str_t2.g);
	printf("%d\t%d\t%d\t%d\n", *(ex->b), *(ex->in_st_t.d), *(ex->in_st_t.in_in_str_t1.f), *(exp->in_st_t->in_in_str_t2.h));
}

#elif m==11
struct details{
	int a;
	char b;
	int c;
};

typedef struct struct_s{
	int a;
	int *b;
	struct details;
	int c;
}struct_t;

int main(void){
	struct_t exp;
	exp.a = 10;
	exp.b = &exp.a;
	exp.details.a = 20;
	printf("%d\n", exp.details.a);
}
#endif
