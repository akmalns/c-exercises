#include <stdio.h> 

int main(){

	int a=0, countPositive=0, cummulativePositive=0;
	char ordinal[5][10] = {"first","second","third","fourth","fifth"};

	for(int i=0;i<5;i++){
		printf("Input the %s number: ",ordinal[i]);
		scanf("%d",&a);
		if(a>=0){
			countPositive++;
			cummulativePositive+=a;
		}
	}

	printf("Number of positive numbers: %d\n",countPositive);
	printf("Average value of the said positive numbers: %.2f\n",(float)cummulativePositive/countPositive);

	return 0;
}