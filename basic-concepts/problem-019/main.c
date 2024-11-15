#include <stdio.h> 

int main(){

	int p=0, q=0, r=0, s=0;

	printf("Input the first integer: ");
	scanf("%d",&p);

	printf("Input the second integer: ");
	scanf("%d",&q);

	printf("Input the third integer: ");
	scanf("%d",&r);

	printf("Input the fourth integer: ");
	scanf("%d",&s);

	if((p%2==0) && (q>0) && (r>0) && (s>0) && (q>r) && (s>p) && ((r+s) > (p+q))){
		printf("Correct Values\n");
	}else{
		printf("Wrong Values\n");
	}

	return 0;
}