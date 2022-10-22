/* Author Name			: Suman Kundu
 * Date					: 18/12/2021
 * Input				: Input student details
 * Sample Test			: Enter the number of students : 2
Enter name of the student 1: sagar
Enter roll no. of the student 11
Enter PHYSIC mark: 45
Enter CHEMISTRY mark:52
Enter MATH mark: 14
Enter name of the student 2: gggdwhg
Enter roll no. of the student 22
Enter PHYSIC mark: 47
Enter CHEMISTRY mark:89
Enter MATH mark: 56
------------------------------------------------------------------------
 ROLL NO.      NAME       MATH       PHYSICS       CHEMiSTRY
------------------------------------------------------------------------
    1        sagar         14           45           52
    2        gggdw         56           47           89
-------------------------------------------------------------------------
 Average                   35.00        46.00        70.50
--------------------------------------------------------------------------*/




#include<stdio.h>

//Structure Definition
struct Student
{
	//structure member Declaration
	char name[20];
	int roll_no;
	int phy;
	int chm;
	int math;
};


//Functions Declaration

void read(struct Student *s,int size);	
void print(struct Student *s,int size);
int main()
{
	int size;

	//Prompt the user to enter no. of student
	printf("Enter the number of students : ");
	//Read the value from user
	scanf("%d",&size);

	//Declare Stucture array with size no of element
	struct Student s1[size];

	//Function calling
	read(s1,size);
	print(s1,size);

	return 0;
}
void read(struct Student *s,int size)
{
	//Value store in Structure
	for(int i=0;i<size;i++)
	{
    	printf("Enter name of the student %d: ",i+1);
    	scanf(" %[^\n]s",s[i].name);
    	printf("Enter roll no. of the student %d: ", i+1);
    	scanf("%d", &s[i].roll_no);

    	printf("Enter PHYSIC mark: ");
    	scanf(" %d",&s[i].phy);
    	printf("Enter CHEMISTRY mark:");
    	scanf(" %d",&s[i].chm);
    	printf("Enter MATH mark: ");
    	scanf(" %d",&s[i].math);
	}

}

//Function Defination
void print(struct Student *s,int size)
{
	int m_sum = 0,p_sum = 0,c_sum = 0;

	printf("------------------------------------------------------------------------\n");
	printf(" ROLL NO. %9s %10s %13s %15s\n","NAME","MATH","PHYSICS","CHEMiSTRY");
	printf("------------------------------------------------------------------------\n");

	for(int i=0;i<size;i++)
	{
		printf("%5d %12.5s %10d %12d %12d\n",s[i].roll_no,s[i].name,s[i].math,s[i].phy,s[i].chm);
	}

	printf("---------------------------------------------------------------------------\n");
	printf(" Average");

	//Calculate sum and store
	for(int i=0;i<size;i++)
	{
		m_sum += s[i].math;
		p_sum += s[i].phy;
		c_sum += s[i].chm;
	}

	//Average calculate and print
	printf("%24.2f %12.2f %12.2f\n",(float)m_sum/size,(float)p_sum/size,(float)c_sum/size);

	printf("-----------------------------------------------------------------------------\n");

}
