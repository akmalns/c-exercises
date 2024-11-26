#include <stdio.h> 
#include <math.h>

int main(){

	int sum=0, n=0, m=1, i=1;

	printf("Input a positive number less than 100: ");
	scanf("%d",&n);

	while(m<=n){
		sum += pow(m,4);

		m += i;
		i++;
	}

	printf("Sum of the series is %d\n",sum);

	return 0;
}