#include <stdio.h>

int main(){
	
	char studentname[50];
	int age;
	float height;
	char grade;
	float CGPA;
	
	printf("Enter name:");
	fgets(studentname,sizeof(studentname), stdin);
	
	printf("Enter age:");
	scanf("%d",&age);
	
	printf("Enter height:");
	scanf("%f",&height);
	
	printf("Enter Grade:");
	scanf(" %c",&grade);
	
	printf("Enter CGPA:");
	scanf(" %f",&CGPA);
	
	printf("===================STUDENTS REPORT======================\n");
	printf("\nName:%s",studentname);
	printf("\nAge:%d",age);
	printf("\nCGPA:%.2f",CGPA);
	printf("\nHeight:%.2f",height);
	printf("\nGrade:%c",grade);
	
	return 0;
}
