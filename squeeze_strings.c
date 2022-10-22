#include <stdio.h>

void squeeze_str(char *str1, char *str2);

int main()
{
		printf("Give string 1: ");
		char str1[30];
		scanf(" %29[^\n]s", str1);
		printf("Give string 2: ");
		char str2[20];
		scanf(" %19[^\n]s", str2);
		squeeze_str(str1,str2);
		printf("After squeeze string 1: \n");
		printf("%s", str1);

		return 0;


}


void squeeze_str(char *str1,char *str2)
{
		 int i;
		for( i=0;str1[i] != '\0';i++)
		{
				for(int j=0;str2[j] != '\0';j++)
				{
						if(str1[i] == str2[j])
						{
								int k = i;
								while(str1[k] !='\0')
								{
										str1[k] = str1[k+1];
										k++;

								}
								str1[k] = '\0';
								i=0;
								j=-1;
						}
						

				}
		}

}
