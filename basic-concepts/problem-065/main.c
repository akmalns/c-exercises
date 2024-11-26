#include <stdio.h> 
#include <math.h>

int isPrime(int val){
	int isDivisible=0, i=2;

	while(!isDivisible && i<=sqrt(val)){
		isDivisible = (val % i == 0);
		i++;
	}

	return !isDivisible;
}

int main(){

	int count=0;

	for(int i=2;i<200;i++){
		if(isPrime(i)){
			printf("%d ",i);
			count++;
		}
		if(count == 10){
			printf("\n");
			count = 0;
		}
	}

	if(count < 10){
		printf("\n");
	}

	return 0;
}