#include <stdio.h> 

int main(){

	int boundary = 0;

	printf("Input the maximum number: ");
	scanf("%d",&boundary);

	for(int i=1;i<=boundary;i++){
		if(i%2 == 0){
			printf("%d^2 = %d\n", i, i*i);
		}
	}

	return 0;
}