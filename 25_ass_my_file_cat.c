/* Author Name		: Sagar kumar giri
 * Date				: 19/12/2021
 * Input			: Source Files, Destination File
 * Sample Execution : user@emertxe] ./my_cat
					  Hello
					  Hello

					  Test Case 2:
					  user@emertxe] ./my_cat file1.txt
					  <contents of file1.txt>
					  user@emertxe]

					  Test Case 3:
					  user@emertxe] ./my_cat file1.txt file2.txt file3.txt
					  <copy the contents of file1.txt and file2.txt into file3.txt>
					  user@emertxe]
========================================================================================================================*/

#define _GNU_SOURCE
#include <stdio.h>
#include <stdlib.h>

//Function Declaration
void my_cp(FILE *f1, FILE *f2);

int main(int argc, char **argv)
{
	//Declare  file pointer
    FILE *fp1, *fp2, *fp3;
	
	//Take input from standard input and give output to standard output
    if (argc == 1)
    {
        
        	printf("Give a string : \n");
        	my_cp(stdin, stdout);
    }

    else if (argc == 2)
    {
        fp1 = fopen(argv[1], "r");
		
		//Checking for file exist or not 
        if (fp1 == NULL)
        {
            printf("No file exist\n");
            return -1;
        }
        //Function calling
        my_cp(fp1, stdout);
        //Close all file
		fcloseall();
	}

    else if (argc == 3)
    {
    	//src and dest files opening in read mode
        fp1 = fopen(argv[1], "r");
        fp2 = fopen(argv[2], "r");
        //Error handling for files opening
        if (fp1 == NULL || fp2 == NULL)
        {
            printf("No file exist\n");
            return -1;
        }
		
		//Function calling
        my_cp(fp1, stdout);
        my_cp(fp2, stdout);
		
		//Close all file
        fcloseall();

    }

    else if (argc == 4)
    {
    	//src and dest files opening in read mode
        fp1 = fopen(argv[1], "r");
        fp2 = fopen(argv[2], "r");
        //One file open in write mode
        fp3 = fopen(argv[3], "a");
        //Check NULL condition
        if (fp1 == NULL || fp2 == NULL || fp3 == NULL)
        {
            printf("No file exist\n");
            fclose(fp1);
            fclose(fp2);
            return -1;
        }

        //Function calling
        my_cp(fp1, fp3);
        my_cp(fp2, fp3);
        //Close all file
        fcloseall();
        //If successfully copied files then print the validation
        puts("file1 & file2 are copied to file3 successfully\n");
    }
    return 0;

}

//Function Defination
void my_cp(FILE *f1, FILE *f2)
{
    char ch;
    while ((ch = fgetc(f1)) != EOF)
    {
    	//Print character by character in destination file
        fputc(ch, f2);
    }
}
