#include <stdio.h>
#include <ctype.h>


//store
const char user1[] = "user1";
const char pass1[] = "password1";
const char user2[] = "user2";
const char user3[] = "user3";
const char pass2[] = "password2";
const char pass3[] = "password3";

static int time =3;

//functions

int user_str(char *user, char *pass,const char *user_s,const char *pass_s);

int pass_str(char *pass, const char *pass_s);

int compare_str(char *str1,const char *str2);

int wrong_pass(char *str1,const char *str2);


int main()
{
		//static int time=3;
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

                if(res == 1)
				{
                		puts("yes");
                		break;
				}
		}

		if(res == 1)
				puts("yes u r in");
		else if(res ==2)
				puts("block");
		else
				puts("invalid user");


		

}

int compare_str(char *str1,const char *str2)
{
		int res1=1,i;
		while(str2[i] != '\0')
		{
				if (str2[i] != str1[i])
				{
						res1 = 0;
						break;
				}

				i++;
		}
		return res1;
}



int user_str(char *user, char *pass,const char *user_s,const char *pass_s)
{
		int res2 = compare_str(user, user_s);

		if(res2 == 1)
		{
				res2 = pass_str(pass, pass_s);
				return res2;
		}
		else
				return res2;
	//	return res2;
}

int pass_str(char *pass , const char *pass_s)
{
		int res3 = compare_str( pass, pass_s);

		if(res3 ==0)
				 res3 = wrong_pass( pass,pass_s);

		return res3;

}

int wrong_pass(char *pass, const char *pass_s)
{
		time--;
		int res4;
		for(int i=1; res4 == 1 || i<= time;time--)
		{
				printf("wrong password\n try again left attemps: %d\n", time);
				scanf("%[^\n]s", pass);
				res4 = compare_str(pass, pass_s); 
		}

		return res4;
}

