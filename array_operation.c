#include <stdio.h>
void populate(int *array,int size);
void print(int *array, int size);
float average(int array[], int size);
void square(int *array, int size);
void sorting(int *array, int size);
void reverse(int *array, int size);


int main()
{
		int no_element;
		float avg;

		printf("Give the no of element in array: ");
		scanf("%d", &no_element);

		int array[no_element];

	     populate(array,no_element);

		print(array,no_element);

		avg = average(array,no_element);
	   printf("The average of the array = %g\n", avg);
	   square(array,no_element);
	   print(array,no_element);
	   sorting(array,no_element);
	   print(array,no_element);
	   reverse(array,no_element);
	   print(array,no_element);


		return 0;
}

void populate(int *array, int size)
{
		printf("Give array element(%d)= ", size );
		for(int i=0;i<size;i++)
		{
				scanf("%d", &array[i]);
		}
}

float average(int array[], int size)
{
		int i;
		int res=0;
		float avr;
		for(i=0;i<size;i++)
		{
				res= array[i]+ res;
		}

		avr=(float)res/size;
		return avr;
}

void print(int *array, int size)
{
		//printf("Given array is = ");
		for(int i =0;i<size;i++)
				printf("%d ", array[i]);
		printf("\n");
}

void square(int array[],int size)
{
		printf("After squaring the element of the array is :");
		for(int i =0;i<size;i++)
				array[i] = array[i]*array[i];
		printf("\n");
}

void sorting(int array[],int size)
{
		int temp=0;
		printf("After sorting array is:");
		for(int i=0;i<size-1;i++)
		{
				for(int j=0;j<size-1-i;j++)
				{
						if(array[j]>array[j+1])
						{
								temp=array[j];
								array[j]=array[j+1];
								array[j+1]=temp;
						}

				}
		}

}

void reverse(int array[],int size)
{
		int temp =0;
		printf("After reverseing the element of the array is: ");
		for(int i=0;i < size/2;i++)
		{
				temp=array[size-1-i];
				array[size-1-i]=array[i];
				array[i]=temp;
		}

}
