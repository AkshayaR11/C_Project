#include <stdio.h>

void exam_entry(int isa1[10][5],int isa2[10][5],int esa[10][5],int roll[],int n)
{
printf("\nEnter the marks one by one\n\n");

    
    printf("Enter Marks of Isa1:\n");

    printf("PHYSICS MATHEMATICS C EEE MMECHANICAL\n\n");
    for(int i=0;i<n;i++)

    {	printf("ISA 1 marks for roll no %d :",roll[i]);
	
	for(int j=0;j<5;j++)
{		
	scanf("%d",&isa1[i][j]);
    } 
}


printf("\nEnter Marks of Isa2:\n");
    printf("PHYSICS MATHEMATICS C EEE MMECHANICAL\n\n");

    for(int i=0;i<n;i++)

    {	printf("ISA 2 marks for roll no %d :",roll[i]);
	
	for(int j=0;j<5;j++)
{		
	scanf("%d",&isa2[i][j]);
    } 
}


printf("\nEnter Marks of ESA:\n");
    printf("PHYSICS MATHEMATICS C EEE MMECHANICAL\n\n");

    for(int i=0;i<n;i++)

    {	printf("ESA marks for roll no %d :",roll[i]);
	
	for(int j=0;j<5;j++)
{		
	scanf("%d",&esa[i][j]);
    } 
}

}

