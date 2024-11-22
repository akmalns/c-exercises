#include <stdio.h> 

int main(){

	int p=0, r=0, t=0;

	printf("Input data:\n");
	printf("p = ");
	scanf("%d",&p);

	printf("r = ");
	scanf("%d",&r);

	printf("t = ");
	scanf("%d",&t);

	printf("Simple interest = %.0f\n",p*(float)r*t/100);

	return 0;
}