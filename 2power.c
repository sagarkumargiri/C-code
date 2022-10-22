#include <stdio.h>
int main()
{
		//variable declear
		int num,iter,res;
		char ch;

		do{
		// suggest user to give a number that for power of two
		printf("Giva a number to know the power of 2:  ");
		scanf("%d", &num);
		res=1;

		//calculation of 2 the power user enter number
		for (iter=1;iter<=num;iter++ )
		{
				printf("2^%d=%d\n",iter, res=2*res);
		}


		//suggest user to restart the program once again
		printf("Try another input then entry Y otherwise enter N: \n");
		scanf(" %c", &ch);

		}while(ch == 'y' ||ch =='Y');

		return 0;

}
