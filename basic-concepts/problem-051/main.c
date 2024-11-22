#include <stdio.h> 

int main(){

	int arr[6];

	printf("Input the members of the array: \n");

	for(int i=0;i<6;i++){
		scanf("%d",&arr[5-i]);
	}

	printf("\n");

	for(int i=0;i<6;i++){
		printf("array_n[%d] = %d\n", i, arr[i]);
	}

	return 0;
}