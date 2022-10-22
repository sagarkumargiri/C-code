#include <stdio.h>
#include <ctype.h>

int main()
{
		int ch,i;
		for ( ; (ch = getc(stdin)) != EOF; )
		{
				if( ch == 32 ||ch == 9 )
				{
						i =i+1;
						if(i > 1 || ch == 9)
						{
								continue;
						}
				}
			//	putc(ch ,stdout);
			   printf("%c", ch);
				i =0;
		}

		puts("EOF Received");

		return 0;
}
