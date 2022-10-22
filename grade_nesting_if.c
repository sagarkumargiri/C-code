#include <stdio.h>
int main()
{
		int num1;
		scanf("%d", &num1);

		if (num1<0 || num1>100)
		{
				printf("invalid input");

				return -1;
		}

		if(num1<90)
		{
				if(num1<80)
				{
						if(num1<70)
						{
								if(num1<60)
								{	printf("fail");
								}
								else
										printf("D");
						}
						else
								printf("C");
				}
				else
						printf("B");
		}
		else
				printf("A");


		return 0;
}
