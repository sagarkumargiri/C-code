/* Author Name		                 : Sagar kumar giri
 * Date				  : 19/12/2021
 * Input				  : Two Integers 
 * Sample Execution  			  : Menu :
					  1. Add element
					  2. Remove element
					  3. Display element
					  4. Exit from the program

					  Choice ---> 1
					  Enter the type you have to insert:
					  1. int
					  2. char
					  3. float
					  4. double
					  Choice ---> 2
					  Enter the char : k
					  1. Add element
					  2. Remove element
					  3. Display element
					  4. Exit from the program
					  Choice ---> 3
					  -------------------------
					  0 -> k
					  -------------------------
					  1. Add element
					  2. Remove element
					  3. Display element
					  4. Exit from the program
					  Choice ---> 1
					  Enter the type you have to insert:
					  1. int
					  2. char
					  3. float
					  4. double
					  Choice ---> 1
					  Enter the int : 10
					  1. Add element
					  2. Remove element
					  3. Display element
					  4. Exit from the program
					  Choice ---> 3
					  ------------------------
					  0 -> k (char)
					  1 -> 10 (int)
					  ------------------------
					  1. Add element
					  2. Remove element
					  3. Display element
					  4. Exit from the program

					  Choice ---> 2
					  0 -> k
					  1 -> 10
					  Enter the index value to be deleted : 0
					  index 0 successfully deleted.
					  1. Add element
					  2. Remove element
					  3. Display element
					  4. Exit from the program
					  Choice ---> 4
*/


#include<stdio.h>
#include<stdlib.h>

//function declaratoin
int Remove_Elements_Funcntion( float *Array, int option,int Index_Value, int *Char_flag, int *Integer_flag, int *Double_Flag);
int Add_Elements_Function( float *Array, int option, int *Char_flag, int *Integer_flag, int *Double_Flag);
int View_Elements_Function( float *Array, int *Char_flag, int *Integer_flag, int *Double_Flag);


int main()
{

    //variable declaration
    int choice;
    int option;
    int Char_flag = 0,Integer_flag = 0, Double_Flag = 0;
    int Index_Value;

    //dynamic memory allocation
    float *Array = calloc(8,sizeof(char));


    do
    {

        //display the menu of operation
        printf("\nMENU : \n1. Add element\n2. Remove element\n3. Display element\n4. Exit from the program\n");
        printf("Choice : ");
        scanf("%d",&choice);

        //display the menu for operation 1:
        if ( choice == 1 )
        {
            printf("Enter the type you have to insert : \n");
            printf("1. CHAR\n2. INT\n3. FLOAT\n4. DOUBLE\n");
            printf("Choice : ");
            scanf("%d",&option);
        }

     //swicth case for based on the operation choose
        switch(choice)
        {
            case 1:
                //function calling of add element
                Add_Elements_Function(Array,option,&Char_flag,&Integer_flag,&Double_Flag);
                break;

            case 2:
                //function calling of views the element
                View_Elements_Function(Array,&Char_flag,&Integer_flag,&Double_Flag);
                printf("Enter the Index value to be deleted : \n");
                scanf("%d",&Index_Value);

                //calling the function to remove the element
                Remove_Elements_Funcntion(Array,option,Index_Value,&Char_flag,&Integer_flag,&Double_Flag);
                printf("Index %d successfully deleted\n",Index_Value);
                break;

            case 3:
                //calling for view the element
                View_Elements_Function(Array,&Char_flag,&Integer_flag,&Double_Flag);
                break;
        }


     //if user choose 4 then terminate the program
    }while( choice != 4 );
    return 0;
}

