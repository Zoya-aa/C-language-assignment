#include <stdio.h>
int main () {
	int category,subcategory;
	
	printf("Select a category: ");
	printf("1.Animal ");
	printf("2.Vehicle ");
	printf("3.Food ");
	printf("4.Human ");
	printf("Enter your choice: ");
	scanf("%d", &category);
	
	switch(category){
		case 1:
			printf("Animal: \n");
			printf("1.Cat ");
			printf("2.Dog ");
			printf("3.Bird ");
			printf("Enter your choice: ");
			scanf("%d", &subcategory);
			
			switch(subcategory){
				case 1:
					printf("You selected Animal:Cat \n");
					break;
				case 2:
					printf("You selected Animal:Dog \n");
					break;
				case 3:
					printf("You selected Animal:Bird \n");
					break;
				default:
				printf("Invalid subcategory \n");	
			}
			break;
		case 2:
		   printf("Vehicle: \n");
		   printf("1.Car ");
		   printf("2.Bus ");
		   printf("3.Bike ");
		   printf("Enter your choice: ");
		   scanf("%d", &subcategory);
		   
		   switch(subcategory){
		   	    case 1:
		   	    	printf("You selected Vehicle:Car \n");
		   	    	break;
		   	    case 2:
				   printf("You selected Vehicle:Bus \n");
				   break;
				case 3:
				   printf("You selected Vehicle:Bike \n");
				   break;
				default:
				   printf("Invalid subcategory \n");   	
		   }
		   break;
		case 3:
		   printf("Food: \n");
		   printf("1.Pizza ");
		   printf("2.Burger ");
		   printf("3.Biryani ");
		   printf("Enter your choice: ");
		   scanf("%d", &subcategory);
		   
		   switch(subcategory){
		   	    case 1:
		   	    	printf("You selected Food:Pizza \n");
		   	    	break;
		   	    case 2:
				   printf("You selected Food:Burger \n");
				   break;
				case 3:
				   printf("You selected Food:Biryani \n");
				   break;
				default:
				   printf("Invalid subcategory \n");	
		   }
		   break;
		   
		case 4:
		   printf("Human: \n");
		   printf("1.Male ");
		   printf("2.Female ");
		   printf("3.Child ");
		   printf("Enter your choice: ");
		   scanf("%d", &subcategory);
		   
		   switch(subcategory){
		   	    case 1:
		   	    	printf("You selected Human:Male \n");
		   	    	break;
		   	    case 2:
				   printf("You selected Human:Female \n");
				   break;
				case 3:
				   printf("You selected Human:Child \n");
				   break;
				default:
				   printf("Invalid subcategory \n");   	
		   }
		   break;    
	default:
		printf("Invalid Category ");
}
	return 0;	
}
