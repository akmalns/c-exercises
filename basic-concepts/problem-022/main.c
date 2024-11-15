#include <stdio.h> 

int main(){

	int a=0, b=0, c=0, d=0, e=0;

	printf("Input the first number: ");
	scanf("%d",&a);

	printf("Input the second number: ");
	scanf("%d",&b);

	printf("Input the third number: ");
	scanf("%d",&c);

	printf("Input the fourth number: ");
	scanf("%d",&d);

	printf("Input the fifth number: ");
	scanf("%d",&e);

	printf("Sum of all odd values: %d\n",(a%2)*a + (b%2)*b + (c%2)*c + (d%2)*d + (e%2)*e);

	return 0;
}