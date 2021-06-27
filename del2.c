#include<stdio.h>
#include<stdlib.h>

#if d==1
struct details_s{
	int a;
	int b;
	int c;
};

int main(void){
	struct details_s exp;
	exp.a = 10;
	exp.b = 20;
	exp.c = 30;
	printf("%d\n%d\n%d\n", exp.a, exp.b, exp.c);
}

#elif d==2
struct details_s{
	int a;
	int b;
	int c;
}d1;

int main(void){
	struct details_s exp;
	exp.a = 10;
	exp.b = 20;
	exp.c = 30;
	d1.a = 100;
	d1.b = 200;
	d1.c = 300;
	printf("%d\n%d\n%d\n", exp.a, exp.b, exp.c);
	printf("%d\n%d\n%d\n", d1.a, d1.b, d1.c);
}

#elif d==3
struct details_s{
	int a;
	int b;
	int c;
}d1, d2;

int main(void){
	struct details_s exp;
	exp.a = 10;
	exp.b = 20;
	exp.c = 30;
	d1.a = 100;
	d1.b = 200;
	d1.c = 300;
	printf("%d\n%d\n%d\n", exp.a, exp.b, exp.c);
	printf("%d\n%d\n%d\n", d1.a, d1.b, d1.c);
	printf("%d\n%d\n%d\n", d2.a, d2.b, d2.c);
}

#elif d==4

typedef struct details_s{
	int a;
	int b;
	int c;
}d1, d2;

int main(void){
	struct details_s exp;
	exp.a = 10;
	exp.b = 20;
	exp.c = 30;
	d1.a = 100;
	d1.b = 200;
	d1.c = 300;
	printf("%d\n%d\n%d\n", exp.a, exp.b, exp.c);
	printf("%d\n%d\n%d\n", d1.a, d1.b, d1.c);
	printf("%d\n%d\n%d\n", d2.a, d2.b, d2.c);
}

#elif d==5

typedef struct details_s{
	int a;
	int b;
	int c;
}d1, d2;

int main(void){
	struct details_s exp;
	exp.a = 10;
	exp.b = 20;
	exp.c = 30;
	d1->a = 100;
	d1->b = 200;
	d1->c = 300;
	printf("%d\n%d\n%d\n", exp.a, exp.b, exp.c);
	printf("%d\n%d\n%d\n", d1->a, d1->b, d1->c);
}

#elif d==6
typedef struct details_s{
	int a;
	int b;
	int c;
}d1, d2;

int main(void){
	d1 exp;
	exp.a = 10;
	exp.b = 20;
	exp.c = 30;
	printf("%d\n%d\n%d\n", exp.a, exp.b, exp.c);
}

#elif d==7

typedef struct details_s{
	int a;
	int b;
	int c;
}d1, d2;

int main(void){
	d2 exp;
	exp.a = 10;
	exp.b = 20;
	exp.c = 30;
	printf("%d\n%d\n%d\n", exp.a, exp.b, exp.c);
}

#elif d==8
typedef struct details_s{
	int a;
	int b;
	int c;
}d1;

int main(void){
	d1 *exp = NULL;
	exp.a = 10;
	exp.b = 20;
	exp.c = 30;
	printf("%d\n%d\n%d\n", exp.a, exp.b, exp.c);
}

#elif d==9
typedef struct details_s{
	int a;
	int b;
	int c;
}d1;

int main(void){
	d1 *exp = NULL;
	exp->a = 10;
	exp->b = 20;
	exp->c = 30;
	printf("%d\n%d\n%d\n", exp->a, exp->b, exp->c);
}

#elif d==10
typedef struct details_s{
	int a;
	int b;
	int c;
}d1;

int main(void){
	d1 *exp = malloc(sizeof(d1));
	exp->a = 10;
	exp->b = 20;
	exp->c = 30;
	printf("%d\n%d\n%d\n", exp->a, exp->b, exp->c);
}

#elif d==11
typedef struct details_s{
	int a;
	int b;
	int c;
}d1;

int main(void){
	d1 exp;
	d1 *exp1;
	exp.a = 10;
	exp.b = 20;
	exp.c = 30;
	exp1 = &exp;
	printf("%d\n%d\n%d\n", exp.a, exp.b, exp.c);
	printf("%d\n%d\n%d\n", exp1->a, exp1->b, exp1->c);
}

#elif d==12
typedef struct details_s{
	int a;
	int b;
	int c;
}d1;

int main(void){
	d1 exp;
	d1 *exp1;
	exp.a = 10;
	exp.b = 20;
	exp.c = 30;
	printf("%d\n%d\n%d\n", exp.a, exp.b, exp.c);
	exp1 = &exp;
	exp1->a = 100;
	exp1->b = 200;
	exp1->c = 300;
	printf("%d\n%d\n%d\n", exp.a, exp.b, exp.c);
}

#elif d==13
typedef struct details_s{
	int a;
	int b;
	int c;
}d1;

int main(void){
	d1 exp[2];
	exp[0].a = 10;
	exp[0].b = 20;
	exp[0].c = 30;
	printf("%d\n%d\n%d\n", exp[0].a, exp[0].b, exp[0].c);
	printf("%d\n%d\n%d\n", exp[1].a, exp[1].b, exp[1].c);
}

#elif d==14
typedef struct details_s{
	int a;
	int b;
	int c;
}d1;
   
