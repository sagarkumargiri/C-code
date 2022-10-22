/*aagyghsu: 
 * wudjiwj
 *
 *
 * */


#include <stdio.h>
int main()
{
	

		int element1,temp;
		int array1[element1];
				printf("Give no of element of array1: ");
				scanf("%d", &element1);

			//	if(element1 >1 && element1 <10)
			//	{
						printf("Give %d elements for array:", element1);
						for(int i=0;i<element1;i++)
								scanf("%d", &array1[i]);


					    for(int j=0;j<element1;j++)
						{
								for(int k=0;k<element1;k++)
								{
										if(array1[k] > array1[k+1])
										{
												temp=array1[k];
												array1[k]=array1[k+1];
												array1[k+1]=temp;


										}
								}

						}
						printf("array:");
						for(int j=0;j<element1-1;j++)
								printf("%d ", array1[j]);

	
				

		return 0;
}














