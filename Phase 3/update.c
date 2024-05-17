#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "std_info.h"


void read_data()
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

	int choice;
	int roll;

	printf("1.Update ISA1 Marks\n");
	printf("2.Update ISA2 Marks\n");
	printf("3.Update ESA Marks\n");
	printf("4.Exit\n");

	printf("Enter your choice: ");

	scanf("%d",&choice);

	switch (choice)
	{
		case 1: 
		{
        	printf("Enter Roll Number to update ISA1 Marks ");
        	scanf("%d", &roll);
		update(students ,roll,1,numStudents);
		break;}

		case 2: 
        	{printf("Enter Roll Number to update ISA2 Marks: ");
        	scanf("%d", &roll);
        	update(students, roll,2,numStudents);
		break;}

		case 3:
		{printf("Enter Roll Number to update ESA Marks: ");
		scanf("%d", &roll);
        	update(students, roll,3,numStudents);
		break;}

		case 4: break;


		default: printf("Invalid Choice\n");
		break;
	}

}


void update(struct Student *students,int roll,int ch,int n)
{
	int found=0;
	for(int i=0;i<n;i++)
	{
	      if (students[i].roll == roll)
		{
		    found =1;
		    if (ch ==1)
			{
			   printf("Enter Updated ISA1 marks (out of 25)\n");
			   printf("PHYSICS  MATHEMATICS  C  EEE  MECHANICAL\n");
			   for(int j=0;j<5;j++)
	  			scanf("%d",&students[i].isa1[j]);

			  calculate(students,n);
			  saveStudentData(students,n);
			}
		 
		    if(ch==2)
			{
		           printf("Enter Updated ISA2 marks (out of 25)\n");
			   printf("PHYSICS  MATHEMATICS  C  EEE  MECHANICAL\n");
			   for(int j=0;j<5;j++)
	  			scanf("%d",&students[i].isa2[j]);

			   calculate(students,n);
			   saveStudentData(students,n);
			}
		
		    if(ch==3)
			{
		           printf("Enter Updated ESA marks (out of 50)\n");
			   printf("PHYSICS  MATHEMATICS  C  EEE  MECHANICAL\n");
			   for(int j=0;j<5;j++)
	  			scanf("%d",&students[i].esa[j]);

			   calculate(students,n);
			   saveStudentData(students,n);
			}
		  }
	}


if(found ==0)
printf("Roll Number Not Found!!\n");


}













