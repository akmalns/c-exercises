#include <stdio.h> 

int main(){

	int arr[7];

	printf("Input the 7 members of the array: \n");
	for(int i=0;i<7;i++){
		scanf("%d",&arr[i]);
	}

	printf("Array values are: \n");
	for(int i=0;i<7;i++){
		printf("n[%d] = %d\n", i, (arr[i] <= 0) ? 100 : arr[i]);
	}

	return 0;
}