#include <stdio.h> 

int main(){

	float cm=0, inch=0;

	printf("Input data: ");
	scanf("%f",&cm);

	printf("Distance of %.2f cms is = %.2f inches\n", cm, cm/2.54);

	return 0;
}