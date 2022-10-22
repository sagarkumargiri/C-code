#include <stdio.h>
int is_valid(int t);
int palindrome(int num);
int reverse(int num);


int main()
{
		int num;
		printf("Give a number:");
		scanf("%d", &num);

		if(is_valid(num))
		{
				if(num == palindrome(num))
						printf("The num %d is a palindrome\n",num);
				else
						printf("not p");

		}
		else
				printf("Error: give valid number i.e 100 to 1000\n");
}


int is_valid(int t)
{
	

		if(t>100 && t<1000)
				return 1;
}

int palindrome(int num)
{
		int t = reverse(num);
		return t;
}

int reverse(int num)
{
		int reminder,reverse1=0;
		while(num !=0)
		{
		reminder= num%10;
		reverse1=reverse1*10+reminder;
		num =num/10;
		}
		return reverse1;

}
