#include <stdio.h> 

int main(){

	int n=0;

	printf("Input number of lines: ");
	scanf("%d",&n);

	for(int i=1;i<=n;i++){
		printf("%d %d %d\n", i, i*i, i*i*i);
	}

	return 0;
}