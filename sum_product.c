#include <stdio.h>

void sum_product(int x, int y, int *sum, int *product);


int main()
{
		int num1,num2, sum=0,product=0;


		printf("Give two number: ");
		scanf("%d", &num1);
		scanf("%d", &num2);


		sum_product(num1,num2,&sum,&product);

		printf("%d + %d = %d\n",num1, num2, sum);
		printf("%d * %d = %d\n",num1, num2, product);
		return 0;
}


void sum_product(int x,int y,int *sum,int *product)
{
		*sum = x+y;
		*product=x*y;
}
