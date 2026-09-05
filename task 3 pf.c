#include <stdio.h>

int main(){
	float age;
	float height;
	char grade[2];
	
	printf("Enter your age:");
	scanf("%f",&age);
	
	printf("Enter your height:");
	scanf("%f",&height);
	
	printf("Enter your Grade:");
	scanf("%s", grade);	
	
	printf("Age:%.2f\n",age);
	printf("Height:%.2f\n",height);
	printf("Grade:%s\n",grade);
	
	return 0;
	
}
