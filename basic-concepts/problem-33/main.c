#include <stdio.h> 

int main(){

	int currInd=0, highInd=0, currVal=-999999, highVal=0;

	printf("Input 5 integers:\n");
	for(int i=0; i<5; i++){
		scanf("%d",&currVal);
		currInd++;
		if(currVal>highVal){
			highInd = currInd;
			highVal = currVal;
		}
	}

	printf("Highest value: %d\n",highVal);
	printf("Position: %d\n", highInd);

	return 0;
}