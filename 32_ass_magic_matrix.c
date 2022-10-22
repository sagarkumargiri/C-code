/*Author   				: sagar kumar giri
 * Date    				: 19/12/2021
 * Input   				: An integer N
 * Sample execution  	: Enter a number: 3
						8	1	6
						3	5	7
						4	9	2
						Do you want to continue (Y/y) : y
						Enter a number: 6
						Error : Please enter only positive values
						Do you want to continue (Y/y) : n		
====================================================================================================================================*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//function declaration
void magic(int n, int **m);
void print_matrix(int n,int **m);

int main()
{
		//variable declaration
		char ch;
		int n, **matrix;
		do{
				printf("Give demision of matrix: ");
				//taking dimension of the matrix
				scanf(" %d", &n);
				//checking n is positive 
				if( n > 0 )
				{
						//checking n is even 
						if(n %2 ==0)
								printf("Error: please enter odd number only\n");
						else
						{
								//declaration of a two array nXn matrix
								//int matrix[n][n];
								matrix = calloc(sizeof(int *),n);
								for(int i=0;i<n;i++)
								{
										matrix[i] = calloc(sizeof(int),n);
								}
								if(matrix == NULL)
								{
										printf("memory allocation failed\n");
										return -1;
								}

								//set all element of matrix to size
								//memset(matrix,0,n*n*4);
								//calling the function to create magic matrix
								magic(n,matrix);
								//calling the function to print the matrix
								print_matrix(n,matrix);
								free(matrix);
								matrix = NULL;
						}
				}
				else
						printf("Error : Please enter only positive values .\n");
				

				//suggest user to restart the program
				printf("Do you want to continue(y/Y):  ");
				scanf(" %c", &ch);
		}while(ch == 'y' || ch =='Y');
		return 0;
}

//function definition of create magic matrix
void magic(int n, int **m)
{
		int i = n/2;
		int j = n-1;
		for(int num =1;num <= n*n; )
		{
				if(i == -1 && j == n)
				{
						j = n-2;
						i = 0;
				}
				else
				{
						if(j == n)
						{
								j = 0;
						}
						if(i<0)
						{
								i = n-1;
						}
				}

				if(m[i][j])
				{
						j = j-2;
						i++;
						continue;
				}
				else
				{
						m[i][j]= num++;
				}

				i--;
				j++;
		}
}
//function definition of printing matrix
void print_matrix(int n,int **m)
{
		for(int i = 0; i < n;i++)
		{
				for(int j =0; j<n;j++)
				{
						printf("%-5d", m[i][j]);
				}
				printf("\n");

		}
}


