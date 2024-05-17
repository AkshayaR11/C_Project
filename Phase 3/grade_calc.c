#include <stdio.h>
#include <string.h>
#include "std_info.h"

void calculate(struct Student* students,int n)
{
	for(int i=0;i<n;i++)
	{
	   for(int j=0;j<5;j++)
	   {
	      students[i].total[j]=students[i].isa1[j]+ students[i].isa2[j]+students[i].esa[j];
	   }
	}

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
}








 	