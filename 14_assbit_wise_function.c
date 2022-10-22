/*Author   					:sagar kumar giri
 * Date    					:
 * Input   					:
 * Sample execution  		: Select bit operation from below list
							1. get_nbits
							2. replace_nbits
							3. get_nbits_from_pos
							4. replace_nbits_from_pos
							5. toggle_bits_from_pos
							6. print_bits
							Enter your choice: 3
							Enter num : 12
							Enter n: 3
							Enter pos : 5
							Binary format for 12 -> 0000 0000 0000 0000 0000 0000 0000 1100
							3 bits from position 5 => 0000 0000 0000 0000 0000 0000 0000 0001
							Value at 12[5(pos):3(bits)] -> 1
							Do you want to continue(y/Y) : n		*/

#include <stdio.h>

//function declaration for get n bit from lsb of given number
int get_nbits(int num, int n);

//function  declaration for replace n bit from the given value and add to the given num
int replace_nbits(int num, int n, int val);

//function  declaration for get n bit from the the number from given position 
int get_nbits_from_pos(int num, int n, int pos);

//function  declaration for replace n bit from the postion of the  number
int replace_nbits_from_pos(int num, int n, int pos, int val);

//function  declaration for  toggle the bit of the number from the position
int toggle_bits_from_pos(int num, int n, int pos);

//function  declaration for  print the binary value of the number
void print_bits(unsigned int num,int n);


int main()
{

		//variable declaration
		int choose,num,n, output,value,pos;
		char ch;
		do{
		//show  the options 
		printf("Select bit operation from below list :\n\n%s\n%s\n%s\n%s\n%s\n%s\n",
						"1. get_nbits",
						"2. replace_nbits",
						"3. get_nbits_from_pos",
						"4. replace_nbits_from_pos",
						"5. toggle_bits_from_pos",
						"6. print_bits");
		//taking the user choose of operation
		printf("Enter your choice: ");
		scanf(" %d", &choose);

		switch(choose)
		{
				//case for get n bit from the number
				case 1:
						printf("Enter num : ");
						scanf("%d", &num);
						printf("Enter n: ");
						scanf(" %d", &n);
						//calling the function and storing in variable
						output = get_nbits(num,n);
						//print the output in binary and decimal
						printf("output ---> in decimal: %d\n%24s", output, "in binary : ");
						print_bits(output,12);
						printf("\n");
						break;
				//case for replace n bit from the given value and add to the given num
				case 2:
						
						printf("Enter num : ");
                        scanf("%d", &num);
                        printf("Enter n: ");
                        scanf(" %d", &n);
                        printf("Enter value: ");
                        scanf("%d", &value);
                        //caling the function
                        output = replace_nbits(num,n, value);
                        //print the output in binary and decimal
                        printf("output ---> in decimal: %d\n%24s", output, "in binary : ");
						print_bits(output,8);
						printf("\n");
						break;
				//case for get n bit from the the number from given position  
				case 3:
						printf("Enter num : ");
                        scanf("%d", &num);
                        printf("Enter n: ");
                        scanf(" %d", &n);
                        printf("Enter pos: ");
                        scanf("%d", &pos);
                        if(pos > n)
						{
								//caling the function
								output = get_nbits_from_pos(num,n,pos); 
								//print the output in binary and decimal
                        		printf("output ---> in decimal: %d\n%24s", output, "in binary : ");
                        		print_bits(output,32);
                        		printf("\n");
						}
						else
								printf("Error : position should be greater then n\n");
                        break;
                case 4:
                		printf("Enter num : ");
                        scanf("%d", &num);
                        printf("Enter n: ");
                        scanf("%d", &n);
                        printf("Enter value: ");
                        scanf("%d", &value);
                        printf("Enter pos: ");
                        scanf("%d", &pos);
                        //checking the position value is greater or not from the number of bit
                        if(pos > n)
						{
								//calling the function
								output = replace_nbits_from_pos(num,n,value,pos);
								//print the output in binary and decimal
                        		printf("output ---> in decimal: %d\n%24s", output, "in binary : ");
                        		print_bits(output,32);
                        		printf("\n");
						}
						//error for postion is grater then no. of bit
						else
								printf("Error : position should be greater then n\n");
                        break;
              case 5:
              			printf("Enter num : ");
                        scanf("%d", &num);
                        printf("Enter n: ");
                        scanf("%d", &n);
                        printf("Enter pos: ");
                        scanf("%d", &pos);
                        if(pos > n)
                        {
                                //calling the function 
                                output = toggle_bits_from_pos(num,n,pos);
                                 //print the output in binary and decimal
                                 printf("output ---> in decimal: %d\n%24s", output, "in binary : ");
                                 print_bits(output,12);
                                 printf("\n");
                         }
                        //error for postion is grater then no. of bit
                        else
                                 printf("Error : position should be greater then n\n");
                        break;

              case 6:
              			printf("Enter number : ");
              			scanf(" %d", &num);
              			//print the output in binary
              			print_bits(num,12);
              			break;
              default:
              			printf("Error : invalid option choose\n");
        }
        //suggest user to try another one the program
        printf("Do you want to continue(y/Y) :");
        scanf(" %c", &ch);
		}while(ch == 'y' || ch == 'Y');
		return 0;

}


int get_nbits(int num, int n)
{
		return (num &((1 << n) -1));
}

int replace_nbits(int num, int n, int val)
{
		return(num & (1 << n)) | (val &((1 << n) -1));
}
int get_nbits_from_pos(int num, int n, int pos)
{
		return ((num >> (pos+1-n)) & ((1 << n)-1));
}
int replace_nbits_from_pos(int num, int n, int val, int pos)
{

		return( (((num >> (pos+1-n)) & ((1 << n)-1)) & (val &((1 << n) -1))) <<(pos+1-n)) ;
}
int toggle_bits_from_pos(int num, int n, int pos)
{
		return (   ((((unsigned int)-1 >> 31-n+1)) << (pos+1-n)) ^ num  );
}

void print_bits(unsigned int num,int n)
{
		for(int i=n-1;i>=0;i--)
		{
				if(num >> i & 1 == 1)
						printf("1");
				else
						printf("0");
		}

}



