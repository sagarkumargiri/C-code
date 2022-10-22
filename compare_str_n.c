#include <stdio.h>
#include <ctype.h>

int compare_str(char *str1, char *str2, int n);


int main()
{
		char str1[40]; char str2[40];
		int n,t;

		puts("Give 1st string:");
		scanf("%[^\n]s", str1);

		puts("Give 2nd string:");
		scanf(" %[^\n]s", str2);

		


		printf("Give a number upto which compare: ");
		scanf("%d", &n);
		t = compare_str(str1,str2,n);

		if(t == 0)
				printf("Both string are same upto %d element and status = %d\n", n, t);
		else
				printf("The given string are not same upto %d element and status = %d\n", n, t);
		return 0;
}


int compare_str(char *str1, char *str2, int n)
{
		int i,res=0;
		for(i=0; i<=n;i++)
		{
				res = res +((int)str1[i]-(int)str2[i]);

		}

		return res;
}
