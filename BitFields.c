#include<stdio.h>

typedef struct data
{
	unsigned short a : 1;
	unsigned short b : 3;
	unsigned short   : 4; 
	unsigned short c : 1;
	unsigned short d : 3;
	unsigned short e : 2;
	unsigned short   : 2; 
}data_t;

int main(void){
	data_t d, *ptr;
	ptr = &d;
	d.a = 1;
	d.b = 7;
	d.c = 1;
	d.d = 7;
	d.e = 3;

	printf("%d\n", sizeof(d));
	//Printing Byte value, of the bitfield struct and also proving padding is holds '0'
	printf("%d\n", *((unsigned short*)ptr));

}
