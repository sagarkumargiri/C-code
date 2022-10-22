/*Author   				: sagar kumar giri
 * Date    				: 26/11/2021
 * Input   				:
 * Sample execution  			: Enter the number of disks N: 3
								make the legal move from rod A to C
								make the legal move from rod A to B
								make the legal move from rod C to B
								make the legal move from rod A to C
								make the legal move from rod B to A
								make the legal move from rod B to C
								make the legal move from rod A to C

								Do you want to continue(y/Y) : y
								Enter the number of disks N : -3
								Error : Enter only positive values

								Do you want to continue (y/Y) : n 		*/



#include <stdio.h>


void tower_hanoi(int n, char from_rod, char to_rod, char aux_rod);


int main()
{
		

		// variable declaration
		int n; char ch;
		do{
				//take input from user
				printf("enter the number of disks : ");

				scanf("%d",&n);

				//validation
				if(n<=10 && n>= -10)
				{
						
						if(n>0)
						{
								tower_hanoi(n,'A','B','C');
						}
						else
								printf("Error: positive number only\n");

				}
				else
						printf("out of range\n");

				//suggest user to check another one
				printf("Do you want to continue:\n");
				scanf(" %c", &ch);
		}while(ch == 'Y' || ch =='y');
		



		return 0;
}


void tower_hanoi(int n, char from_rod, char to_rod, char aux_rod)
{
		if(n==1)
		{
				printf("move disk1 fromrod %c to rod %c\n", from_rod, to_rod);
				return ;
		}
		tower_hanoi(n-1,from_rod,aux_rod,to_rod);
		printf("move disk%d fromrod %c to rod %c\n",n, from_rod, to_rod);
		tower_hanoi(n-1,aux_rod,to_rod,from_rod);
}
