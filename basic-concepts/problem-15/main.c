#include <stdio.h> 
#include <math.h>

int main(){

	int x1=0, x2=0, y1=0, y2=0;

	printf("Input x1: ");
	scanf("%d",&x1);

	printf("Input y1: ");
	scanf("%d",&y1);

	printf("Input x2: ");
	scanf("%d",&x2);

	printf("Input y2: ");
	scanf("%d",&y2);

	printf("Distance between the said points: %.3f\n", sqrt((x2-x1) * (x2-x1) + (y2-y1) * (y2-y1)));

	return 0;
}