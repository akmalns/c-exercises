#include <stdio.h> 

int main(){

	int max=0, input=0;

	printf("Input the first integer: ");
	scanf("%d",&max);
	
	printf("Input the second integer: ");
	scanf("%d",&input);
	max = input > max ? input : max;

	printf("Input the third integer: ");
	scanf("%d",&input);
	max = input > max ? input : max;

	printf("Maximum value of three integers: %d\n",max);


	return 0;
}