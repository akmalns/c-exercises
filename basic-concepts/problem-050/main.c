#include <stdio.h> 

int main(){

	int arr[5];

	printf("Input the 5 members of the array: \n");
	for(int i=0;i<5;i++){
		scanf("%d",&arr[i]);
	}

	printf("\n");

	for(int i=0;i<5;i++){
		if(arr[i] < 5){
			printf("A[%d] = %d\n", i, arr[i]);
		}
	}

	return 0;
}