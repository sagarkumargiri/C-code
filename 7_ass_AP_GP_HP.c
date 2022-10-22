/*Author   		:   sagar kumar giri
 *
 * Date    		:   5/11/2021
 *
 * Input   		:   Positive integers say 'A', 'R' and 'N'
			    where:
				A = First number
				R = Common difference(AP & HP), Common ratio(GP)
				N = number of terms
				A, R and N should be < 2 10


 * Sample execution  	:       Enter the First Number 'A': 2
				Enter the Common Difference / Ratio 'R': 3
				Enter the number of terms 'N': 5
				AP = 2, 5, 8, 11, 14
				GP = 2, 6, 18, 54, 162
				HP = 0.5, 0.2, 0.125, 0.0909091, 0.0714285
				Do you want to continue(y/Y) : y
				Enter the First Number 'A': -2
				Enter the Common Difference / Ratio 'R': 3
				Enter the number of terms 'N': 5
				Invaild Input(s) : Please enter only positve values
				Do you want to continue(y/Y) : y
				Enter the First Number 'A': 2000
				Enter the Common Difference / Ratio 'R': 3
				Enter the number of terms 'N': 5
				Input(s) out of range
				Do you want to continue(y/Y) : y
				Enter the First Number 'A': 2
				Enter the Common Difference / Ratio 'R': -3
				Enter the number of terms 'N': -5
				Invaild Input(s) : Please enter only positve values 
				Do you want to continue(y/Y) : n		*/






#include <stdio.h>
int main()
{
		//decleration of variable
		int start_num,ratio,N_terms,range, power;
		char ch;

		do{
		//suggest user give three input start_num, ratio , Nth terms
		printf("Give Starting number: \n");
		scanf("%d", &start_num);

		printf("Give Ratio value: \n");
		scanf("%d", &ratio);

		printf("Give the number where upto calculate the series: \n");
		scanf("%d", &N_terms);
		power=1,range=1;


		for(int r=1 ; r<=10 ; r++)
		{
			range *= 2;
		}


		if(start_num <= 0 || ratio <= 0 || N_terms<=0 )
				printf("Error: invalid inputs give only positive number\n");
		else if(N_terms >= range || ratio >= range || start_num >= range)
				printf("Error: out of range\n");
		else
		{
				printf("AP = ");
				for (int j=1; j<=N_terms ; j++)
				{
					
						printf("%d ", start_num + (j-1)*ratio );
						
				}

				printf("\nGP = ");
				for (int k =1; k <=N_terms ; k++)
				{
						printf("%d ", start_num * power);
						power = power*(ratio);



				}

				printf("\nHP = ");
				for(int i =1; i<= N_terms ; i++)
				{
						printf("%g ",(float) 1/(start_num +(i-1)*ratio));

				}
		}

		printf("\nDo you want to continue(y/Y) : ");
		scanf(" %c", &ch);
      }while(ch == 'y' || ch == 'Y');

		return 0;

		
}
