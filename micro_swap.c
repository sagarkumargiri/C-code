#include <stdio.h>

#define SWAP(x, y) \
{ \
x= x+y;  \
y= x-y; \
x= x-y; \
}


int main()
{
		int n1,n2;
		printf("Give num1 & num2: ");
		scanf("%d %d", &n1, &n2);

		printf("Before swap num1= %d & num2 = %d\n", n1, n2);


		SWAP(n1,n2);
		printf("After swap num1 = %d & num2 = %d\n", n1, n2);

		return 0;
}



