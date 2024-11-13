#include <stdio.h> 

int main(){

	int num=0, years=0, months=0, days=0;

	printf("Input no. of days: ");
	scanf("%d",&num);

	printf("%d Year(s)\n", num/365);
	printf("%d Month(s)\n", (num%365)/30);
	printf("%d Day(s)\n",((num%365)%30));

	return 0;
}