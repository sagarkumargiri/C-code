#include <stdio.h>
#include <ctype.h>
 
 
  
 int main()
  {
          int character,line,word,flag;
           char ch,c;
  
          do{
                  character =0,line=0,word=0,flag=0;
                  for( ;(ch = getc(stdin)) !=EOF; )
                  {
                  		  if(33 >= ch || 126 <=ch || ch == '\n')
						  {
						  		  flag =1;
						  		  character++;
						  }
						  if(ch == 32)
						  {
						  		  if(flag == 1)
								  {
						  		  		  word++;
						  		  		  flag =0;
								  }
								  character++;

						  }
						  if(ch == '\n')
						  {
						  		  line++;
						  		  character++;
						  }
				  }

				  if(ch == EOF )
				  {
				  		  printf("\ncharacter = %d\nword = %d\nline = %d\n", character, word, line);
				  		  puts("do want do cont....(y/Y):" );
				  		  scanf(" %c", &c);
				  }
		  }while(c == 'y' || c == 'Y');
		  return 0;
  }

