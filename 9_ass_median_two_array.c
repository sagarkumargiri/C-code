/*Author   				: sagar kumar giri
 * Date    				: 24/10/2021
 * Input   				: no. of elment two array and elements of two array all are integer type
 * Sample execution  	: Enter the 'n' value for Array A: 5
Enter the elements one by one for Array A: 3 2 8 5 4
After sorting : 2 3 4 5 8
Median of array1 : 4
Enter the 'n' value for Array B: 5
Enter the elements one by one for Array A: 12 3 7 8 5
After sorting : 3 5 7 8 12
Median of array2 : 7
Median of both arrays : 5.5                              (4 + 7 = 11; 11 / 2 = 5.5)
Do you want to continue(y/Y) : y
Enter the 'n' value for Array A: 5
Enter the elements one by one for Array A: 3 2 8 5 4
After sorting : 2 3 4 5 8
Median of array1 : 4
Enter the 'n' value for Array B: 4
Enter the elements one by one for Array A: 12 13 7 5
After sorting : 5 7 12 13
Median of array2 : 9.5                                      (7 + 12 = 19; 19 / 2 = 9.5)
Median of both arrays : 6.75                            (4 + 9.5 = 13.5; 13.5 / 2 = 6.75)
Do you want to continue(y/Y) : y
Enter the 'n' value for Array A: 20
Max array elements exceeded
Do you want to continue(y/Y) : n					*/


#include <stdio.h>

//declaration of functions
void populate_of_array(int *array,int size);//A function for read the array element from user
void printing_array(int *array,int size);   //A function for print the array element
void sorting_of_array(int *array,int size); //A function for sorting the array element
float median_of_array(int array[],int size); //A function for calculate the median of a array





int main()
{
		//Declaration of variables
		int size1,size2;
		float ar1_median,ar2_median,two_ar_median;
		char ch;

		do{
				printf("Enter the no of element for Array A: ");
				scanf("%d", &size1);
				//check the no. of element is 0 < element < 10
				if(size1 > 0 && size1<10)
				{
						int arrayA[size1];
						printf("Enter the elements one by one for Array A: ");
						//calling the function to read the array element 
						populate_of_array(arrayA,size1);
						//calling the function to sorting array element
						sorting_of_array(arrayA,size1);
						printf("After sorting : ");
						//calling the function to print the elements
						printing_array(arrayA,size1);
						//calling the function to calculate the median
						ar1_median = median_of_array(arrayA,size1);
						printf("\n");
						printf("Median of array A :  %g", ar1_median);
						printf("\n");


				}

				// error for max no. of array element
				else
						printf("Max array elements exceeded\n");


				printf("Enter the no of element for Array B: ");
				scanf("%d", &size2);
				//check the no. of element is 0 < element < 10
				if(size1 > 0 && size1<10)
				{
						int arrayB[size1];
						printf("Enter the elements one by one for Array B: ");
						//calling the function to read the array element
						populate_of_array(arrayB,size2);
						//calling the function to sorting array element
						sorting_of_array(arrayB,size2);
						printf("After sorting : ");
						//calling the function to print the elements
						printing_array(arrayB,size2);
						//calling the function to calculate the median
						ar2_median = median_of_array(arrayB,size2);
						printf("\n");
						printf("Median of array B :  %g", ar2_median);
						printf("\n");


				}

				else
						printf("Max array elements exceeded\n");


				//calculating both array medians
				two_ar_median = (ar1_median + ar2_median)/2;

				printf("Median of both arrays : %g \n", two_ar_median);
				




				//suggest user to try another input
				printf("Do you want to cont...(y/Y)\n");
				scanf(" %c", &ch);
		}while(ch =='y' || ch =='Y');
		return 0;
}

//functions defination

void populate_of_array(int *array,int size)
{
		for(int i=0;i<size;i++)
		{
				scanf("%d", &array[i]);
		}
}


void sorting_of_array(int *array,int size)
{
		for(int i=0;i<size-1;i++)
		{
				for(int j=0;j<size-1-i;j++)
				{
						if(array[j]>array[j+1])
						{
								int temp=array[j];
								array[j]=array[j+1];
								array[j+1]=temp;
						}

				}
		}
}


void printing_array(int *array,int size)
{
		for(int i =0;i<size;i++)
				printf("%d ", array[i]);
}


float median_of_array(int array[],int size)
{
		int res=size/2;
		float median;
		if(size % 2 ==0)
		{
				median =(float)(array[res]+array[res-1])/2;
		}
		else
				median  = array[res];
		return median;
}






