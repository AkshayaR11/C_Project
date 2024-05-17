#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "std_info.h"


void displayStudentData(struct Student* students,int n,int roll,const char *name);

void printall()
 {
    FILE *file = fopen("data.txt", "r");
    if (file == NULL) {
        printf("Error: Unable to open file for reading.\n");
  
    }

    int numStudents;
    fscanf(file, "%d", &numStudents);

    struct Student *students = malloc(numStudents * sizeof(struct Student));
    if (students == NULL) {
        printf("Error: Memory allocation failed.\n");
        fclose(file);
  
    }

    for (int i = 0; i < numStudents; i++) {
        fscanf(file, "%s %d %d", students[i].name, &students[i].roll,&students[i].sem);
        for (int j = 0; j < 5; j++) {
            
                fscanf(file, "%d", &students[i].isa1[j]);
            
        }
        for (int j = 0; j < 5; j++) {
            fscanf(file, "%d", &students[i].isa2[j]);
        }
        for (int j = 0; j < 5; j++) {
            fscanf(file, " %d", &students[i].esa[j]);
        }
	for (int j = 0; j < 5; j++) {
            fscanf(file, " %d", &students[i].total[j]);
        }
	for (int j = 0; j < 5; j++) {
            fscanf(file, " %c", &students[i].grade[j]);
        }
       
    }

    fclose(file);
 
	int choice2,roll;	
        char name[50];

	printf("1.Search by Roll Number\n");
	printf("2.Search by Name\n");
	printf("Enter your choice : ");
	scanf("%d",&choice2);
	
	switch (choice2)
	{
		case 1: 
		{
        	printf("Enter Roll Number to search: ");
        	scanf("%d", &roll);
		displayStudentData(students,numStudents ,roll, NULL);
		break;}

		case 2: 
        	{printf("Enter Name to search: ");
        	scanf("%s", name);
        	displayStudentData(students,numStudents, -1, name);
		break;}

		default: printf("Invalid Choice\n");
		break;
	}



 
}


void displayStudentData(struct Student* students,int n,int roll,const char *name)
{

char subject[5][100]={"PHYSICS","MATHEMATICS","C      ","EEE    ","MECHANICAL"};
int found = 0;
for (int i = 0; i < n; i++) 
	{
           if ((roll != -1 && students[i].roll == roll) ||(name != NULL && strstr(students[i].name, name) != NULL))
	    {
                found = 1;

                printf("\t\t\n ------------------- GRADE CARD --------------------- \t\t\n\n");
	  	printf("NAME : %s\nROLL NO. : %d\nSEMESTER : %d\n\n",students[i].name,students[i].roll,students[i].sem);
		printf("SUBJECT \t ISA1 \t ISA2 \t ESA \t TOTAL \t GRADE\n\n");

		for(int j=0;j<5;j++)
		  {
		     printf("%s \t %d \t %d \t %d \t %d \t %c\n",subject[j],students[i].isa1[j],students[i].isa2[j],students[i].esa[j],students[i].total[j],students[i].grade[j]);
		  } 
		}
  	   }  
         

if(found ==0)
{
    printf("Invalid Entry!!\n");
}



}