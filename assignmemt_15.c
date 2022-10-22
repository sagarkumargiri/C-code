/*Author   				: sagar kumar giri
 * Date    				: 21/12/2021
 * Input   				: Integers n, i, a, b
 * Sample execution  	: Enter the value of 'n' : 11
						: Enter the value of 'I'
						: 174
						: Enter the value of 'a' : 3
						: Enter the value of 'b' : 5
						: The binary form of 'n' : 00000000 00000000 00000000 00001011
						: The binary form of 'I' : 00000000 00000000 00000000 10101110
						: Updated form of 'I'(158): 00000000 00000000 00000000 10011110
						Want to continue ( y/Y ) : n 		
===================================================================================================================================*/




#include <stdio.h>
//function declaration
int replace_nbits_from_pos(int num, int i, int a, int b);
void print_bits(unsigned int num,int n);


int main()
{
		//variable decalaration
		int num,i,a,b,res;
		char ch;


		do{
				
				printf("Enter the value of 'n': ");
				scanf("%d", &num);
				printf("Enter the value of 'I': ");
				scanf("%d", &i);
				printf("Enter the value of 'a': ");
				scanf("%d", &a);
				//validation of a must be in the range of 0 t0 31
				if(a>0 && a<31)
				{
						printf("Enter the value of 'b': ");
						scanf("%d", &b);
						//validation for b must be grater then a and less then 31
						if(a<b && b<31)
						{
							   int n = (a-b+1);
							   //calling the function to replace n bit from position
							   	res = replace_nbits_from_pos(num,i,a,b);
							   	printf("The binary form of 'n': ");
							   	print_bits(num,32);
							   	printf("The binary form of 'i': ");
							   	print_bits(i,32);
							   	//printing final result
							   	printf("Updated form of 'I'(%d) : ", res);
							   print_bits(res,32);
							   printf("\n");

						}
						else
								printf("Error: b should be in between a to 31\n");
				}
				else
						printf("Error: a should be in between 0 to 31\n");
				//suggest user to try another time
				printf("Do you want continue(y/Y) :  ");
				scanf(" %c", &ch);
		}while(ch == 'y' || ch == 'Y');
		return 0;

}
//function definitaion of replace n bits from position
int replace_nbits_from_pos(int num, int i, int a, int b)
{
		int n = b-a+1;
		return (((((i >>(b+1))<<n) | (num &((1<<n)-1))) << a) | (i &((1<<a)-1)));
}
//function definition of printing in binary 
void print_bits(unsigned int num,int n)
{
		for(int i=n-1;i>=0;i--)
         {
                 if(num >> i & 1 == 1)
                         printf("1");
                 else
                         printf("0");
         }
        printf("\n");

}

