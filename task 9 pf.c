#include <stdio.h>

int main(){
	char product[50];
	int quantity;
	float price;
	
	printf("Enter product name:");
	fgets(product, sizeof(product), stdin);
	
	printf("Enter quantity:");
	scanf("%d",&quantity);
	
	printf("Enter price:");
	scanf("%f",&price);
	
	printf("Product Name:%s",product);
	printf("Quantity:%d",quantity);
	printf("\nPrice:%.2f",price);
	
	return 0;
}
