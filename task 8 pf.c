#include <stdio.h>

int main(){
	char fullname[50];
	
	printf("Enter your full name:");
	fgets(fullname,sizeof(fullname), stdin);
	
	printf("Hello, \n");
	printf("%s",fullname);
	
	return 0;
}
