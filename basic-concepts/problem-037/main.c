#include <stdio.h> 

int main(){

	int x=0, y=0;

	printf("Input the Coordinate(x,y): \n");
	printf("x: ");
	scanf("%d",&x);
	printf("y: ");
	scanf("%d",&y);

	if(x>0){
		if(y>0){
			printf("Quadrant-I(+,+)\n");
		}else{
			printf("Quadrant-IV(+,-)\n");
		}
	}else{
		if(y>0){
			printf("Quadrant-II(-,+)\n");
		}else{
			printf("Quadrant-III(-,-)\n");
		}
	}

	return 0;
}