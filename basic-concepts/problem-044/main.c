#include <stdio.h> 

int main(){

	int mark=0;
	int sum=0, num=0;

	printf("Input Mathematics marks (0 to terminate): \n");
	scanf("%d",&mark);
	while(mark!=0){
		sum+=mark;
		num++;
		scanf("%d",&mark);
	}

	printf("Average marks in Mathematics: %.2f\n",(float)sum/num);

	return 0;
}