//function definition for add element based on user choose data type
int Add_Elements_Function( float *Array, int option, int *Char_flag, int *Integer_flag, int *Double_Flag)
{
   
    switch (option)
    {

        case 1:
        		//case for add char data type
            if(*Char_flag == 2 || *Double_Flag == 1)
            {
                printf("No space\n");
            }

            else if (*Char_flag == 0)
            {
                printf("Enter the char : ");
                scanf("\n%c",(char *)Array);
                *Char_flag = 1;
            }

            else if( *Char_flag == 1)
            {
                if ( (*(char *)Array) != 0 )
                {
                    printf("Enter the char : ");
                    scanf("\n%c",(char *)Array+1);
                    *Char_flag = 2;
                }
                else
                {
                    printf("Enter the char : ");
                    scanf("\n%c",(char *)Array);
                    *Char_flag = 2;
                }
            }
            break;


        case 2:
            //case adding int data type 
            if( *Integer_flag == 1 || *Integer_flag == 2 || *Double_Flag == 1)
            {
                printf("No space\n");
            }
            else if (*Integer_flag == 0)
            {
                printf("Enter the int : ");
                scanf("\n%d",(int *)Array+4);
                *Integer_flag = 1;
            }
            break;

        case 3:
            //case for adding float data type
            if( *Integer_flag == 2 || *Integer_flag == 1  || *Double_Flag == 1)
            {
                printf("No space\n");
            }
            else if (*Integer_flag == 0)
            {
                printf("Enter the float : ");
                scanf("\n%f",(float *)Array+4);
                *Integer_flag = 2;
            }
            break;

        case 4:
            //case for adding double data type
            if ( *Char_flag == 0 && *Integer_flag == 0 )
            {
                printf("Enter the double : ");
                scanf("\n%lf",(double *)Array);
                *Double_Flag = 1;
            }
            else
                printf("No space\n");
            break;

    }
}

//function definition of view element
int View_Elements_Function( float *Array, int *Char_flag, int *Integer_flag, int *Double_Flag)
{
    printf("--------------------------------------\n");
    //printing the char data type 
    if ( *Char_flag == 1 )
    {
        if ( *((char *)Array) != 0 )
            printf("0 -> %c\n",*((char *)Array));
        else
            printf("1 -> %c\n",*((char *)Array+1));
    }

    else if ( *Char_flag == 2 )
    {
        printf("0 -> %c\n",*((char *)Array));
        printf("1 -> %c\n",*((char *)Array+1));
    }

    //printing the int data type
    if ( *Integer_flag == 1 )
        printf("4 -> %d\n",*((int *)Array+4));

    //printing the float data type
    if ( *Integer_flag == 2)
        printf("4 -> %f\n",*((float *)Array+4));

    //printing the double data type
    if ( *Double_Flag == 1 )
        printf("0 -> %lf\n",*((double *)Array));
    printf("--------------------------------------\n");

}

//function definition of remove element 
int Remove_Elements_Funcntion( float *Array, int option,int Index_Value, int *Char_flag, int *Integer_flag, int *Double_Flag)
{
    
    if ( Index_Value == 0 || Index_Value == 1)
    {
        //remove the char data type
        if ( *Char_flag == 2 )
        {
            *((char *)Array+Index_Value) = 0;
            *Char_flag = 1;
        }

        else if ( *Char_flag == 1 )
        {
            *((char *)Array+Index_Value) = 0;
            *Char_flag = 0;
        }
		//remove the double data type
        else if ( *Double_Flag == 1 )
        {
            *((double *)Array+Index_Value) = 0;
            *Double_Flag = 0;
        }

        else if (*Char_flag == 0)
        {
            printf("No element to remove\n");
        }
    }


    
    if(Index_Value == 4)
    {
    	//remove the int data type
        if ( *Integer_flag == 1 )
        {
            *((int *)Array+Index_Value) = 0;
            *Integer_flag = 0;
        }
        //remove the float data type
        else if ( *Integer_flag == 2 )
        {
            *((float *)Array+Index_Value) = 0;
            *Integer_flag = 0;
        }
        else if (*Integer_flag == 0)
        {
            printf("No element to remove\n");
        }
    }
}

