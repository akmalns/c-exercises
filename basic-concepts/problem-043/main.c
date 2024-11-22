#include <stdio.h> 

int main(){

	int p=0, q=0;
	int val=1;

	printf("Input number of lines: ");
	scanf("%d",&p);

	printf("Number of characters in a line: ");
	scanf("%d",&q);

	for(int i=0;i<p;i++){
		for(int j=0;j<q;j++){
			printf("%d ",val);
			val++;
		}
		printf("\n");
	}

	return 0;
}