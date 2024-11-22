#include <stdio.h> 

int main(){

	int x=0, y=0;

	printf("Input the first integer: ");
	scanf("%d",&x);
	printf("Input the second integer: ");
	scanf("%d",&y);

	if(x>y){
		x^=y;
		y^=x;
		x^=y;
	}

	x++;
	while(x<y){
		if( x%7==2 || x%7==3 ){
			printf("%d\n",x);
		}
		x++;
	}

	return 0;
}