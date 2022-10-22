#include <stdio.h>
int main()
{
		int element;
		printf("Give no of element:\n");
		scanf("%d", &element);

		int array1[element];
		printf("Give element of array(%d)\n", element);
		for(int i=0;i<element;i++)
		{
			scanf("%d",	&array1[i]);
		}

		for(int j=0; j<element/2;j++)
		{
				int temp= array1[element-1-j];
				array1[element-1-j]=array1[j];
				array1[j]=temp;
		}

		printf("Reverse array = ");
		for(int k=0;k<element;k++)
				printf("%d ", array1[k]);

		printf("\n");
		return 0;
}
