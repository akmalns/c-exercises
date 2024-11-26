#include <stdio.h> 

int main(){

	char days[7][5] = {"Sun","Mon","Tue","Wed","Thu","Fri","Sat"};

	for(int i=0; i<7; i++){
		printf("%s = %d\n", days[i], i);
	}

	return 0;
}