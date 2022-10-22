#include <stdio.h>
int main()
{
		// declear variable
		int total_row;

		//suggest user to a give no.  for the pyramid's row
		printf("Give rows number for the pyramid: ");
		scanf("%d", &total_row);


		//1st for_loop for no, line(rows) is to be print; i represent no. of row
		for(int i=1; i<=total_row ; i++)
		{
				//2nd for_loop for no , space is to be print in a line; j represent no. of space
				for(int j=1; j<=(total_row - i) ;j++)
						printf(" ");
				//3rd for_loop for no. of star is to be print in a line; k represent no. of star
				for(int k=1; k<=(2*i-1) ;k++)
						printf("*");


				printf("\n");
		}

		return 0;


}
