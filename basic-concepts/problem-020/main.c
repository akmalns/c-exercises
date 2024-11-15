#include <stdio.h> 
#include <math.h>

int main(){

	int a=0, b=0, c=0;
	float x1=0.0, x2=0.0;

	printf("Input the first number (a): ");
	scanf("%d",&a);

	printf("Input the first number (b): ");
	scanf("%d",&b);

	printf("Input the first number (c): ");
	scanf("%d",&c);

	x1 = ((-b) + sqrt(b*b - 4*a*c))/(2*a);
	x2 = ((-b) - sqrt(b*b - 4*a*c))/(2*a);

	printf("Root1 = %.5f\n",x1);
	printf("Root2 = %.5f\n",x2);

	return 0;
}