d1 exp[2];

int main(void){
	exp[0].a = 10;
	exp[0].b = 20;
	exp[0].c = 30;
	printf("%d\n%d\n%d\n", exp[0].a, exp[0].b, exp[0].c);
	printf("%d\n%d\n%d\n", exp[1].a, exp[1].b, exp[1].c);
}

#elif d==15

typedef int (*fun)(int, int);

typedef struct details_s{
	int a;
	fun f;
}d1;

int add(int a, int b){
	return a+b;
}

int sub(int a, int b){
	return a-b;
}

int main(void){
	d1 exp[2];
	exp[0].f = add;
	exp[0].a = exp[0].f(10, 20);

	exp[1].f = sub;
	exp[1].a = exp[1].f(10, 20);

	printf("%d\n", exp[0].a);
	printf("%d\n", exp[1].a);
}

#elif d==16

typedef int (*fun)(int, int);

typedef struct details_s{
	int a;
	fun f;
}d1;

int add(int a, int b){
	return a+b;
}

int sub(int a, int b){
	return a-b;
}

int main(void){
	d1 *exp = malloc(2 * sizeof(d1));
	exp->f = add;
	exp->a = exp->f(10, 20);

	(exp + 1)->f = sub;
	(exp + 1)->a = (exp + 1) -> f(10, 20);

	printf("%d\n", exp->a);
	printf("%d\n", (exp + 1) -> a);
}

#elif d==17
typedef int (*fun)(int, int);

typedef struct details_s{
	int a;
	fun f;
}d1;

int add(int a, int b){
	return a+b;
}

int sub(int a, int b){
	return a-b;
}

int main(void){
	d1 exp[1][2];
	exp[0][0].f = add;
	exp[0][0].a = exp[0][0].f(10, 20);

	exp[0][1].f = sub;
	exp[0][1].a = exp[0][1].f(10, 20);

	printf("%d\n", exp[0][0].a);
	printf("%d\n", exp[0][1].a);
}

#elif d==18
typedef int (*fun)(int, int);

typedef struct details_s{
	int a;
	fun f;
}d1;

int add(int a, int b){
	return a+b;
}

int sub(int a, int b){
	return a-b;
}

int main(void){
	d1 **exp = (d1**)malloc(10000 * sizeof(d1));

	(*exp)->f = add;
	(*exp)->a = ((*exp)->f)(10, 20);
	
//	printf("%x\n", (*exp)->f);
//	printf("%x\n", (*exp)->a);
//	printf("%x\t%x\t%x", &exp, exp, *exp);

//	((*exp) + 1)->f = sub;
//	((*exp) + 1)->a = ((*exp) + 1)->f(10, 20);
	
//	 printf("%d\n", *((*exp)->a));
//	 printf("%d\n", *(((*exp) + 1)->a));

	 free(exp);
	
}

#elif d==19
typedef int (*fun)(int, int);

typedef struct details_s{
	int a;
	fun f;
}d1;

int add(int a, int b){
	return a+b;
}

int sub(int a, int b){
	return a-b;
}

int main(void){
	d1 **exp = malloc(2 * sizeof(d1));
	exp->f = add;
	exp->a = exp->f(10, 20);

	(*exp)->f = sub;
	(*exp)->a = (*exp)->f(10, 20);

	printf("%d\n", *(exp->a));
	printf("%d\n", *((*exp)->a));

}

#elif d==20
typedef struct details{
	int a;
	int b;
}d1;

int main(void){
	d1 **exp = (d1**) malloc(2 * sizeof(d1));
	*exp->a = 10;
	*exp->b = 20;
	((*exp) + 1)->a = 100;
	((*exp) + 1)->b = 200;

	printf("%d\n", *exp->a = 10);
	printf("%d\n", ((*exp) + 1)->a);

}

#elif d==21
int main(void){
	int a = 10;
	int b = 100;
	int *p = &a;
	int *p2 = &b;
	int **p1[2];
	p1[0] = &p;
	p1[1] = &p2;
	**p1[0] = 20;
	**p1[1] = 200;
	printf("%d\n", a);
	printf("%d\n", b);
}

#elif d==22
typedef int (*fun)(int, int);

typedef struct details_s{
	int a;
	fun f;
}d1;

int add(int a, int b){
	return a+b;
}

int sub(int a, int b){
	return a-b;
}

int main(void){
	d1 exp[1][2];
	exp->f = add;
	exp[0][0].a = exp[0][0].f(10, 20);

	exp[0][1].f = sub;
	exp[0][1].a = exp[0][1].f(10, 20);

	printf("%d\n", exp[0][0].a);
	printf("%d\n", exp[0][1].a);
}

#elif d==23
typedef int (*fun)(int, int);

typedef struct details_s{
	int a;
	fun f;
}d1;

int add(int a, int b){
	return a+b;
}

int sub(int a, int b){
	return a-b;
}

//Using Double Pointer with Axulary Array
int main(void){
	int arr[2][3] = {{1,2,3},{4,5,6}};
	int *aux[2];
	int **ptr;
	aux[0] = arr[0];
	aux[1] = arr[1];
	ptr = (int**)aux;
	for(int i=0; i<2; i++){
		for(int j=0; j<3; j++){
			printf("%d\t", *(*ptr+j));
		}
		printf("\n");
		ptr++;
	}
}
#endif
