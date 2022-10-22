#include <stdio.h>
int main()
{
		//variable declearation
		int res=1,base,i;

		//suggest user to give the base value
		printf("Give the base value:  \n");
		scanf("%d", &base);

		for(i=1;base>=i;i++)
		{
				res=base*res;
				printf("%d^%d = %d\n",base, i, res);
		}

		return 0;
}
