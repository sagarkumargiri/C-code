#include <stdio.h>
#include <unistd.h>

int main()
{
		
		int i;
		printf("starting\n");
		for(i=1;i<=100;i++)
		{
				printf("\rLoading[");
			
				for(int j=1;j<=i;j++ )
						printf("%c", 35);
				for(int k=0;k<100-i;k++)
						printf("%c", 32);

			
				printf("]%d%%",i);
				sleep(1);
				fflush(stdout);
		}
		printf("\ncomplete\n");

	//	printf("\n");

		return 0;
}
