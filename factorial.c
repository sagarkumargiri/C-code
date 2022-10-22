#include <stdio.h>
//static int num=4,res;


int main()
{
		
		static int num = 4;
		int res;
		char ch;
		do{
				static int num=4,res;
				if(num == 0)
				{
						printf("Give a number: ");
						scanf("%d", &num);
				}
				
				if(num >0)
				{

						res=num*num-1;
						num--;
						return main();
				}
				else if(num == 1)
						return 1;
				else
				{
						printf("%d", res);
						res =0;
				}


				printf("do you cont...\n");
				scanf(" %c", &ch);

		}while(ch == 'y' || ch == 'Y');
		return 0;
}
