/* Author Name		: Sagar kumar giri
 * Date				: 19/12/2021
 * Input			: Source File and a Destination File
 * Sample Execution : Test Case 1:
					  user@emertxe] ./my_cp file1.txt file2.txt
					  Data copied successfully
					  user@emertxe] ls
					  file1.txt file2.txt
					  Test Case 2:
					  user@emertxe] ./my_cp file1.txt
					  Destination file missing
					  Test Case 3:
					  user@emertxe] ./my_cp
					  Error : filenames not passed
					  Test Case 4:
					  user@emertxe] ./my_cp file.txt file1.txt
					  file.txt : No such a file
====================================================================================================================================*/

#include<stdio.h>

//Function Declaration
int my_cp(FILE *fp1,FILE *fp2);

//Command line argument pass in main function
int main(int argc,char *argv[])
{
	//Declare file pointer
	FILE *fp1,*fp2;
	//Open src file in read mode
	fp1 = fopen(argv[1],"r");
	//Open Dest file in write mode
	fp2 = fopen(argv[2],"w");

	//condition for src files open unsuccess or not
	if(argv[1]==NULL)
	{
		printf("Error : filenames not passed\n");
		return -1;
	}
	//condition for dest files opening unsuccess or not 
	 if(argv[2]==NULL)
	{
		printf("Destination file missing\n");
		return -1;
	}
	else
	{
		//Error checking
		if(fp1==NULL)
		{
			printf("%s : No such a file\n",argv[1]);
			return -1;
		}
		//Function calling
		if(my_cp(fp1,fp2))					
			printf("Data copied successfully\n");
		else
			printf("Data not copied successfully\n");
	}
	//Close all opening files
	fclose(fp1);
	fclose(fp2);

	return 0;
}

//Function defination
int my_cp(FILE *fp1,FILE *fp2)
{
	char ch;
	while((ch=fgetc(fp1)) != EOF)
	{
		//Copy data from fp1 to fp2
		fputc(ch,fp2);
	}
	
	//If successfully copy completed then return 1
	return 1;

}

