#include <stdio.h> 

int main(){

	int count=0, sum=0, min=0, max=0;
	int val=0;

	printf("Input next positive number: ");
	scanf("%d", &val);
	while(val > 0){
		sum += val;
		count++;
		min = count == 1 ? val : val < min ? val : min;
		max = val > max ? val : max;

		printf("Input next positive number: ");
		scanf("%d", &val);
	}

	printf("Number of positive values entered is %d\n", count);
	printf("Maximum value entered is %d\n", max);
	printf("Minimum value entered is %d\n", min);
	printf("Average value is %.4f\n", (float)sum/count);

	return 0;
}