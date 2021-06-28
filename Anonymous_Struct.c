#include <stdio.h>
#include <string.h>
#include <stdlib.h>

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
#endif
