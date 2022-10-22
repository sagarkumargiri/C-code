#include <stdio.h>
#include <ctype.h>

void swap(void *v1, void *v2)
{
		double *temp;
		temp = **(double *)v1;
		printf("%lf\n", **temp);
		*(double *)v1 =*(double *)v2;
		*(double *)v2 = temp;
}
void print_array(int *ptr, int size)
{
		int i;
		for(i=0;i <size;i++)
		{
			printf("%d ", *ptr++);
		}
		putchar('\n');
}

int main()
{
		char c1 ='a',c2='b';
		printf("Before c1 = %c, c2 =%c\n", c1, c2);
		swap(&c1,&c2);
		printf("After c1=%c , c2 = %c\n\n", c1, c2);
		
		
		int i1 = 0x12345678,i2= 0xabcdef09;
		printf("Before c1 = %X, c2 =%X\n", i1, i2);
		swap(&i1,&i2);
		printf("After c1=%X , c2 = %X\n\n", i1, i2);
		
		
		float f1 = 2.5,f2=3.5;
		printf("Before f1 = %f, c2 =%f\n", f1, f2);
		swap(&f1,&f2);
		printf("After f1=%f , f2 = %f\n\n", f1, f2);
		
		double d1 = 5.5005,d2=2.5003;
		printf("Before d1 = %lf , d2 =%lf\n", d1, d2);
		swap(&f1,&f2);
		printf("After d1=%lf , d2 = %lf\n\n", d1, d2);
		
		
		int a1[] = {1,2,3,6,7,8} , b1[] ={5,6,7,1,4,6};
		printf("before a1\n");
		print_array(a1, 6);
		printf("before b1\n");
		print_array(b1,6);
		swap(a1,b1);
		printf("after a1\n");
		print_array(a1, 6);
		printf("after b1\n");
		print_array(b1,6);
		return 0;
}


