#include <stdio.h>
int main()
{
		//variable
		int num1,num2,i,res=0;
		//
		printf("Give two perform multiplition:  ");
		scanf("%d%d", &num1, &num2);

		for (i=1;i<=num1;++i)
		{
				res=res+num2;
				//printf("%d * %d = %d", num1, num2, res);

		}

		printf("%d * %d = %d\n", num1, num2, res);
		printf("%d",i);

		return 0;
}
