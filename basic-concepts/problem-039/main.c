#include <stdio.h> 

int main(){

	int x=0, y=0;
	int sum=0;

	printf("Input the first integer: ");
	scanf("%d",&x);
	printf("Input the second integer: ");
	scanf("%d",&y);
	
	if(x>y){
		x ^= y;
		y ^= x;
		x ^= y;
	}

	while(x<=y){
		sum += ( x%17 != 0 ) * x;
		x++;
	}

	printf("%d\n",sum);

	return 0;
}