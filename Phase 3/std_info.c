#include<stdio.h>
#include "std_info.h"


void std_info(struct Student* students, int n) 
{
    for (int i = 0; i < n; i++) 
     {
        printf("Enter details for student %d:\n", i + 1);

        printf("Name: ");
        scanf("%s", students[i].name);

        printf("Roll Number: ");
        scanf("%d", &students[i].roll);

	printf("Semester: ");
	scanf("%d",&students[i].sem);
	
	printf("Enter ISA1 marks (out of 25)\n");
	printf("PHYSICS  MATHEMATICS  C  EEE  MECHANICAL\n");
	
	for(int j=0;j<5;j++)
	   {
		scanf("%d",&students[i].isa1[j]);
	    }

	printf("Enter ISA2 marks (out of 25)\n");
	printf("PHYSICS  MATHEMATICS  C  EEE  MECHANICAL\n");
	
	for(int j=0;j<5;j++)
	   {
		scanf("%d",&students[i].isa2[j]);
	    }

	printf("Enter ESA marks (out of 50)\n");
	printf("PHYSICS  MATHEMATICS  C  EEE  MECHANICAL\n");
	
	for(int j=0;j<5;j++)
	   {
		scanf("%d",&students[i].esa[j]);
	    }
      }
}





void saveStudentData(struct Student *students, int n) 
{
    FILE *file = fopen("Data.txt", "w");
    if (file == NULL)
    {
        printf("Error: Unable to open file for writing.\n");
        return;
    }

    fprintf(file, "%d\n", n);

    for (int i = 0; i < n; i++) 
     {
        fprintf(file, "%s %d %d\n", students[i].name, students[i].roll , students[i].sem);

        for (int j = 0; j <5 ; j++) 
            {
                fprintf(file, "%d ", students[i].isa1[j]);}

        fprintf(file, "\n");

        for (int j = 0; j < 5; j++) 
	{
            fprintf(file, "%d ", students[i].isa2[j]);
        }
        fprintf(file, "\n");

        for (int j = 0; j <5; j++) 
	{
            fprintf(file, "%d ", students[i].esa[j]);
        }
	fprintf(file,"\n");

        for (int j = 0; j <5; j++) 
	{
            fprintf(file, "%d ", students[i].total[j]);
        }
	fprintf(file,"\n");

        for (int j = 0; j <5; j++) 
	{
            fprintf(file, "%c ", students[i].grade[j]);
        }
	fprintf(file,"\n");



     }
    fclose(file);
    printf("Student data saved to file with updated marks and grade\n");
}