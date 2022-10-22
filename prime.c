#include <stdio.h>
int main()
{
		int num=0,no_of_prime=0,flag,n;
		scanf("%d", &n);

		while(no_of_prime <= n)
		{
				flag=0;
				num=num+1;
				if(num == 1)
						flag=0;
				else if(num == 2)
						flag=0;
				else
				{
						for(int i=2;i<=num/2;i++)
						{
								if(num%i==0)
								{
										flag=1;
										break;
								}
									
								
						}

				}
				if(flag==0)
				{
						printf("  %d ", num);
						no_of_prime=no_of_prime+1;
				}

		}
}
