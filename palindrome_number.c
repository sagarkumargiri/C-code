#include <stdio.h>
int main()
{
		int reverse=0,num1,num2,reminder;

		//
		printf("Give a integer to check palindrome number: ");

		scanf("%d", &num1);
		num2=num1;

		 while(num2!=0)
		 {
		 		 reminder=num2%10;
		 		 reverse=reverse*10+reminder;
		 		 num2 = num2 / 10;
		 }

		 if (num1==reverse)
		 		 printf("The number: %d is a palindrome number", num1);
		 else
		 		 printf("The number: %d is not a palindrome number", num1);

		 return 0;
}
