#include <stdio.h> 

int main(){

	int input=0;

	printf("Input and integer: ");
	scanf("%d",&input);

	if(input >= 0){
		printf("Positive ");
		if(input%2 == 0){
			printf("Even\n");
		}else{
			printf("Odd\n");
		}
	}else{
		printf("Negative ");
		if(input%2 == 0){
			printf("Even\n");
		}else{
			printf("Odd\n");
		}
	}

	return 0;
}