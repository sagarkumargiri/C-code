#include <stdio.h>
int main()
{
		//variable declearation
		int original,reverse,reminder,temp;
		char ans;

		do
		{

			//Take a input from user 
			printf("Give an integer check : ");
			scanf("%d", &original);
			reverse=0;

			//reverse the original number
			for(temp=original;temp != 0;temp=temp/10)
			{
					reminder=temp%10;
				    reverse = reverse * 10 + reminder;
			}

			//compare original number with reverse number to check whether it is palindrome number or not
			if (original == reverse)
					printf("The number : %d is a palindrome number\n", original);
			else
					printf("The number : %d is not a palindrome number\n", original);


			//suggest user to run the program once again
			printf("Try another interger then type 'y' otherwise type 'n'");
			scanf(" %c", &ans);
		} while(ans == 'y' || ans == 'Y');
		
				return 0;
}
