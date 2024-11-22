#include <stdio.h> 

int main(){

	float s=0;
	int i=1;

	while(i<8){
		if(i==1){
			s+=i;
		}else{
			s+=(float)i/(i-1);
		}
		i += 2;
	}

	printf("Value of series: %.2f\n",s);

	return 0;
}