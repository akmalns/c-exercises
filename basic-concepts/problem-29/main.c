#include <stdio.h> 

int main(){

	int a=0, cummulativeOdd=0;
	char ordinal[5][10] = {"first","second","third","fourth","fifth"};

	for(int i=0;i<5;i++){
		printf("Input the %s number: ",ordinal[i]);
		scanf("%d",&a);
		cummulativeOdd += (a%2) * a;
	}

	printf("Sum of all odd values: %d\n",cummulativeOdd);

	return 0;
}