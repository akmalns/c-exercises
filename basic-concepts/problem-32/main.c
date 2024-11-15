#include <stdio.h> 

int main(){

	int input=0, temp=3;

	printf("Input an integer: ");
	scanf("%d",&input);

	while(temp<100){
		printf("%d\n",temp);
		temp+=input;
	}

	return 0;
}