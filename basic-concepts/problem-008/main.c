#include <stdio.h> 

int main(){

	int numDays = 1329;

	int years = numDays/365;
	int weeks = (numDays%365)/7;
	int days = numDays - 365*years - 7*weeks;


	printf("Years: %d\n",years);
	printf("Weeks: %d\n",weeks);
	printf("Days: %d\n",days);

	return 0;
}