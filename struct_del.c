#include<stdio.h>

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
	ex->in_st_t.in_in_str_t2->g = 400;
	ex->b = &(ex->a);
	ex->in_st_t.d = &(ex->in_st_t.c);
	ex->in_st_t.in_in_str_t1.f = &(ex->in_st_t.in_in_str_t1.e);
	ex->in_st_t.in_in_str_t2 = &(ex->in_st_t.in_in_str_t1);
	ex->in_st_t.in_in_str_t2->h = &(ex->in_st_t.in_in_str_t2->g);
	printf("%d\t%d\t%d\t%d\n", *(ex->b), *(ex->in_st_t.d), *(ex->in_st_t.in_in_str_t1.f), *(ex->in_st_t.in_in_str_t2->h));
}
