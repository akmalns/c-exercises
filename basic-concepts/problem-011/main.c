#include <stdio.h> 

int main(){

	int weight1=0, weight2=0;
	int num1=0, num2=0;

	printf("Weight - Item1: ");
	scanf("%d",&weight1);
	printf("No. of item1: ");
	scanf("%d",&num1);

	printf("Weight - Item2: ");
	scanf("%d",&weight2);
	printf("No. of item2: ");
	scanf("%d",&num2);

	printf("Average Value = %.6f\n",((float)(weight1*num1 + weight2*num2)/(num1+num2)));

	return 0;
}