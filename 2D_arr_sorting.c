#include <stdio.h>
#include <ctype.h>

void sorting_arr(int **ptr, int c);

int main()
{
		int r,c,temp=0;
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
	
		for(int i =0; i<r ; i++)
		{
				for(int j=0;j < c;j++)
				{
						for(int k=0;k < c-j-1;k++)
						{
								if(arr[i][k] > arr[i][k+1])
								{
										temp = arr[i][k];
										arr[i][k] = arr[i][k+1];
										arr[i][k+1]=temp;
								}

						}
				}
		}
		puts("After sorting array is: \n");
	//	puts("Given array is :\n");
		for(int i=0; i<r ; i++)
		{
				for(int j=0; j<c ;j++)
				{
						printf("%d\t", arr[i][j]);
				}
				printf("\n");
		}
		return 0;
}

/*void sorting_arr(int **ptr,int c)
{
		for(int i=0;i < c;i++)
		{
				printf("loop2\n");
				for(int j=0;j < c-1-i;j++)
				{
						printf("loop3\n");
						if(*(*ptr+j) > *(*ptr+j+1))
						{
								int temp = *(*ptr+j);
								*(*ptr+j) = *(*ptr+j+1);
								*(*ptr+j+1)=temp;

						}
				}
		}
}*/
