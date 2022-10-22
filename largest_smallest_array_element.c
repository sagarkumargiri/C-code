#include <stdio.h>
int main()
{
		int no_element,large,small;
		char ch;


		do{

				printf("Give no. of element to stored in array: ");
				scanf("%d", &no_element);
				large=0,small=0;

				int array[no_element];

				printf("Give %d number : ", no_element);
				for(int i=0;i<no_element;i++)
						scanf("%d", &array[i]);
				//finding the largest number
			
						small=array[0];
						for(int k=0;k < no_element;k++)
						{
								if(array[k] > small)
										small=array[k];
		
						}

						printf("Largest = %d", small);
						large=array[0];
						for(int j=0;j <no_element;j++)
						{
								if(array[j] < large)
										large=array[j];
						}
						printf("Smallest= %d", large);
				

				printf("Do want to cont...(y/Y): ");
				scanf(" %c", &ch);
		}while( ch =='y' ||ch == 'Y');
}
