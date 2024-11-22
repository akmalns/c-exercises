#include <stdio.h> 

int main(){

	int arr[6], pos=0;

	printf("Input the array elements: \n");

	for(int i=0; i<6; i++){
		scanf("%d",&arr[i]);
		if(arr[i] < arr[pos]){
			pos=i;
		}
	}

	printf("\nSmallest value: %d\n",arr[pos]);
	printf("Position of the element: %d\n",pos);

	return 0;
}