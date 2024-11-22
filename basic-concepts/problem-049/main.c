#include <stdio.h> 

int main(){

	int n=0;

	printf("Input the first number of the array: ");
	scanf("%d", &n);

	for(int i=0;i<7;i++){
		printf("n[%d] = %d\n",i,n);
		n = 3 * n;
	}

	return 0;
}