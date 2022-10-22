#include <stdio.h>
#include <ctype.h>


int main()
{
		int r,c;
		puts("Enter no. of rows and column");
		scanf("%d %d", &r, &c);
		int arr[r][c];
		printf("Enter element of the array i.e %d\n", r*c);
		for(int i=0; i<r ;i++)
		{
				for(int j=0; j<c ;j++)
				{
						scanf("%d", (arr[i]+j));
				}
		}
		puts("Given array is :\n");
		for(int i=0; i<r ; i++)
		{
				for(int j=0; j<c ;j++)
				{
						printf("%d\t", arr[i][j]);
				}
				printf("\n");
		}

		int i=0,j=0;
		int max = arr[i][j];
		int min = arr[i][j];
		for(i=0;i<r;i++)
		{
				for(j=1;j<c;j++)
				{
						if(max < arr[i][j])
								max = arr[i][j];
						if(min > arr[i][j])
								min = arr[i][j];

				}
	
		}
		printf("max = %d\nmin = %d\n", max, min);
		return 0;
}
