#include <stdio.h> 

int main(){

	int x=0, sum=0;

	printf("Input a positive number less than 500: ");
	scanf("%d",&x);

	printf("Sum of the digits %d is ", x);

	sum += x % 10;
	while(x > 10){
		x = x / 10;
		sum += x % 10;
	}

	printf("%d\n", sum);

	return 0;
}