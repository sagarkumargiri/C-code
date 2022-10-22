#include <stdio.h>
#include <stdlib.h>
struct Student
{
		char name[20];
		int M;
		int C;
		int P;

};

void read_element(struct Student *ptr,int size);
void print_element(struct Student *ptr, int size);

int main()
{
		int n;
		printf("Enter no. of stduent: ");
		scanf("%d", &n);
		struct Student s[n];

		read_element(s,n);
		print_element(s,n);

		return 0;

}

void read_element(struct Student *ptr,int size)
{
		for(int i =0;i <size; i++)
		{
				printf("Give the name of the student : ");
				scanf(" %[^\n]s", ptr[i].name);
				printf("Enter P, C and M marks : ");
				scanf("%d %d %d", &ptr[i].M, &ptr[i].C, &ptr[i].P);
		}
}

void print_element(struct Student *ptr, int size)
{
		printf("\n-----------------------------------------------------\n");
		printf("Name%12s%14s%16s\n","Maths","Physics","Chemistry");
		printf("-----------------------------------------------------\n");
		for(int i =0; i<size;i++)
		{
				printf("%.7s%-7.2d%-12.2d%16.2d\n",ptr[i].name,ptr[i].M,ptr[i].C, ptr[i].P);

		}
		float avgM = (float)(ptr[0].M+ptr[1].M)/size;
		float avgC = (float)(ptr[0].C+ptr[1].C)/size;
		float avgP = (float)(ptr[0].P+ptr[1].P)/size;
		printf("-----------------------------------------------------\n");
		printf("Average%10.2f%12.2f%16.2f\n", avgM, avgC, avgP);
		printf("-----------------------------------------------------\n");


}

