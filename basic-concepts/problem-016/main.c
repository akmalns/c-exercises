#include <stdio.h> 

int main(){

	int amount=0;
	int hundreds=0, fifties=0, twenties=0, tens=0, fives=0, twos=0, ones=0;

	printf("Input the amount: ");
	scanf("%d",&amount);

	hundreds = amount/100;
	amount -= hundreds * 100;

	fifties = amount/50;
	amount -= fifties * 50;

	twenties = amount/20;
	amount -= twenties * 20;

	tens = amount/10;
	amount -= tens * 10;
	
	fives = amount/5;
	amount -= fives * 5;

	twos = amount/2;
	amount -= twos * 2;

	ones = amount;

	printf("There are:\n");
	printf("%d Note(s) of 100.00\n",hundreds);
	printf("%d Note(s) of 50.00\n",fifties);
	printf("%d Note(s) of 20.00\n",twenties);
	printf("%d Note(s) of 10.00\n",tens);
	printf("%d Note(s) of 5.00\n",fives);
	printf("%d Note(s) of 2.00\n",twos);
	printf("%d Note(s) of 1.00\n",ones);

	return 0;
}