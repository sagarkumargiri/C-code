#include <stdio.h>
#include <ctype.h>





int main()
{
		printf("Give user information\n");
		printf("\n");

		char name[30];
		puts("Give user name :");
		scanf("%[^\n]s", name);

		int age;
		puts("Give user age :");
		scanf("%d", &age);

		char id[20];
		puts("Give user id :");
		scanf(" %[^\n]s", id);


		char mobile[15];
		char ch;
		do{
		puts("Give user mobile number :");
		scanf(" %[^\n]s", mobile);

		int i=0, len=0;
	
		while(mobile[i] !='\0')
		{
				len++;
				i++;
		}

		if(len != 10)
		{
				printf("Invalid mobile number give only 10 digit\n");
				puts("try again (y/Y)");
				scanf(" %c", &ch);
		}
		else
				ch = '1';
		}while(ch =='y' || ch == 'Y');

		if(ch == '1')
				puts("successfully submited");
		else
				puts("submission unsuccess");

		return 0;
}

