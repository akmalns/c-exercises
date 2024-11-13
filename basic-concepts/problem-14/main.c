#include <stdio.h> 

int main(){

	int distance=0;
	float fuel=0.0;

	printf("Input total distance in km: ");
	scanf("%d",&distance);
	printf("Input total fuel spent in liters: ");
	scanf("%f",&fuel);

	printf("Average consumption (km/lt): %.2f\n",(float)distance/fuel);

	return 0;
}