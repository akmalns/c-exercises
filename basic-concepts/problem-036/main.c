#include <stdio.h> 
#include <string.h>

int main(){

	char ref[10] = "1234";
	char input[20];

	printf("Input the password: ");
	scanf("%s",input);

	while(strcmp(ref, input)!=0){
		printf("Incorrect password!\n");
		printf("Input the password: ");
		scanf("%s",input);
	}

	printf("Correct password!\n");

	return 0;
}