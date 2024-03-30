#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include "std_info.h"
                           

int main()
{
    int n;
    printf("Enter the number of data you wish to enter:\n");
    scanf("%d",&n);
    char name[n][100];//={"a","b","c","d","e","f","g","h","i","j"};
    int roll[n];//={1,2,3,4,5,6,7,8,9,10};
    int semester[n];//={2,2,2,2,2,2,2,2,2,2};
    
    int isa1[n][5];// ={20,15,15,17}; (2 student data [2][5])
    int isa2[n][5];// = {15,17,23,13};
    int esa[n][5];// ={45,34,25,45};
    
    char choice='y';
    while(choice =='y')
{
    int option;
    printf("1.Entry of Student Information\n");
    printf("2.Entry of marks\n");
    printf("3.Display\n");
    printf("Enter your Choice: ");
    scanf("%d",&option);

    switch(option)
    {
        case 1: std_info(name,roll,semester,n);
        break;

       
        case 2: exam_entry(isa1,isa2,esa,roll,n);
        break;


        case 3: grade_calc(name,roll,semester,isa1,isa2,esa,n);
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


