#include <stdio.h>
int main()
{
	// declear variable
	int ch;
	// suggest user entry a char
	printf("give percentage to convert into grade\n");

	scanf("%d", &ch);

	if (0 < ch && 100>ch)
	{
		if (91<ch && 100>ch)
				printf("the grade is: A\n");
		else if (81<ch && 91>ch)
				printf("the grade is: B\n");
		else if (61<ch && 81>ch)
				printf("the grade is: C\n");
		else if (41<ch && 61>ch)
				printf("the grade is: D\n");
		else
				printf("fail\n");
	}
	else
			printf("the entry is invalid\n");

	return 0;




}
