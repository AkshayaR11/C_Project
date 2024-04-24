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