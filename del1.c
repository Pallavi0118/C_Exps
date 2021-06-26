#include<stdio.h>
#include<stdlib.h>

int get_rand(int low, int high){
	return (rand() % (high - low + 1)) + low;
}

int main(void){
	srand(0);
	for(int i=0; i<10; i++){
		printf("%d\n", get_rand(1,4));
	}
}
