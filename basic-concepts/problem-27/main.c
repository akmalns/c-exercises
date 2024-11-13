#include <stdio.h> 

int main(){

	int a=0, b=0;
	char ordinal[5][10] = {"first","second","third","fourth","fifth"};

	for(int i=0;i<5;i++){
		printf("Input the %s number: ",ordinal[i]);
		scanf("%d",&a);
		if(a>=0){
			b++;
		}
	}

	printf("Number of positive numbers: %d\n",b);
	printf("Number of negative numbers: %d\n",5-b);

	return 0;
}