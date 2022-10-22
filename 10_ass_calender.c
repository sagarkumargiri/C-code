/*Author   				: Sagar kumar giri
 * Date    				: 10/10/2021
 * Input   				: Two interger one for starting day i.e 1 to 7 and another for Nth day of the year i.e 1 to 365
 * Sample execution  	: Enter the value of 'n' : 9
						  Choose First Day :
						  1. Sunday
						  2. Monday
						  3. Tuesday
						  4. Wednesday
						  5. Thursday
						  6. Friday
						  7. Saturday
						  Enter the option to set the first day : 2
						  The 9th day is Tuesday
						  Do you want to continue(y/Y): y
						  (menu to be displayed)
						  Enter the value of 'n' : 9
						  Enter the option to set the first day : 3
						  The 9th day is Wednesday
						  Do you want to continue(y/Y): y
						  Enter the value of 'n' : 9
 						  (Menu to be to displayed)

						  Enter the option to set the first day : 8
						  Error : Invalid input first day should be > 0 and <= 7
                          Do you want to continue(y/Y): y
                          Enter the value of 'n' : 0
                          Error : Invalid Input, n value should be > 0 and <= 365
                          Do you want to continue(y/Y): y
						  Enter the value of 'n' : 366
						  Error : Invalid Input, n value should be > 0 and <= 365 					*/ 










#include <stdio.h>
int main()
{
		//variable declearation 
		int starting_day,Nth_day,remider,day_name ;
		char ch;

		

		do{
		//suggest user to choose starting day from the option
		printf("1-sunday\n");
		printf("2-monday\n");
		printf("3-tuesday\n");
		printf("4-wednesday\n");
		printf("5-thursday\n");
		printf("6-friday\n");
		printf("7-saturday\n");
		

		//suggest user choose one from option
		printf("Enter the starting day of the year from option and enter it's respective number:  \n");
		scanf("%d", &starting_day);

		if(starting_day <= 0 || starting_day >8)
				printf("Error: invalid input first day should be > 0 and < 8");
		else
		{
				//suggest user give the nth day of the year
				printf("Give the Nth day of the year:  ");
				scanf("%d", &Nth_day);

				//checking for Nth day is < 365(Total day in year)
				if(Nth_day > 365)
						printf("Error: invalid input Nth should be less then 365\n");
				else
				{
						//logic for calculate the day name
						remider =  Nth_day%7;
						day_name= remider + (starting_day-1);
						if(day_name>7)
								day_name= day_name - 7;
						

						//calculate the day name
						switch(day_name)
						{
								case 1:
										printf("The %dth day is Sunday\n", Nth_day);
										break;

								case 2:
										printf("The %dth day is Monday\n", Nth_day);
										break;
								case 3:
										printf("The %dth day is Tuesday\n", Nth_day);
										break;
								case 4:
										printf("The %dth day is Wednesday\n", Nth_day);
										break;
								case 5:
										printf("The %dth day is Thursday\n", Nth_day);
										break;
								case 6:
										printf("The %dth day is Friday\n", Nth_day);
										break;
								case 7:
										printf("The %dth day is Saturday\n", Nth_day);
										break;
								//for a special case when a day start with sunday and Nth day is divisible by 7
								case 0:
										printf("The %dth day is Saturday\n", Nth_day);

										
							

						}
						
				}
		}

		//suggest user try another input
		printf("Do you want to continue: then type y otherwise n to exit: \n");
		scanf(" %c", &ch);
		}while(ch == 'y' || ch == 'Y');
		return 0;


}
