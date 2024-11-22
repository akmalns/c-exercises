#include <stdio.h> 

int main(){

	int n=0;

	printf("Input an integer: ");
	scanf("%d",&n);

	printf("All the divisor of %d are: \n",n);

	for(int i=1;i<=n;i++){
		if(n%i == 0){
			printf("%d\n",i);
		}
	}

	return 0;
}