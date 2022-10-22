/*Author   				: sagar kumar giri
 * Date    				: 19/12/2021
 * Input   				: No.of rows, Columns and row * column values.
 * Sample execution  	: N/A
 * =================================================================================================================================*/


#include <stdio.h>
#include <stdlib.h>


int main()
{
		//variable declaration
		int **ptr , **transpose, **product,row, col;
		char ch;
		do{
				printf("Give no of row: ");
				scanf("%d", &row);
				printf("Give no of col: ");
				scanf("%d", &col);
			//	dynamic memory allocation for user given matrix
				ptr = malloc((row*sizeof(int *)));
				for(int i =0 ; i <row; i++)
				{
						ptr[i]= malloc(col * sizeof(int));
				}
				//error handling given matrix
				if(ptr == NULL)
				{
						printf("memory allocation failed\n");
						return -1;

				}

				//reading element of given matrix 
				printf("Enter values for %d x %d matrix :\n", row, col);
				for(int i=0; i<row; i++)
				{
						for(int j=0; j<col;j++)
						{
								scanf(" %d", &ptr[i][j]);
						}

				}
				//dynamic memory allocation for transpose matrix 
				transpose = malloc(col*sizeof(int *));
				for(int i=0;i<row;i++)
				{
						transpose[i]= malloc(row *sizeof(int));
				}
				//error handling for transpose matrix
				if(transpose == NULL)
				{
						printf("memory allocation failed\n");
						return -1;
				}

				//loop for get transpose matrix element from given matrix
				for(int i =0; i<row; i++)
				{
						for(int j =0; j<col; j++)
						{
								transpose[j][i]=ptr[i][j];		
						}
				}

				//printing the transpose matrix
				printf("\nTransepose of given matrix \n");
				for(int i=0;i<col;i++)
				{
						for(int j=0;j<row;j++)
						{
								printf("%d\t", transpose[i][j]);
						}
						printf("\n");
				}

				//dynamic memory allocation for product matrix
				product = malloc(row * sizeof(int *));
				for(int i=0;i<row;i++)
				{
						product[i] = calloc(row ,sizeof(int));
				}
				//error handling for product matrix
				if(product == NULL)
                {
                        printf("memory allocation failed\n");
                        return -1;
                }

				//loop for geting element of product matrix
				for(int i =0; i<row;i++)
				{
						for(int j=0;j<col;j++)
						{
								for(int k=0;k<col; k++)
								{
										product[i][j] += ptr[i][k] * transpose[k][j] ;
								}
						}
				}

				//printing product matrix
				printf("\nProduct of two matrix :\n");
				for(int i=0;i<row;i++)
                  {
                          for(int j=0;j<row;j++)
                          {
                                  printf("%d\t", product[i][j]);
                          }
                          printf("\n");
                  }

                //free all the memory allocation
                free(product);
                product = NULL;
                free(transpose);
                transpose = NULL;
                free(ptr);
                ptr = NULL;



				//suggest user to try another time
				printf("Do you want to continue(y/Y) : ");
				scanf(" %c", &ch);

		}while(ch == 'y'||ch == 'Y');
		//termination of program
		return 0;
}
