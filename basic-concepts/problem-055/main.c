#include <stdio.h> 

int main(){

	int x=0, y=0;

	printf("Before swapping the value of x & y: ");
	scanf("%d %d",&x,&y);


	x ^= y;
	y ^= x;
	x ^= y;

	printf("After swapping the value of x & y: %d %d\n",x,y);

	return 0;
}