#include <stdio.h> 
#include <string.h>

int main(){

	char employeeId[10];
	int workingHrs=0, salary=0;

	printf("Input the Employees ID(Max. 10 chars): ");
	scanf("%s",&employeeId);
	printf("Input the working hrs: ");
	scanf("%d",&workingHrs);
	printf("Salary amount/hr: ");
	scanf("%d",&salary);

	printf("Employees ID = %s\n",employeeId);
	printf("Salary = U$ %.2f\n",(float)workingHrs*salary);

	return 0;
}