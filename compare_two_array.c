#include <stdio.h>
int main()
{
		int element,count=0;

		printf("Give no. of arrays element: \n ");
		scanf("%d", &element);

		int ar1[element];
		int ar2[element];

		printf("Give elements of array1: \n");
		for(int i=0;i<element;i++)
		{
				scanf("%d", &ar1[i]);
		}

		printf("Give elements of array2:\n");
		for(int i=0;i<element;i++)
		{
				scanf("%d", &ar2[i]);
		}

		for(int j= 0;j<element;j++)
		{
				for(int k=0;k<element;k++)
				{
						if(ar1[j] == ar2[k])
								count++;
				}
		}

		if(count == (element))
				printf("The two array are EQUAL\n");
		else
				printf("The two array are NOT EQUAL\n");
		return 0;
}
