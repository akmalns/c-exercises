#include <stdio.h> 

int main(){

	int numA=0, numB=0;

	printf("Input the first number of the pair: ");
	scanf("%d", &numA);

	printf("Input the second number of the pair: ");
	scanf("%d",&numB);

	if(numA <= numB){
		printf("The pair is in ascending order\n");
	}else{
		printf("The pair is in descending order\n");
	}

	return 0;
}