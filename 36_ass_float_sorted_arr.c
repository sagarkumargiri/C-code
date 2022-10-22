#include <stdio.h>

void sort_float( float *arr,int size);

int main()
{
		//variable declaration
		int n;
		char ch;
		do{
				
				//taking no.of element from user
				printf("Enter no. of element : ");
				scanf(" %d", &n);
				//declare arr with n number of element
				float arr[n];
				//reading element of arr
				printf("Enter %d number of float number\n", n);
				for(int i=0;i<n;i++)
				{
						printf("[%d]---> ", i);
						scanf(" %f", &arr[i]);
				}
				//calling the function to sort the array
				sort_float(arr,n);
				//after sorting array element are display
				for(int i=0;i<n;i++)
				{
						printf("%g ", arr[i]);
				}
				printf("\n");

				//suggest user to try another time
				printf("Do you want to continue(Y/y) : ");
				scanf(" %c", &ch);
		}while(ch == 'y');
}

//function definition
void sort_float(float *arr,int size)
{
		float smallest = 0, greater = 0;

		//1st for loop for take 1st element
		for(int i =0;i<size;i++)
		{
				smallest = arr[i];
				for(int j=i;j<size-i;j++)
				{
						if(smallest < arr[j]);
								//smallest = arr[i];
						else
								smallest = arr[j];
				}
				printf("%g ", smallest);
						
		}
		printf("\n");
}
