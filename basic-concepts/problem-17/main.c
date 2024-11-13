#include <stdio.h> 

int main(){

	int number=0, hours=0, minutes=0, seconds=0;

	printf("Input seconds: ");
	scanf("%d", &number);

	printf("There are:\n");
	printf("H:M:S - %d:%d:%d\n",(number/3600),(number%3600)/60,(number%60));

	return 0;
}