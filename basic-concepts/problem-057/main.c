#include <stdio.h> 
#include <string.h>

int main(){

	int a, b;
	
	printf("The original number = ");
	scanf("%d",&a);
	
	b = a % 10;

	while(a > 10){
		a = a/10;
		b = 10 * b + a % 10;
	}

	printf("The reverse of the said number = %d\n",b);


}