#include <stdio.h>

int fibbonaci(int n);


int main()
{
		int num,power,ve,res;
		char ch;
		do{
				printf("Enter the value of N: ");
				scanf("%d", &num);
				printf("Fibbonacci series using recursive functions is\n");


				power =1,ve=0;
				if(num < 0)
						ve = -num;
				else
						ve = num;
				for(int i=0;i <= ve;i++)
				{
						res = fibbonaci(i);
						if(num < 0)
								power = -1 * power;
						//
						if(ve < res)
								break;
						printf("%d ", (power *res));
				}

				printf("\nDo you want to continue(y/Y) : ");
				scanf(" %c", &ch);
		}while(ch == 'y' || ch == 'Y');
		return 0;

}

int fibbonaci(int n)
{
		if(n == 0 || n == 1)
		return n;
		else
		return(fibbonaci(n-1) + fibbonaci(n-2));
}
