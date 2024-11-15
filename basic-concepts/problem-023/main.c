#include <stdio.h> 

int main(){

	float a=0, b=0, c=0;

	printf("Input the first number: ");
	scanf("%f",&a);

	printf("Input the second number: ");
	scanf("%f",&b);

	printf("Input the third number: ");
	scanf("%f",&c);

	if((a+b > c) && (a+c > b) && (b+c >a)){
		printf("Perimeter = %.3f\n", a+b+c);
	}else{
		printf("It is impossible to make a triangle based on the three input values\n");
	}

	return 0;
}