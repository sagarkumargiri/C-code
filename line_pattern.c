#include <stdio.h>
int main()
{
		int total_ch,middle_ch;

		//sugest user to give 2 number 
		printf("Give an odd number is to print total number of character in the line: ");
		scanf("%d", &total_ch);

		printf("Give another odd number is to print in middle: ");
		scanf("%d", &middle_ch);


		//check the given number odd or even
		if(total_ch%2 !=0 && middle_ch != 0)
		{
				for(int i=1;i<=(total_ch-middle_ch)/2;i++)
						printf("$");
				for(int j=1;j<=middle_ch;j++)
						printf("*");
				for(int k=1;k<=(total_ch-middle_ch)/2;k++)
						printf("$");
				printf("\n");
		}

		else
				printf("Give odd number only\n");


	

		return 0;
}
