#include <stdio.h> 

int main(){

	int input=0;

	printf("Input an Integer: ");
	scanf("%d",&input);

	if(input<0){
		printf("Error negative number\n");
	}else if(input <= 20){
		printf("Range [0,20]\n");
	}else if(input <= 40){
		printf("Range [20,40]\n");
	}else if(input <= 60){
		printf("Range[40,60]\n");
	}else if(input <= 80){
		printf("Range [60,80]\n");
	}else{
		printf("Error out of range\n");
	}

	return 0;
}