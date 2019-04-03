#include <stdlib.h>
#include <stdio.h>
#include <string.h>
int main() {
	
	int menuOpt;
	
	int opt = 0;
	int itemNum = 1 ,
		qtyToAdd;
	int i;
	int quantities[15] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
	float prices[15] = {155,155,120,130,130,150,165,165,165,130,130,140,135,160,170};
	
	float total = 0;
	float money;
	
		
		system("cls");
		printf("=====================================================================\n");
		printf("||                                                                 ||\n");
		printf("||                            STARBUCKS                            ||\n");
		printf("||                                                                 ||\n");
		printf("=====================================================================\n");
		
		
		do {
			main:
			printf("\nMAIN MENU:\n");
			printf("1. View Menu\n");
			printf("2. Add Item to Cart\n");
			printf("3. Remove Item from Cart\n");
			printf("4. View Cart\n");
			printf("5. Payment Summary\n");
			printf("6. Exit\n");
			printf("Choose option: ");
			scanf("%d", &menuOpt);
			
			switch(menuOpt) {
				case 1:
					printf("===============================================\n");
					printf("||                 MENU                      ||\n");
					printf("||      PRODUCT                    PRICE     ||\n");
					printf("||01    Caramel Macchiato          P155      ||\n");
					printf("||02    White Chocolate Mocha      P155      ||\n");
					printf("||03    Caffe Americano            P120      ||\n");
					printf("||04    Caffe Latte                P130      ||\n");
					printf("||05    Cappuccino                 P130      ||\n");
					printf("||06    Mocha Frappuccino          P150      ||\n");
					printf("||07    Chocolate Cream Chip       P165      ||\n");
					printf("||08    Java Chip Frappuccino      P165      ||\n");
					printf("||09    Coffee Jelly Frappuccino   P165      ||\n");
					printf("||10    Espresso Frappuccino       P130      ||\n");
					printf("||11    Caramel Frappuccino        P130      ||\n");
					printf("||12    Coffee Frappuccino         P140      ||\n");
					printf("||13    Classic Hot Chocolate      P135      ||\n");
					printf("||14    Chamomile Herbal Blend     P160      ||\n");
					printf("||15    Chai Latte                 P170      ||\n");
					printf("===============================================\n\n");
					break;
				case 2:				
					do {
						
						do {
							printf("Please enter number of item to add: ");
							scanf("%d", &itemNum);
							
							if(itemNum < 1 || itemNum >  15) {
								printf("\n\nItem does not exist, try again.\n\n");
							}
							else{
								printf("Please enter quantity to order: ");
								scanf("%d" , &qtyToAdd);
								
								quantities[itemNum-1] = quantities[itemNum-1] + qtyToAdd;	
								
								printf("\n\nItem(s) added!\n\n");
							}
						} while ( itemNum < 1 || itemNum > 15);
						
						printf("Are you going to add another item? (1 - yes ; any number - no)");
						scanf("%d", &opt);
						
					} while (opt == 1);
					break;
				case 3:
					do {
						
						do {
							printf("Please enter number of item to remove: ");
							scanf("%d", &itemNum);
							
							if(itemNum < 1 || itemNum >  15) {
								printf("\n\nItem does not exist, try again.\n\n");
							}
							else{
								quantities[itemNum-1] = 0;
								
								printf("\n\nItem(s) removed from cart!\n\n");
							}
						} while ( itemNum < 1 || itemNum > 15);
						
						printf("Are you going to remove another item? (1 - yes ; any number - no)");
						scanf("%d", &opt);
						
					} while (opt == 1);
					break;
				case 4:
					printf("============================= VIEW CART =============================\n");
					printf(" ITEM                        QTY\n");
					
					for(i = 0; i < 15; i++) {
						if(quantities[i] > 0) {
							switch(i) {
								case 0:
									printf("Caramel Macchiato            %d\n" , quantities[i]);
									break;
								case 1:
									printf("White Chocolate Mocha        %d\n" , quantities[i]);
									break;
								case 2:
									printf("Caffe Americano              %d\n" , quantities[i]);
									break;
								case 3:
									printf("Caffe Latte                  %d\n" , quantities[i]);
									break;
								case 4:
									printf("Cappuccino                   %d\n" , quantities[i]);
									break;
								case 5:
									printf("Mocha Frappuccino            %d\n" , quantities[i]);
									break;
								case 6:
									printf("Chocolate Cream Chip         %d\n" , quantities[i]);
									break;
								case 7:
									printf("Java Chip Frappuccino        %d\n" , quantities[i]);
									break;
								case 8:
									printf("Coffee Jelly Frappuccino     %d\n" , quantities[i]);
									break;
								case 9:
									printf("Espresso Frappuccino         %d\n" , quantities[i]);
									break;
								case 10:
									printf("Caramel Frappuccino          %d\n" , quantities[i]);
									break;
								case 11:
									printf("Coffee Frappuccino           %d\n" , quantities[i]);
									break;
								case 12:
									printf("Classic Hot Chocolate        %d\n" , quantities[i]);
									break;
								case 13:
									printf("Chamomile Herbal Blend       %d\n" , quantities[i]);
									break;
								case 14: 
									printf("Chai Latte                   %d\n" , quantities[i]);
									break;
							}
						}	
					}
					
					break;
				case 5:
					printf("\n\n============================= PAYMENT =============================\n");
					printf(" ITEM                        QTY                 PRICE\n");
					
					
					for(i = 0; i < 15; i++) {
						if(quantities[i] > 0) {
							total = total + (prices[i]*quantities[i]);
							switch(i) {
								case 0:
									printf("Caramel Macchiato            %d                  %.2f\n" , quantities[i], prices[i]*quantities[i]);
									break;
								case 1:
									printf("White Chocolate Mocha        %d                  %.2f\n" , quantities[i], prices[i]*quantities[i]);
									break;
								case 2:
									printf("Caffe Americano              %d                  %.2f\n" , quantities[i], prices[i]*quantities[i]);
									break;
								case 3:
									printf("Caffe Latte                  %d                  %.2f\n" , quantities[i], prices[i]*quantities[i]);
									break;
								case 4:
									printf("Cappuccino                   %d                  %.2f\n" , quantities[i], prices[i]*quantities[i]);
									break;
								case 5:
									printf("Mocha Frappuccino            %d                  %.2f\n" , quantities[i], prices[i]*quantities[i]);
									break;
								case 6:
									printf("Chocolate Cream Chip         %d                  %.2f\n" , quantities[i], prices[i]*quantities[i]);
									break;
								case 7:
									printf("Java Chip Frappuccino        %d                  %.2f\n" , quantities[i], prices[i]*quantities[i]);
									break;
								case 8:
									printf("Coffee Jelly Frappuccino     %d                  %.2f\n" , quantities[i], prices[i]*quantities[i]);
									break;
								case 9:
									printf("Espresso Frappuccino         %d                  %.2f\n" , quantities[i], prices[i]*quantities[i]);
									break;
								case 10:
									printf("Caramel Frappuccino          %d                  %.2f\n" , quantities[i], prices[i]*quantities[i]);
									break;
								case 11:
									printf("Coffee Frappuccino           %d                  %.2f\n" , quantities[i], prices[i]*quantities[i]);
									break;
								case 12:
									printf("Classic Hot Chocolate        %d                  %.2f\n" , quantities[i], prices[i]*quantities[i]);
									break;
								case 13:
									printf("Chamomile Herbal Blend       %d                  %.2f\n" , quantities[i], prices[i]*quantities[i]);
									break;
								case 14: 
									printf("Chai Latte                   %d                  %.2f\n" , quantities[i], prices[i]*quantities[i]);
									break;
							}
						}
					}
					
					printf(" TOTAL :                                         %.2f\n\n" , total);
					
					do {
						printf("Please enter cash (Cash on delivery): ");
						scanf("%f" , &money);
						
						if(money < total) 
							printf("\n\nInsufficient Amount. Please enter sufficient amount...\n\n");
					} while (money < total);
					
					printf("\nTOTAL: %.2f\n" , total);
					printf("CHANGE: %.2f\n\n", money-total);
					
					printf("Order is successful!");
					
					menuOpt = 6;
					break;
				case 6:
					
					break;
				default:
					printf("\n\nInvalid input... try again.\n\n");
					break;
			}
			
		} while (menuOpt != 6);
		
		goto main;		
	}

