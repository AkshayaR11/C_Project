#include <stdio.h>
#include <string.h>
#include "std_info.h"

void display(struct Student* students,int n,int roll,const char *name)
{
	for(int i=0;i<n;i++)
	{
	   for(int j=0;j<5;j++)
	   {
	      students[i].total[j]=students[i].isa1[j]+ students[i].isa2[j]+students[i].esa[j];
	   }
	}


char subject[5][100]={"PHYSICS","MATHEMATICS","C      ","EEE    ","MECHANICAL"};

for(int i=0;i<n;i++)
{
for(int j=0;j<5;j++)
{
	if (students[i].total[j]>=90)
		students[i].grade[j]='S';
	if (students[i].total[j]>=80 && students[i].total[j]<90)
		students[i].grade[j]='A';
	if (students[i].total[j]>=70 && students[i].total[j]<80)
		students[i].grade[j]='B';
	if (students[i].total[j]>=60 && students[i].total[j]<70)
		students[i].grade[j]='C';
	if (students[i].total[j]>=50 && students[i].total[j]<60)
		students[i].grade[j]='D';	
	if (students[i].total[j]<50)
		students[i].grade[j]='F';
	
}
}




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








 	