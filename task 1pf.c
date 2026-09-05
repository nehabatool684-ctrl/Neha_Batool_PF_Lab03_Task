#include <stdio.h>

int main(){
	char name[50];
	char city[50];
	float age;
	
	printf("Enter your name: ");
	fgets(name, sizeof(name), stdin);
	
	printf("Enter your age:");
	scanf("%f", &age);
	
	printf("Enter your city:");
	scanf("%49s", city);
	
	printf("Name: %s\n",name);
	printf("Age: %.2f\n", age);
	printf("City: %s\n", city);
	return 0;
}
