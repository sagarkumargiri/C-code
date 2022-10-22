#include <stdio.h>
#include <ctype.h>

void item_name(char array[]);


int main()
{
		char item1[20];
		char item2[20];
		char item3[20];
		int pcs1,pcs2,pcs3;
		float cost1,cost2,cost3, amount1,amount2,amount3;


		//item1 details
		printf("Enter item1: ");
		item_name(item1);
		printf("Enter pcs: ");
		scanf("%d", &pcs1);
		printf("Enter cost: ");
		scanf("%f", &cost1);
		//item2 details
		printf("Enter item2: ");
        item_name(item2);
        printf("Enter pcs: ");
        scanf("%d", &pcs2);
 		printf("Enter cost: ");
       scanf("%f", &cost2);
       //item3 details 
       printf("Enter item3: ");
        item_name(item3);
        printf("Enter pcs: ");
    	scanf(" %d", &pcs3);
 		printf("Enter cost: ");
       scanf("%f", &cost3);
       printf("\n\n");
       printf("%32s\n", "PRINTING THE BILL");

       for(int i=0;i<64;i++)
		 		 printf("-");
		 //heading line
		 printf("\nS.No\t");
		 printf("Name\t\t");
		 printf("Quantity\t");
		 printf("Cost\t");
		 printf("\tAmount\n");

		 for(int i=0;i<64;i++)
		 		 printf("-");
		 //row1 line
		 printf("\n1.\t");
		 printf("%-4.7s",item1);
		 printf("\t\t%3d", pcs1);
		 printf("%*.3f", 18, cost1);
		 printf("%*.3f", 18, pcs1*cost1);
		 //row2 line
		 printf("\n2.\t");
           printf("%-4.7s",item2);
           printf("\t\t%3d", pcs2);
           printf("%*.3f", 18, cost2);
           printf("%*.3f", 18,pcs2*cost2);
           //row3 line
           printf("\n3.\t");
           printf("%-4.7s",item3);
           printf("\t\t%3d", pcs3);
           printf("%*.3f", 18, cost3);
           printf("%*.3f\n", 18, pcs3*cost3);
           //last row
           for(int i=0;i<64;i++)
                   printf("-");
           printf("\nTotal");
           printf("%22d", pcs1+pcs2+pcs3);
           float total=((pcs1*cost1)+(pcs2*cost2)+(pcs3*cost3));
           printf("%*.3f\n", 36, total);
           for(int i=0;i<64;i++)
                   printf("-");
           printf("\n");

		return 0;
}


void item_name(char array[])
{
		scanf(" %[^\n]*s", array);
}

