#include <stdio.h>
int main()
{
		//declaration of variable
		int no_element,result;

		//suggest the user to give no. of element
		printf("Give no. of element to be stored in the array: \n");
		scanf("%d", &no_element);

		//Initializing the array
		int array1[no_element];

		//suggest user to give the elements of the array
		printf("Give %d number to stored in the array: \t", no_element);

		for(int i =0;i<no_element;i++)
				scanf("%d", &array1[i]);

		//calculate the arithmetic addtion of all elements
		for(int i=0;i<no_element;i++)
				result += array1[i];

		//calculate the average result
		printf("Average result = %g\n", (float)result/no_element);




}
