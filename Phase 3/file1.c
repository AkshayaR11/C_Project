#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include "std_info.h"
                           
int main()
{

    int n;
    printf("Enter the number of students data you wish to enter:\n");
    scanf("%d",&n);  

    struct Student *students = (struct Student *)malloc(n * sizeof(struct Student));

    char choice='y';
    int choice2,roll;	
    char name[50];

    while(choice =='y')
{
    int option;
    printf("1.Entry of Student Information\n");
    printf("2.Display Grade Card\n");
    printf("3.Update Marks\n");
    printf("4.Exit\n");
    printf("Enter your Choice: ");
    scanf("%d",&option);

    switch(option)
    {
        case 1: {std_info(students,n);
		
        	calculate(students,n);
		saveStudentData(students,n);
		break;}

        case 2:printall();
	break;

	case 3:{read_data();
		calculate(students,n);
		//saveStudentData(students,n);
		break;}

	case 4:break;
		
	default: printf("Invalid Choice\n");
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


