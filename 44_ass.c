#include <stdio.h>
#include <stdarg.h>


int main(int argc, char *argv[],char *envp[])
{
		int no_element, choice;
		void *arr;
		no_element = (int)char[argc-1];

		do{
				printf("Choose an optoin from below\n%s\n%s\n%s\n%s\n%s"
								,"1. int"
								,"2. short"
								,"3. float"
								,"4. double"
								,"Enter the choice: ");
				scanf("%d", &choice);

				switch(choice)
				{
						case 1:
								arr = malloc(no_element * sizeof(int));
								cal_mean(arr, no_element, sizeof(int));
								
				}
		}
}
