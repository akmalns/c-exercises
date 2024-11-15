#include <stdio.h> 

int main(){

	int numA=0, numB=0, sum=0;

	printf("Input the first number of the pair: ");
	scanf("%d",&numA);

	printf("Input the second number of the pair: ");
	scanf("%d",&numB);

	printf("List of odd numbers: \n");

	for(int i = (numA <= numB ? numA : numB); i < (numA > numB ? numA : numB); i+=2){
		if(i%2 == 0){
			i++;
		}
		printf("%d\n",i);
		sum+=i;
	}
	printf("Sum=%d\n",sum);

	return 0;
}