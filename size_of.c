#include <stdio.h>




int main()
{
		double x;
		//printf("%zu\n", (int *)(&x+1)-(int *)(&x));

		printf("the size of int = %zu \n", (char *)(&x+1)-(char *)(&x));
		return 0;
}
