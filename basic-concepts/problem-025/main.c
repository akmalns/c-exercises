#include <stdio.h> 

int main(){

	int input=0;
	char monthList[12][30] = {"January","February","March","April","May","June","July","August","September","October","November","December"};

	printf("Input a number between 1 to 12 to get the month name: ");
	scanf("%d",&input);

	if(input >= 1 && input <= 12){
		printf("%s\n",monthList[input-1]);
	}else{
		printf("Invalid input\n");
	}


	return 0;
}