#include <stdio.h>
void square_cube(int num,int *sqr,int *cube);


int main()
{
		int num, squre=0,cube=0;

		printf("Give a number: ");
		scanf("%d", &num);
		 square_cube(num,&squre,&cube);

		 printf("%d square = %d\n", num, squre);
		 printf("%d cube = %d\n", num, cube);
		 return 0;
}



void square_cube(int num,int *sqr, int *cube)
{
		*sqr = num*num;
		*cube =*sqr * num;
}
