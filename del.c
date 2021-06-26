#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(void){
	FILE *fp = NULL;
	fp = fopen("file.txt", "r");
	fseek(fp, 0, SEEK_END);
	int res = ftell(fp);
	rewind(fp);
	printf("%d\n", res);
	char *buff = (char*) malloc(res * sizeof(char));
	fread(buff, sizeof(char), res, fp);
	printf("%d\n", strlen(buff));
	//printf("%s\n", buff);
	int count=0;	
	for(int i=0; i<res; i++){
		char *temp = (buff + i);
		printf("\nSending 1KB Data Chunk: %d\n", count+1);
		for(int j=0; j<1000; j++){
			printf("%c", *temp);
			temp++;
			i++;
		}
		i--;
		count++;
		printf("\n");	
	}
	printf("Maximum Data Chunks: %d\n", count);
	printf("%d\n", strlen(buff));
	fclose(fp);
	free(buff);
}
