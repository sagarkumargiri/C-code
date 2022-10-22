#include <stdio.h>
#include <string.h>



//structure definitions
struct subjects 
{
		char sub_name[15];
 		int mark;
};


struct student 
{
		int roll_no;
		char name[20];
		struct subjects *ptr;

};



int main()
{
		//variable declaration
		int no_student, no_subject, choice,total;
		char ch1,ch2;
		do{
				printf("Enter no.of students : ");
				//reading no. of student from user
				scanf("%d", &no_student);
				//declare a structure student array with no_student element
				struct student s1[no_student];
				printf("Enter no.of subjects : ");
				//reading no. of subject from user
				scanf("%d", &no_subject);
				//declare a structure subject array with no_subject element
				//struct subjects sub[no_subject];
				struct subjects *ptr_arr[no_stduent];
				for(int i=0;i<no_student;i++)
				{
						ptr_arr[i]= malloc(no_subject*sizeof(struct subjects));
						s1[i].ptr = &ptr_arr[i];
				}


				//loop for reading subject name from user and store in structure
				for(int i=0;i<no_subject;i++)
				{
						printf("Enter the name of subject %d : ", i+1);
						scanf(" %14[^\n]s", s[i].ptr->sub_name);
				}

				//loop for reading student details
				// static int j=0;
				for(int i=0; i<no_student;i++)
				{
						printf("----------Enter the student-%d datails-------------\n", i+1);
						printf("Enter the student Roll no. : ");
						scanf(" %d", &s1[i].roll_no);
						printf("Enter the student-%d name :", i+1);
						scanf(" %19[^\n]s", s1[i].name);
						static int j=0;
						//loop for taking each subject mark from user
						printf("j=%d\n", j);
						for(j ;j < no_subject ;j++)
						{
								printf("Enter %s mark: ", s1[j].ptr->sub_name);
								scanf(" %d", &sub[i][j].mark);
					}
				}
				//j=0;
				do{
						//display student manu
						printf("----Display Menu----\n");
						printf("%s\n%s\n%s","1. All student details"
                                   		   ,"2. Particular student details"
                                   		   ,"Enter your choice :");
                		//reading choice of display student record
                		scanf(" %d", &choice);
                		if(choice == 1)
						{
								printf("-----Menu for all student details-----\n");
								printf("%-5s%-5s","ROLL NO.", "NAME");
								for(int i =0;i< no_subject;i++)
								{
										printf("%-5s", sub[i].sub_name);

								}
								printf("%-5s%s\n", "AVERAGE", "GRADE");
								for(int i=0;i<no_student;i++)
								{
										printf(" %-5d%-10.5s", s1[i].roll_no,s1[i].name);
										total =0;
										for(int j=0 ;j<no_subject;j++)
										{
												printf("%-5d", sub[j].mark);
												total = total + sub[j].mark;
										}
										printf("%-5d%c\n", total/no_subject,'A');
								}
								//j=0;
						}

						printf("Do you want to continue to display(Y/y) : ");
						scanf(" %c", &ch1);
				}while(ch1 == 'y' || ch1 == 'Y');

				printf("Do you want to continue(Y/y) : ");
				scanf(" %c", &ch2);
		}while(ch2 == 'y' || ch2 == 'Y');
		return 0;
}


