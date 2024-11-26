#include <stdio.h> 

int main(){

	float a, b, c, d;
	float max, min;

	printf("Input four numbers: ");
	scanf("%f %f %f %f", &a, &b, &c, &d);

	min = a;
	max = a;

	min = b < min ? b : min;
	max = b > max ? b : max;

	min = c < min ? c : min;
	max = c > max ? c : max;

	min = d < min ? d : min;
	max = d > max ? d : max;

	printf("Difference is %.4f\n", max - min);

	return 0;
}