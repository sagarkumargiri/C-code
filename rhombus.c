#include <stdio.h>
int main()
{
		int total_r;
		char ch;

		do{
		//suggest user to give an odd number  for the rhombus's row
		printf("Give an odd number for the rhombus's row: ");
		scanf("%d", &total_r);

		/*let check the total no. row is an odd or even no. if even then
		 * print invalid number give an odd number only
		 */
		if(total_r%2 == 0)
				printf("invalid number give an odd number only\n");
		else
		{
				//1st for_loop for print pyramid
				for(int nr=1; nr<=(((total_r-1)/2)+1) ;nr++)
				{
						//2nd for_loop for print no.of space in line (sp represent no. of space)
						for(int sp=1; sp<=(total_r-nr) ;sp++)
								printf(" ");
						//3rd for_loop for print no. of star in line (st represent no. of star)
						for(int st=1; st<=(2*nr-1) ;st++)
								printf("*");


						printf("\n");
				}
				//4th for_loop for print reverse pyramid
				for(int nr=((total_r -1)/2); nr>=1 ;nr--)
				{		
						for(int sp=1; sp<=(total_r-nr); sp++)
								printf(" ");
						for(int st=1; st<=(2*nr-1); st++)
								printf("*");

						printf("\n");
				}	

		}

		

		//suggest user to try another input
		printf("Try another input type y otherwise type n to exit:  \n" );
		scanf(" %c", &ch);
		}while(ch== 'y' || ch == 'Y');

		return 0;
}
