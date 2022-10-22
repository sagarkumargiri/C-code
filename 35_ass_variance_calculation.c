/*Author   				: sagar kumar giri
 * Date    				:
 * Input   				:
 * Sample execution  	: Enter the no.of elements : 10
						  1. Static allocation
						  2. Dynamic allocation
					      Enter your choice : 1
                          Enter the 10 elements:
                          [0] -> 9
                          [1] -> 12
                          [2] -> 15
                          [3] -> 18
                          [4] -> 20
                          [5] -> 22
                          [6] -> 23
                          [7] -> 24
                          [8] -> 26
                          [9] -> 31
                          Output :
						  x(input)		D = X - Mean 			D 2
						   9					-11					121
                          12					-8					64
                          15					-5					25
						  18					-2					4
                          20					 0					0
                          22					 2					4
                          23					 3					9
                          24					 4					16
                          26					 6                  36
                          31					 11					121
                         Sum = 200								Sum = 400
                         The Variance of the entered numbers is 40
                         Do you want to continue(y/Y) : N 		*/


#include <stdio.h>
#include <stdlib.h>
 void element_arr(int *arr, int size);
 void print_element(int *arr,int *D, int *DD , int size);
 void get_D_arr(int *arrM,int *arrD,int size, int mean);
 void get_DD_arr(int *arrD ,int *arrDD,int size);
 int sum_arr(int *arr,int size);

int main()
{
		int n,choice,sum1,sum2;
		int mean;
		char ch;
		do{
				printf("Enter the no.of elements : ");
				scanf("%d", &n);
				printf("Enter method :\n%s\n%s\n%s"
								,"1. Static allocation"
								,"2. Dynamic allocation"
								,"Enter your choice : ");
				scanf("%d", &choice);
				printf("Enter the %d elements:\n", n);
				if(choice == 1)
				{
						int arrs[n];
						int Ds[n],DDs[n];
						sum1=0;
						mean=0;
						element_arr(arrs,n);
						sum1 = sum_arr(arrs,n);
						mean = sum1/n;
						get_D_arr(arrs,Ds,n,mean);
						get_DD_arr(Ds,DDs,n);
						sum2 = sum_arr(DDs,n);
						print_element(arrs,Ds,DDs,n);
						printf("sum = %d %18s = %d\n", sum1,"sum", sum2);
						printf("The Variance of the entered numbers is : %d\n", sum2/n);
				}
				else if(choice == 2)
				{
						int *arrd, *Dd,*DDd;
						arrd = malloc(n*sizeof(int));
						Dd = malloc(n*sizeof(int));
						DDd =malloc(n*sizeof(int));
						if(arrd == NULL ||Dd == NULL ||DDd == NULL)
						{
								printf("memory alloction failed.\n");
								free(arrd);
								free(Dd);
								free(DDd);
								return 1;
						}
						else
						{
								element_arr(arrd,n);
								sum1 = sum_arr(arrd,n);
                        		mean = sum1/n;
                         		get_D_arr(arrd,Dd,n,mean);
                         		get_DD_arr(Dd,DDd,n);
                         		sum2 = sum_arr(DDd,n);
                         		print_element(arrd,Dd,DDd,n);
                         		printf("sum = %d %18s = %d\n", sum1,"sum", sum2);
                         		printf("The Variance of the entered numbers is : %d\n", sum2/n);
                         		free(arrd);
                         		free(Dd);
                         		free(DDd);


						}

				}
				printf("Do you want to continue(y/Y) : ");
				scanf(" %c", &ch);
		}while(ch == 'y' || ch == 'Y');
		return 0;
}

void element_arr(int *arr,int size)
{
		for(int i =0; i<size;i++)
		{
				printf("[%d]--> ", i);
				scanf("%d", &arr[i]);
		}
}
void print_element(int *arr,int *D,int *DD, int size)
{
		printf("output\n");
		printf("\n  x(input)\tD = X - Mean\tD*D\n");
		for(int i=0;i<size; i++)
		{
				printf("%8d %14d %11d\n", arr[i], D[i], DD[i]);

		}
		

}
int sum_arr(int *arr,int size)
{
		int sum =0;
		for(int i=0;i<size;i++)
		{
				sum = sum + arr[i];
 		}
 		return sum;
}
void get_D_arr(int *arrM,int *arrD,int size, int mean)
{
		for(int i=0;i<size;i++)
		{
				arrD[i] = arrM[i]-mean;
		}
}
void get_DD_arr(int *arrD ,int *arrDD,int size)
{
		for(int i=0;i<size;i++)
		{
				arrDD[i] = (arrD[i] * arrD[i]);
		}
}


