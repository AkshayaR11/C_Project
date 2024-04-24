#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include "std_info.h"
                           
int main()
{

    int n;
    printf("Enter the number of data you wish to enter:\n");
    scanf("%d",&n);  

    struct Student *students = (struct Student *)malloc(n * sizeof(struct Student));

    char choice='y';
    int choice2,roll;	
    char name[50];

    while(choice =='y')
{
    int option;
    printf("1.Entry of Student Information\n");
    printf("2.Display of Grade Card\n");
    printf("Enter your Choice: ");
    scanf("%d",&option);

    switch(option)
    {
        case 1: std_info(students,n);
        break;

        case 2: printf("1.Serach by Roll Number\n");
	printf("2.Search by Name\n");
	printf("Enter your choice : ");
	scanf("%d",&choice2);
	
	switch (choice2)
	{
		case 1: 
		{
        	printf("Enter Roll Number to search: ");
        	scanf("%d", &roll);
		display(students,n ,roll, NULL);
		break;}

		case 2: 
        	{printf("Enter Name to search: ");
        	scanf("%s", name);
        	display(students,n, -1, name);
		break;}

		default: printf("Invalid Choice\n");
		break;
	}
	
        break;
	
 	
	default: printf("Invlaid Choice\n");
	break;

    }

printf("Do you wish to continue(y/n)? : ");
choice=getch();

      
}


return 0;
}


//gcc -c std_info.c -o std_info.o
//gcc -c grade_calc.c -o grade_calc.o
//gcc -c exam_entry.c -o exam_entry.o
//gcc file1.c exam_entry.o std_info.o grade_calc.o -o file1
//file1.exe


