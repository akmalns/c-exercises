#include <stdio.h> 

int main(){

	int n=0;
	float sum=1;

	printf("Input any number (n>1): ");
	scanf("%d", &n);

	printf("Sum = 1 + ");

	for(int i=1;i<n;i++){
		sum += (float)1/(i+1);
		if(i!=n-1){
			printf("1/%d + ",i+1);
		}else{
			printf("1/%d",i+1);
		}
	}

	printf(" = %.3f\n",sum);

	return 0;
}