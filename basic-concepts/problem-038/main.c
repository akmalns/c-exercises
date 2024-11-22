#include <stdio.h> 

int main(){

	float x=0, y=0;

	printf("Input two numbers: \n");
	printf("x: ");
	scanf("%f",&x);
	printf("y: ");
	scanf("%f",&y);

	if(y!=0){
		printf("%.2f\n",x/y);
	}else{
		printf("Division is not possible\n");
	}

	return 0;
}