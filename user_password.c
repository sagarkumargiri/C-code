#include <stdio.h>
#include <ctype.h>

int pass_str(char *pass, char *pass_t);

int user_str(char *user, char *pass , char *user_t, char *pass_t);


static char *add;



int main()
{
		static char user1[] = "user1";
		static char pass1[] = "password1";
 
         static char user2[] = "user2";
         static char pass2[] = "password2";

         static char user3[] = "user3";
        static char pass3[] = "password3";
        static int time=3;

		puts("ENTER YOUR USER_NAME AND PASSWORD\n");

		int res;

		char user[20];
		puts("Enter your user_name");
		scanf("%[^\n]s", user);

		char password[20];
		puts("Enter your password");
		scanf(" %[^\n]s", password);

		

		for(int i =1; i<=3; i++)
		{
			
	
		
		//puts("1");
		switch(i)
          {
                  case 1:
                          res = user_str(user,password,user1,pass1);
                          break;
                  case 2:
                          res = user_str(user,password,user2,pass2);
                          break;
                  case 3:
                          res = user_str(user,password,user3,pass3);
                          break;
 
          }
        if (res == 1)
        		break;
		else if(res ==2)
		{
				//time--;
                //puts("+++");
                //printf("invlild password try again time attemp is: %d\n", time);
                //printf("Again give password: ");
				//scanf(" %[^\n]s", pass);
				for(time =3; time>0 || res != 1;--time)
				{
						printf("invlild password try again time attemp is: %d\n", time);
						printf("Again give password: ");
						scanf(" %[^\n]s", password);
						res = pass_str(password,add);
						//--time;

				}
				puts("block");


		}
}

}



int user_str(char *user, char *pass, char *user_t , char *pass_t)
{
		int res,flag=1,i=0;
		static int time =3;
		while(user[i] != '\0')
		{
				if(user[i] != user_t[i])
				{
						flag =0;
						break;
				}

				i++;
				puts("yess");
		}

		if(flag ==1)
		{
				res = pass_str(char *pass, char *pass_t);
				return res;
		}

		else 
				return 0;
}

int pass_str(char *pass, char *pass_t)
{
		int flag=1, res =1;
		while(user[i] != '\0')
		{
                 if(user[i] != user_t[i])
                 {
                         flag =0;
                         break;
                 }

                 i++;
                 puts("yess");

        }

        if(flag == 0)
		{
        		 *add = pass_t;
        		return 2;
		}
        return 1;




}
		
		


