#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define MSG_CNT 10

int main(void){
	float temp = 0;
	float humi = 0;
	char msgText[100] = {0};
	srand(0);
	for(int i=0; i<MSG_CNT; i++){
		temp = ((float)rand()/RAND_MAX)*(float)(100.0); 
	     	humi = ((float)rand()/RAND_MAX)*(float)(100.0);	
		printf("%f\n", temp);
		sprintf(msgText, "{\"temperature\":%.2f,\"temperature_unit\":\"F\"}", temp);
		printf("%d\n", strlen(msgText));
		printf("%s\n", msgText);
		printf("%f\n", humi);
		sprintf(msgText, "{\"humidity\":%.2f,\"humidity_unit\":\"%%\"}", humi);
		printf("%s\n", msgText);
	}
	return 0;
}
